#include<iostream>
using namespace std;
int main()
{
	int n=4,i,j;
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
