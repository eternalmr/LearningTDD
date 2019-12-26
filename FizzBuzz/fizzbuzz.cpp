#include "myfun.hpp"
#include <iostream>

int main()
{
	for (int i = 1; i <= 100; ++i)
	{
		if (DivideByThree(i) && DivideByFive(i))
		{
			std::cout << "FizzBuzz" << std::endl;
		}else if (DivideByThree(i) || IncludeThree(i))
		{
			std::cout << "Fizz" << std::endl;
		}else if (DivideByFive(i))
		{
			std::cout << "Buzz" << std::endl;
		}
		else {
			std::cout << i << std::endl;
		}
	}

	system("pause");

	return 0;
}