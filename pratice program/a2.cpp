using namespace std;
#include<iostream>
#include<string.h>
class college
{
	public:
	int cid,year;
	char cname[20];
	void accept();
	void disp();
};
void college::accept()
{
	cout<<"enter cid name and year";
	cin>>cid>>cname>>year;
}
void college::disp()
{
	cout<<"college id="<<cid<<endl;
	cout<<"college name="<<cname<<endl;
	cout<<"college year="<<year<<endl;
}
int main()
{
	college ob;
	ob.accept();
	ob.disp();
}
