#include<iostream>
using namespace std;
int main()
{  
    int i,num,div,sum=0;
    cout<<"Enter the number to checked";
    cin >>num;
    for (i=1;i<num;i++)
    {
        div=num%i;
        if (div==0)
            sum=sum+i;
    }
    if(sum==num)
        cout<<"perfect number="<<num<<endl;
    else
        cout <<"is not a perfect number="<<num<<endl;
}

