using namespace std;
#include<iostream>
class circle
{
	public:
		circle(float r=17.8f)
		{
			float a=3.14f*r*r;
			cout<<"\n area of circle="<<a;
		}
};
int main()
{
	circle ob;
	circle ob1(92.3f);
}
