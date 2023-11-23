#pragma once
#include <iostream>
void foo(int a)
{
	for (int i(0); i < a; ++i)
	{
		std::cout << "Hi!" << " ";
	}
	std::cout << std::endl << "your number is:" << a;
}
