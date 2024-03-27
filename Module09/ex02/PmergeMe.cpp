
#include "PmergeMe.hpp"

Pmerge::Pmerge() {}

Pmerge::~Pmerge() {}

void	Pmerge::is_integer(std::string str) {
	int i = 0, digits = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i]) {
		if (!isdigit(str[i])) {
			std::cout << str << std::endl;
			std::cout << "Error: not a Digit\n";
			exit(1);
		}
		i++;
		digits++;
	}
	long temp = std::atol(str.c_str());
	if (digits > 10 || (temp > 2147483647)) {
		std::cout << "Error: number too big\n";
		exit(1);
	}
	if (temp < 0) {
		std::cout << "Error: negativ number\n";
		exit (1);
	}
}

void	Pmerge::check_fill_containers(char **nums) {
	for (int i = 1; nums[i]; i++) {
		is_integer(nums[i]);
		int temp = std::atoi(nums[i]);
		this->deque.push_back(temp);
		this->vector.push_back(temp);
	}
	if (is_sorted(this->deque) || is_sorted(this->vector))
		return ;

	unsigned long long start = current_time();
	mergeSort(this->vector);
	is_sorted(this->vector);
	unsigned long long end = current_time();
	std::cout << end - start << std::endl;

	start = current_time();
	mergeSort(this->deque);
	is_sorted(this->vector);
	end = current_time();
	std::cout << end - start << std::endl;
}

unsigned long long Pmerge::current_time() {
	struct timeval currentTime;
	gettimeofday(&currentTime, NULL);
	
	unsigned long long microseconds = currentTime.tv_sec * 1000000LL + currentTime.tv_usec;
	return microseconds;
}