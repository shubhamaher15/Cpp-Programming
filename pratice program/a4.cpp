using namespace std;
#include<iostream>
class demo
{
	public:
	void area(float r=4.3f);
	void circum(float r=4.3f);
};
void demo::area(float r)
{
	float c=2*3.14f*r*r;
	cout<<"\n area="<<c<<endl;
}
void demo::circum(float r)
{
	float c=2*3.14f*r;
	cout<<"\n circum="<<c<<endl;
}
int main()
{
	demo ob;
	ob.area(4.3f);
	ob.circum(4.3f);
}
