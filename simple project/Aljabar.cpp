// created by zugyonozz
#include <iostream>
using namespace std;

/**
 * @brief Trait untuk menentukan apakah suatu tipe adalah tipe numerik.
 * 
 * @tparam T Tipe yang akan dicek.
 */
template <typename T>
struct isNum {
	static constexpr bool state = false; ///< Default: bukan tipe numerik.
};

// Spesialisasi untuk tipe numerik
template <> struct isNum<int>    { static constexpr bool state = true; };
template <> struct isNum<float>  { static constexpr bool state = true; };
template <> struct isNum<double> { static constexpr bool state = true; };
template <> struct isNum<size_t> { static constexpr bool state = true; };

/**
 * @brief Trait sederhana untuk membandingkan dua tipe.
 * 
 * @tparam T1 Tipe pertama.
 * @tparam T2 Tipe kedua.
 */
template <typename T1, typename T2>
struct is_same_type {
	static constexpr bool state = false;
};

// Jika kedua tipe sama
template <typename T1>
struct is_same_type<T1, T1> {
	static constexpr bool state = true;
};

/**
 * @brief Mirip dengan `std::enable_if`, hanya akan menghasilkan `type` jika `Cond == true`.
 * 
 * @tparam Cond Kondisi boolean.
 * @tparam T Tipe yang akan dipilih jika `Cond == true`.
 */
template <bool Cond, typename T = void>
struct typeif; // Tanpa spesialisasi default (Cond == false → tidak ada type).

template <typename T>
struct typeif<true, T> {
	using type = T;
};

/**
 * @brief Alias template untuk mempersingkat penggunaan `typeif`.
 */
template <bool Cond, typename T>
using typeif_t = typename typeif<Cond, T>::type;

/**
 * @brief Class template representasi satu suku aljabar, seperti `5x`, `3.2y`.
 * 
 * @tparam T Tipe data koefisien. Harus tipe numerik, seperti int, float, dll.
 */
template <typename T>
class Suku {
private:
	T koefisien;   ///< Nilai koefisien dari suku.
	char variabel; ///< Karakter variabel, contoh: 'x', 'y'.

public:
	/// @brief Konstruktor default.
	Suku() = default;

	/**
	 * @brief Konstruktor utama. Hanya diaktifkan jika `T` adalah tipe numerik.
	 * @param koefisien Nilai koefisien.
	 * @param variabel Variabel aljabar.
	 */
	Suku(typeif_t<isNum<T>::state, T> koefisien, char variabel) {
		this->koefisien = koefisien;
		this->variabel = variabel;
	}

	/**
	 * @brief Copy constructor. Melakukan cast jika koefisien berbeda tipe.
	 * @param other Objek `Suku` lain yang akan disalin.
	 */
	Suku(const Suku& other) {
		if (is_same_type<decltype(koefisien), decltype(other.koefisien)>::state)
			this->koefisien = other.koefisien;
		else
			this->koefisien = static_cast<decltype(koefisien)>(other.koefisien);
		this->variabel = other.variabel;
	}

	/// @brief Mendapatkan variabel.
	char getVariabel() const noexcept { return this->variabel; }

	/// @brief Mendapatkan koefisien.
	char getKoefisien() const noexcept { return this->koefisien; }

	/// @brief Mendapatkan suku dalam bentuk string, contoh: "5x".
	string getSuku() const noexcept { return to_string(this->koefisien) + this->variabel; }

	/// @brief Menampilkan suku ke layar.
	void printSuku() { cout << to_string(koefisien) << variabel; }
};

/**
 * @brief Operator penjumlahan dua `Suku<int>` dengan variabel yang sama.
 * 
 * @param a Suku pertama.
 * @param b Suku kedua.
 * @return Suku hasil penjumlahan.
 */
Suku<int> operator+(Suku<int> a, Suku<int> b) {
	return {(a.getKoefisien() + b.getKoefisien()), a.getVariabel()};
}

/// @brief Fungsi utama. Demonstrasi penggunaan class template `Suku`.
int main() {
	Suku<int> a = {1, 'x'};
	Suku<int> b = {5, 'x'};
	Suku<int> c = a + b;
	c.printSuku(); // Output: 6x
}