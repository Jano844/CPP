
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


	// sort for vector and stop time
	unsigned long long start = current_time();
	fill_container(this->vector, nums);
	if (is_sorted(this->vector))
		return ;
	merge_insert_sort(this->vector);
	unsigned long long total_vec = current_time() - start;

	// sort for deque and stop time
	start = current_time();
	fill_container(this->deque, nums);
	if (is_sorted(this->deque))
		return ;
	merge_insert_sort(this->deque);
	unsigned long long total_deq = current_time() - start;



	//print unsorted list
	for (int i = 1; nums[i]; i++)
		std::cout << nums[i] << " ";
	std::cout << std::endl;
	// print sorted list and time to sort for each container
	print(this->vector);
	std::cout << std::fixed << "Time to process a range of 5 elements with std::vector : " << std::setprecision(5) << total_vec << "us" << std::endl;
	std::cout << std::fixed << "Time to process a range of 5 elements with std::deque : " << std::setprecision(5) << total_deq << "us" << std::endl;
}

unsigned long long Pmerge::current_time() {
	struct timeval currentTime;
	gettimeofday(&currentTime, NULL);
	
	unsigned long long microseconds = currentTime.tv_sec * 1000000LL + currentTime.tv_usec;
	return microseconds;
}