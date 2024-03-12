

#pragma once

#include <stdexcept>

template <typename T>
class Array
{
private:
	unsigned int	size;
	T*				array;
public:
	Array() : size(0), array(new T[0]) {}

	Array(unsigned int n) : size(n), array(new T[n]) {}

	Array(const Array& other) : size(other.size), array(new T[other.size]) {
		for (unsigned int i = 0; i < size; ++i)
			array[i] = other.array[i];
	}

	~Array() { delete[] array; }

	Array& operator=(const Array& other) {
		if (this != &other) {
			delete[] array;
			size = other.size;
			array = new T[size];
			for (unsigned int i = 0; i < size; ++i)
				array[i] = other.array[i];
		}
		return *this;
	}

	T&	operator[](unsigned int index) const {
		if (index >= size)
			throw std::out_of_range("Index out of range");
		return array[index];
	}

	unsigned int getSize() const {
		return size; }
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T>& arr) {
	for (unsigned int i = 0; i < arr.getSize(); i++) {
		os << arr[i] << " ";
	}
	os << std::endl;
	return os;
}