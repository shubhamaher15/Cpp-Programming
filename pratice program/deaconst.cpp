using namespace std;
#include<iostream>
class add
{
	public:
		add(int a,int b=10,int c=20)
		{
			int d=a+b+c;
			cout<<"\n addtion="<<d<<endl;
		}
};
int main()
{
	add ob(100,200,300);
	add ob1(100,200);
	add ob2(100);
}
