#include<iostream>
using namespace std;
int main()
{
    int a,b,res;
    int ch;
    cout<<"\n 1 Addition";
    cout<<"\n 2 Subtraction";
    cout<<"\n 3 Multiplication";
    cout<<"\n 4 Division";
    cout<<"\n 5 Modulus"<<endl;
    cin>>ch;
    switch (ch)
	{
        case 1:
        {
            cout<<"Enter Two Numbers";
            cin>>a>>b;
            res=a+b;
            cout<<"\nResult is="<<res;
            break;
        }
        case 2:
        {
            cout<<"Enter Two Numbers";
            cin>>a>>b;
            res=a-b;
            cout<<"Result is="<<res;
            break;
        }
        case 3:
        {
            cout<<"Enter Two Numbers";
            cin>>a>>b;
            res=a*b;
           cout<<"Result is="<<res;
            break;
        }
        case 4:
        {
            cout<<"Enter Two Numbers";
            cin>>a>>b;
            res=a/b;
            cout<<"Result is="<<res;
            break;
        }
        case 5:
        {
            cout<<"Enter Two Numbers";
            cin>>a>>b;
            res=a%b;
            cout<<"Result is="<<res;
            break;
        }
    }
}

