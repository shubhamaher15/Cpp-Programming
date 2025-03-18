using namespace std;
#include<iostream>
#include<string.h>
class emp
{
	public:
		int eno;
		char ename[20];
		float sal;
		emp(int eno , char ename[20],float sal) //using parameterized constructor......
		{
			this->eno=eno;
			strcpy(this->ename,ename);
			this->sal=sal;
		}
		void disp()
		{
			cout<<"emp no="<<eno<<endl;
			cout<<"emp name="<<ename<<endl;
			cout<<"emp sal="<<sal<<endl;
		}
};
int main()
{
	emp ob(11,"ganesh",48900);
	ob.disp();
}
