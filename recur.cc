#include "stdafx.h"
#include "targetver.h"
#include <iostream>

//TODO #1.1: add a function prototype for fib
int fib(int);
//TODO #2.1: add a function prototype for fact
int fact(int);
int main()
{
	//TODO: #1.2 call your fib function, print the result
	std::cout << fib(3) << std::endl;
	//TODO: #2.2 call your fact function, print the result
	std::cout << fact(5) << std::endl;
	return 0;
}

//TODO #2.3: add your recursive fib function from class
int fib(int b)
{
	if (b == 0 || b == 1)
	{
		return b;
	}
	else
		return fib(b - 1) + fib(b - 2);
}

//TODO #2.4: add your recursive fact function from class
int fact(int a)
{
	if (a == 1)
	{
		return 1;
	}
	else
	{
		return a * fact(a - 1);
	}
}