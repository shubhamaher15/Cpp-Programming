#include <iostream>
using namespace std;
#include<iostream>
int main() 
{
    int n;
    long factorial = 1.0;
    cout<<"Enter positive integer: ";
    cin>>n;
    
    if (n<0)
        cout<<"Error Factorial of negative number doesn't exist";
    else 
	{
    	for(int i=1; i<=n; ++i)
		 {
            factorial *=i;
         }
           cout << "Factorial of "<<n<<" = "<<factorial;    
    }


}
