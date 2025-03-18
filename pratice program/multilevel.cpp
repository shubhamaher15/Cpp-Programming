using namespace std;
#include<iostream>
class college
{
	public:
	char name[20], caddr[40];
	
	void acceptc()
	{
		cout<<"enter college name and address";
		cin>>name>>caddr;
	}
};
class student : public college
{
	public:
		int rno;
		char sname[20];
		
		void accepts()
		{
			cout<<"enter student roll-no and name";
			cin>>rno>>sname;
		}
};
class exam : public student
{
	public:
		int m[6];
		void acceptmarks()
		{
			cout<<"enter six sub marks";
			for(int i=0;i<6;i++)
			    cin>>m[i];
		}
};
class result : public exam
{
	public:
		int tot;
		float per;
		
		void calc()
		{
			for(int i=0;i<6;i++)
			   tot=tot+m[i];
			   per=(float)tot/6;
		}
		void disp()
		{
			cout<<"\n college name="<<name;
			cout<<"\n college address="<<caddr;
			cout<<"\n roll no="<<rno;
			cout<<"\n student name="<<sname;
			cout<<"\n total marks="<<tot;
			cout<<"\n percentages="<<per;
		}
};
int main()
{
	result ob;
	ob.acceptc();
	ob.accepts();
	ob.acceptmarks();
	ob.calc();
	ob.disp();
}
