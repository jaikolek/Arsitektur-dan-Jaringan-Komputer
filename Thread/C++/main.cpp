#include <iostream>
#include <thread>

// this for helping printed number in thread
static int number;
// method for helping set variable number = i
int get_number(int i)
{
	return number = i;
}

// multi handled thread
void printed()
{
	using namespace std::literals::chrono_literals;
	
	if (number % 2 != 0)
	{
		// print odd thread and delay for 1 second
		std::cout << "Printed..." << number << std::endl;
		std::this_thread::sleep_for(1s);
	}
	else
	{
		// print odd thread and delay for 2,5 second
		std::cout << "Printed..." << number << std::endl;
		std::this_thread::sleep_for(2.5s);
	}
}

// single handled thread
void print_odd_thread()
{
	using namespace std::literals::chrono_literals;
	// print odd thread and delay for 1 second
	std::cout << "Thread " << number << " is Working" << std::endl;
	std::this_thread::sleep_for(1s);
}

void print_even_thread()
{
	using namespace std::literals::chrono_literals;
	// print odd thread and delay for 2,5 second
	std::cout << "Thread " << number << " is Working" << std::endl;
	std::this_thread::sleep_for(2.5s);
}

int main()
{
	/*
	* multi thread handler
	for (int i = 1; i <= 20; i++)
	{
		get_number(i);
		std::thread print(printed);
		print.join();
	}
	*/
	
	// single thread handler
	for (int i = 1; i <= 20; i++)
	{
		get_number(i);
		if (i % 2 != 0)
		{
			// thread odd
			std::thread odd(print_odd_thread);
			odd.join(); // join when previous thread done
		}
		else
		{
			// thread even
			std::thread even(print_even_thread);
			even.join(); // join when previous thread done
		}
	}

	std::cout << "Thread Complete..." << std::endl;
	// for exe file, not closed to fast after finish the task
	std::cin.get();
	return 0;
}