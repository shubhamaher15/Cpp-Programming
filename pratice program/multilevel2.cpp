using namespace std;
#include<iostream>
class customer
{
	public:
		char cname[20];
		int pno;
		
		void acceptc()
		{
			cout<<"\n enter customer name and phone no";
			cin>>cname>>pno;
		}
};
class depositor : public customer
{
	public:
		int accno;
		float bal;
		
		void acceptd()
		{
			cout<<"\n enter depositor accno and bal";
			cin>>accno>>bal;
		}
};
class borrower : public depositor
{
	public:
		int loanno,loanamt;
		
		void acceptb()
		{
			cout<<"\n enter borrower loan no and loan amt";
			cin>>loanno>>loanamt;
		}
		void disp()
		{
			cout<<"\n customer name="<<cname;
			cout<<"\n customer pno="<<pno;
			cout<<"\n depositor accno="<<accno;
			cout<<"\n depositor bal="<<bal;
			cout<<"\n borrower loanno="<<loanno;
			cout<<"\n borrower loan amount="<<loanamt;
		}
};
int main()
{
	borrower ob[100];
	int n,i;
	cout<<"enter limit";
	cin>>n;
	
	cout<<"\n enter n customer info";
	for(i=0;i<n;i++)
	{
		ob[i].acceptc();
		ob[i].acceptd();
		ob[i].acceptb();
	}
	cout<<"dispaly n customersss.....";
	for(i=0;i<n;i++)
	{
		ob[i].disp();
	}
}
