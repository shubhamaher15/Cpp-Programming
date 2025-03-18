using namespace std;
#include<iostream>
 class add
 {
 	public:
 		int a,b,c;
 		add(int a,int b) // using parameterized constructor.......
 		{
 			c=a+b;
 			cout<<"addition="<<c<<endl;
		 }
 };
 int main()
 {
 	add ob(11,22);
 }
