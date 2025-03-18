using namespace std;
#include<iostream>
#include<string.h>
class emp
{
	public:
		int eno;
		char ename[30];
		float sal;
		emp() // using default constructor...........
		{
			eno=11;
			strcpy(ename,"shree");
			sal=48250;
		 } 
		 void disp()
		 {
		 	cout<<"emp id="<<eno<<endl;
		 	cout<<"emp name="<<ename<<endl;
		 	cout<<"emp sal="<<sal<<endl;
		 }
		
};
int main()
{
	emp ob;
	ob.disp();
}
