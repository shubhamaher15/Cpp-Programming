#include <iostream>
using namespace std;

	double factorial(int num) 
	{
    	double fact=1;
    	for (int i=1;i<=num; i++) 
		{
          fact *=i;
   		 }
          return fact;
	}

	double calculateSeries(int n) 
	{
       double sum=0.0;
       for (int i=1; i<=n;i++) 
		{
           sum +=(i / factorial(i));
    	}
    	return sum;
	}

	int main() 
	{
    	int n;
    	cout<<"Enter the value of n: ";
    	cin>>n;

    	double result=calculateSeries(n);
    	cout<<"The sum of the series is="<<result<<endl;
	}

