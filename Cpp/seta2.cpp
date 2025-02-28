//Write a C++ program to define power function to calculate x^y. (Use default value as 2 for y). 

#include <iostream>
#include <cmath>

	double power(double x,int y=2)
 	{
  	  return std::pow(x,y);
	}

int main() 
{
    double base;
    int exponent;

    std::cout<<"Enter the base value";
    std::cin>>base;

    std::cout<<"Enter the exponent value (or press enter to use default 2)";
    std::cin.ignore();
    if (std::cin.peek() == '\n')
	 {
        std::cout<<"Result="<<power(base)<<std::endl;
    } 
	else 
	{
        std::cin>>exponent;
        std::cout<<"Result="<<power(base,exponent)<<std::endl;
    }
}

