

#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <cstdlib>

#include <sys/time.h>

#define BUCKET_SIZE 50

class Pmerge
{
private:
	std::deque<int> deque;
	std::vector<int> vector;


	Pmerge(Pmerge const &other);
	Pmerge& operator=(Pmerge const &other);
public:
	Pmerge();
	~Pmerge();

	void	is_integer(std::string str);
	void	check_fill_containers(char **nums);
	void	print_containers();
	unsigned long long current_time();

	template<typename T>
	void print(const T& cont) {
		typename T::const_iterator begin = cont.begin();
		typename T::const_iterator end = cont.end();

		while (begin != end) {
			std::cout << *begin << " ";
			begin++;
		}
		std::cout << std::endl;
	}

	template<typename T>
	void	insertsort(T& array) {
		for(int i = 1; i < static_cast<int>(array.size()); i++) {
			int temp = array[i];
			int j = i - 1;
			
			while(j >= 0 && array[j] > temp) {
				array[j + 1] = array[j];
				j--;
			}
			array[j + 1] = temp;
		}
	}

	template<typename T>
	void	mergeSort(T& array) {
		int length = static_cast<int>(array.size());
		if (length <= BUCKET_SIZE) return;
		
		int middle = length / 2;
		T leftArray;
		T rightArray;
		
		int i = 0;
		
		for(; i < length; i++) {
			if(i < middle) {
				leftArray.push_back(array[i]);
			}
			else {
				rightArray.push_back(array[i]);
			}
		}
		mergeSort(leftArray);
		mergeSort(rightArray);
		if (leftArray.size() <= BUCKET_SIZE && rightArray.size() <= BUCKET_SIZE) {
			insertsort(leftArray);
			insertsort(rightArray);
		}
		merge(leftArray, rightArray, array);
	}

	template<typename T>
	void	merge(T& leftArray, T& rightArray, T& array) {
		int leftSize = static_cast<int>(array.size()) / 2;
		int rightSize = static_cast<int>(array.size()) - leftSize;
		int i = 0, l = 0, r = 0; 

		while(l < leftSize && r < rightSize) {
			if(leftArray[l] < rightArray[r]) {
				array[i] = leftArray[l];
				i++;
				l++;
			}
			else {
				array[i] = rightArray[r];
				i++;
				r++;
			}
		}
		while(l < leftSize) {
			array[i] = leftArray[l];
			i++;
			l++;
		}
		while(r < rightSize) {
			array[i] = rightArray[r];
			i++;
			r++;
		}
	}

	template<typename T>
	bool	is_sorted(T& array) {
		for(int i = 1; i < static_cast<int>(array.size()); i++) {
			if (array[i - 1] >= array[i]) {
				std::cout << std::endl << "Not Sorted\n";
				return false;
			}
		}
		std::cout << std::endl << "Sorted\n";
		return true;
	}
};
