#include <iostream>
using namespace std ;

template <typename T> class Vec {
private:
	T* datas ;
	size_t cap ; // size_t bilangan bulat non-negatif
public:
	// constructor Vec
	Vec(const T& data) {
		this->cap = 1 ;
		this->datas = new T[cap] ;
		this->datas[cap - 1] = data ;
	}
	// operator []
	const T operator[](size_t id) const {
		return this->datas[id] ;
	}
	// function add data
	Vec& add(const T& data) {
		this->cap++ ;
		T* temp = this->datas ;
		this->datas = new T[cap] ;
		for(int i = 0; i < cap - 1; i++) {
			this->datas[i] = temp[i] ;
		}
		this->datas[cap - 1] = data ;
		delete[] temp ;
		return *this ;
	}
	// swap data
	Vec& swap(size_t dstId, size_t srcId) {
		T temp = this->datas[srcId] ;
		this->datas[srcId] = this->datas[dstId] ;
		this->datas[dstId] = temp ;
		return *this ;
	}
	// delete data
	Vec& del(size_t id) {
		if(id >= cap) throw runtime_error("id out of range!");
		for(int i = id; i < cap; i++) {
			if(i == cap - 1) break ;
			swap(i, i + 1);
		}
		this->cap-- ;
		return *this ;
	}
	size_t getCap() {
		return this->cap ;
	}
} ;

int main(){
	Vec v(1) ;
	v.add(2) ;
	v.add(3) ;
	v.add(4) ;
	v.add(5) ;
	for(int i = 0; i < v.getCap(); i++) {
		cout << v[i] << ", ";
	}
	cout << "\n" ;
	v.del(3);
	for(int i = 0; i < v.getCap(); i++) {
		cout << v[i] << ", ";
	}
}