

#include "Array.hpp"
#include <stdexcept>

template<typename T>
Array<T>::Array(unsigned int n) : size(n), array(new T[n]) {}

template<typename T>
Array<T>::Array(const Array& other) : size(other.size), array(new T[other.size]) {
	for (unsigned int i = 0; i < size; ++i) {
		array[i] = other.array[i];
	}
}

template<typename T>
Array<T>::~Array() {
	delete[] array;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this != &other) {
		delete[] array;
		size = other.size;
		array = new T[size];
		for (unsigned int i = 0; i < size; ++i) {
			array[i] = other.array[i];
		}
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= size) {
		throw std::out_of_range("Index out of range");
	}
	return array[index];
}

template<typename T>
unsigned int Array<T>::getSize() const {
	return size;
}

// Explicit instantiation for needed types
template class Array<int>;
template class Array<float>;
// Add more types as needed
