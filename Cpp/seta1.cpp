//Write a C++ program to accept length and width of a rectangle. Calculate and display 
//perimeter as well as area of a rectangle by using Inline function. 

#include <iostream>
using namespace std;

	inline double calculatePerimeter(double length, double width) 
	{
    	return 2 * (length + width);
	}

	inline double calculateArea(double length, double width)
	 {
    	return length*width;
	 }

int main() 
{
    double length,width;

    cout<<"Enter the length of the rectangle";
    cin>>length;
    cout<<"Enter the width of the rectangle"<<endl;
    cin>>width;

    double perimeter=calculatePerimeter(length,width);
    double area=calculateArea(length,width);

    cout<<"Perimeter of the rectangle="<<perimeter<<endl;
    cout<<"Area of the rectangle="<<area<<endl;

}

