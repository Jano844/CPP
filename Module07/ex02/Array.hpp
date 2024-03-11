

#pragma once

template <typename T>
class Array
{
private:
	unsigned int	size;
	T*				array;
public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	~Array();
	Array& operator=(const Array& other);

	T& operator[](unsigned int index);
	unsigned int getSize() const;
};