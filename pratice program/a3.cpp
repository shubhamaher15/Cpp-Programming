using namespace std;
#include<iostream>
#include<string.h>
class customer
{
	public:
		int cno;
		char name[20],addr[20];
		void accept();
		void disp();
};
void customer::accept()
{
	cout<<"enter cno name and addr";
	cin>>cno>>name>>addr;
}
void customer::disp()
{
	cout<<"\n customer cno="<<cno<<endl;
	cout<<"\n customer name="<<name<<endl;
	cout<<"\n customer addr="<<addr<<endl;
	
}
int main()
{
	customer ob;
	ob.accept();
	ob.disp();
}
