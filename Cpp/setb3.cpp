//Write a C++ program to calculate area and circumference of a Circle. (Use default 
//argument, scope resolution operator and manipulator.)  

#include <iostream>
#include <iomanip>

	void calculateCircle(double radius = 1.0)
	 {
    	const double PI=3.14;
    	double area=PI*radius*radius;
    	double circumference=2*PI*radius;

    std::cout<<std::fixed << std::setprecision(2);
    std::cout<<"For a circle with radius"<<radius<<":\n";
    std::cout<<"Area"<<area<<"\n";
    std::cout<<"Circumference"<<circumference<<"\n";
}

int main()
 {
    ::calculateCircle(); 
    ::calculateCircle(5.0);
}

