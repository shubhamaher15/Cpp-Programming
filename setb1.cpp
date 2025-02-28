#include<iostream>
using namespace std;
int main()
{
	char ch='a';
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"\t"<<ch++;
		}
		cout<<"\n";
	}
	
}
