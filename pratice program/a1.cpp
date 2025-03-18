using namespace std;
#include<iostream>

int a=10; // global accepet the value.....

int main()
{
	int a=20; // local accepet the value.....
	
	cout<<"\n value="<<::a;
	cout<<"\n value="<<a;
	
}
