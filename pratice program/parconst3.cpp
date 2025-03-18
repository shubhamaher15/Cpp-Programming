using namespace std;
#include<iostream>
class mydate
{
	public:
		int dd,mm,yy;
		mydate(int dd,int mm,int yy) //using parameterized constructor...
		{
			this->dd=dd;
			this->mm=mm;
			this->yy=yy;
		}
		void disp()
		{
			if(mm==1)
			   cout<<"date="<<dd<<"-"<<"jan"<<"-"<<yy<<endl;
			else if(mm==2)
			   cout<<"date="<<dd<<"-"<<"feb"<<"-"<<yy<<endl;
			else if(mm==3)
			   cout<<"date="<<dd<<"-"<<"mar"<<"-"<<yy<<endl;
			else if(mm==4)
			   cout<<"date="<<dd<<"-"<<"apr"<<"-"<<yy<<endl;
			else if(mm==5)
			   cout<<"date="<<dd<<"-"<<"may"<<"-"<<yy<<endl;
			else if(mm==6)
			   cout<<"date="<<dd<<"-"<<"june"<<"-"<<yy<<endl;
			else if(mm==7)
			   cout<<"date="<<dd<<"-"<<"july"<<"-"<<yy<<endl;
			else if(mm==8)
			   cout<<"date="<<dd<<"-"<<"aug"<<"-"<<yy<<endl;
			else if(mm==9)
			   cout<<"date="<<dd<<"-"<<"sep"<<"-"<<yy<<endl;
			else if(mm==10)
			   cout<<"date="<<dd<<"-"<<"oct"<<"-"<<yy<<endl;
			else if(mm==11)
			   cout<<"date="<<dd<<"-"<<"nov"<<"-"<<yy<<endl;
			else if(mm==12)
			   cout<<"date="<<dd<<"-"<<"dec"<<"-"<<yy<<endl;
			else
			  cout<<"dont match any months...............";
			     
		}
};
int main()
{
	mydate ob(23,1,2025);
	ob.disp();	
}
