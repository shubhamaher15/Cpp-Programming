#include<iostream>
using namespace std;

int main()
{
    int num1,num2,num3;
    int lar,small;
    cout<<"Enter three numbers";
    cin>>num1>>num2>>num3;

    lar=(num1>num2) ? ((num1>num3) ? num1:num3) : ((num2>num3) ? num2:num3);
    small=(num1<num2) ? ((num1<num3) ? num1:num3) : ((num2<num3) ? num2:num3);

    cout <<"Largest number="<<lar<< endl;
    cout <<"Smallest number="<<small<<endl;
}

