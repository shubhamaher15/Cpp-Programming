//Write a C++ program to modify contents of an integer array. (Use Call by reference)  
#include <iostream>
using namespace std;

	void modifyArray(int (&arr)[5]) 
	{
    	for(int i = 0; i < 5; ++i) 
		{
        	arr[i] *= 2;
    	}
	}

int main()
 {
    int myArray[5]={1, 2, 3, 4, 5};

    cout<<"Original array:";
    for(int i=0; i<5; ++i)
	 {
        cout<<myArray[i]<<" ";
     }
    cout<<endl;
    modifyArray(myArray);

    cout << "Modified array: ";
    for(int i=0; i<5; ++i)
	 {
        cout<<myArray[i]<<" ";
    }
    cout<<endl;
}

