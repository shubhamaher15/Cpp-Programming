//Write a C++ program to accept and display Bank_Account details as Acc_No,  Acc_holder_name, Addr, Contact_Number and Balance. 
//Perform deposit of some amount  and display modified bank account details. (Use manipulators)

#include <iostream>
#include <iomanip>
using namespace std;
class Bank_Account
 {
	private:
    long long Acc_No;
    string Acc_holder_name;
    string Addr;
    string Contact_Number;
    double Balance;

	public:
    void acceptDetails()
	 {
        cout<<"Enter Account Number";
        cin>>Acc_No;
        cin.ignore();
        cout<<"Enter Account Holder Name=";
        getline(cin, Acc_holder_name);
        cout<<"Enter Address";
        getline(cin, Addr);
        cout<<"Enter Contact Number";
        getline(cin, Contact_Number);
        cout<<"Enter Initial Balance";
        cin>>Balance;
     }
    void deposit()
	 {
        double amount;
        cout<<"Enter amount to deposit";
        cin>>amount;
        if(amount>0) 
		{
            Balance += amount;
            cout<<"Deposit Successful! Updated Balance"<<fixed<<setprecision(2)<<Balance<<endl;
        } 
		else
		 {
            cout<<"Invalid amount! Deposit failed."<<endl;
        }
    }
    void displayDetails() 
	{
        cout<<"\n Bank Account Details"<<endl;
        cout<<left<<setw(20)<<"Account Number:"<<Acc_No<<endl;
        cout<<left<<setw(20)<<"Holder Name:"<<Acc_holder_name<<endl;
        cout<<left<<setw(20)<<"Address:"<<Addr<<endl;
        cout<<left<<setw(20)<<"Contact Number:"<<Contact_Number<<endl;
        cout<<left<<setw(20)<<"Balance:"<<"$"<<fixed<<setprecision(2)<<Balance<<endl;
    }
};

int main()
 {
    Bank_Account account;
    account.acceptDetails();
    account.displayDetails();
    account.deposit();
    account.displayDetails();
}

