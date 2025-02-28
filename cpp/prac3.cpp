#include <iostream>
using namespace std;
int main()
{
   int n,i,flag=0;
   cout<<"enter a number";
   cin>>n;
   for(i=2; i<=n/2; ++i) 
   {
      if(n%i==0) 
	  {
         flag=1;
         break;
      }
   }
   if (flag==0)
   cout<<" is a prime number="<<n<<endl;
   
   else
   cout<<"is not a prime number="<<n<<endl;

}
