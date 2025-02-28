//Write a C++ program to read two float numbers.
//Perform arithmetic operations like +, - , *, / on these numbers using Inline Function. (Use manipulators)

#include <iostream>
using namespace std;

    inline float add(float a, float b)
	 {
    	return a+b;
	 }

	inline float subs(float a, float b)
	 {
    	return a-b;
	 }

	inline float mul(float a, float b)
	 {
    	return a*b;
	}

	inline float div(float a, float b)
 	{
    	return a/b;
	}

int main() 
{
    float n1, n2;

    cout<<"Enter num1=";
    cin>>n1;
    cout<<"Enter num2=";
    cin>>n2;

    cout<<"Addition="<< add(n1,n2)<<endl;
    cout<<"Substraction="<<subs(n1,n2)<<endl;
    cout<<"Multiplication="<< mul(n1,n2)<<endl;
    cout<<"Division="<<div(n1,n2)<<endl;
}
