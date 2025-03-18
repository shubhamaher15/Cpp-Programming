using namespace std;
#include<iostream>
class mynumber
{
	public:
		int a,b,c,d;
		mynumber() //default constructor................
		{
			a=55;
			b=66;
			c=76;
		}
		mynumber(int a,int b,int c) //parameterized constructor..........
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		void avg()
		{
		   d=a+b+c/3;
			cout<<"avarage="<<d<<endl;
			
		}
};
int main()
{
	mynumber ob,ob1;
   	ob.avg();
   	
   	mynumber(22,33,44);
   	ob1.avg();
	
}
