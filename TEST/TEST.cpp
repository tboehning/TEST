#include <iostream>
#include "MyClass.h"

#include <thread>
#include <future>

int test() {
	return 100;
}

int row(const int &num) {
	unsigned long long sum = 1;

	for (int i = 1; i <= num; i++) {
		sum += i;
	}

	return sum;
}

int main()
{
	MyClass c;

	auto future1 = std::async(row, 9999999999999999);
	auto future2 = std::async(&MyClass::return_ten, &c);

	int num1 = future1.get();
	

	std::cout << "Row =  " << num1 << "\n";
	
	
	return 0;
}
