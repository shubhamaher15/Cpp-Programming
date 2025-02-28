//Write a C++ program to accept ‘n’ float numbers, store them in an array and print the 
//alternate elements of an array. (Use dynamic memory allocation) 

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout<<"Enter number of float numbers";
    cin>>n;
    float* arr=new float[n];
    cout<<"Enter"<<n<<"float numbers:"<<endl;
    for(int i=0; i<n; ++i)
	 {
        cin>>arr[i];
     }
    cout<<"Alternate elements of the array are:"<<endl;
    for (int i=0; i<n; i+=2)
	 {
        cout<<arr[i]<<" ";
     }
    cout<<endl;
    delete[] arr;
}

