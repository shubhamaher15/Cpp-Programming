using namespace std;
#include<iostream>
class person
{
	public:
		char name[20],addr[20];
		float sal;
		float tax;
		void accept()
		{
			cout<<"enter name addr sal ";
			cin>>name>>addr>>sal;
		}
		void cal()
		{
			if(sal<=20000)
			   tax=0;
			else if(sal>20000&&sal<=40000)
			    tax=sal*5/100;
			else if(sal>40000)
			   tax=sal*10/100;
		}
		void disp()
		{
			cout<<"name="<<name<<endl;
			cout<<"addr="<<addr<<endl;
			cout<<"sal="<<sal<<endl;
			cout<<"tax="<<tax<<endl;
		}
};
int main()
{
	person ob;
	ob.accept();
	ob.cal();
	ob.disp();	
}
