/*1. Create a C++ program to maintain inventory of a book having details Title, Authors[],
Price, Publisher and Stock. Book can be sold, if stock is available, otherwise purchase will be
made. Write a menu driven program to perform following operation:
• Accept book details.
• Sale a book. (Sale contains number of copies to be sold.)
• Purchase a book. (Purchase contains number of copies to be purchased)
(Use dynamic memory allocation while accepting author details).*/

#include <iostream>
#include <conio.h>
#include <string.h>
#define MAX 50
using namespace std;
class Book
{
private:
    char title[MAX];
    char author[MAX];
    int price;
    char publisher[MAX];
    int stock;

public:
    Book(char[], char[], int, char[], int);
    void saleBook();
    void purchaseBook(int);
    void display();
    char getTitle();
};

Book::Book(char title[], char author[], int price, char publisher[], int stock)
{
    strcpy(this->title, title);
    strcpy(this->author, author);
    this->price = price;
    strcpy(this->publisher, publisher);
    this->stock = stock;
}

void Book::saleBook()
{
    cout<<"title:"<<this->title<<endl;
    cout<<"author:"<<this->author<<endl;
    cout<<"price:"<<this->price<<endl;
    cout<<"publisher:"<<this->publisher<<endl;
    cout<<"current stock:"<<(this->stock -= 1)<<endl;
}

void Book::purchaseBook(int stock)
{
    this->stock=this->stock+stock;
}

void Book::display()
{
    cout << "Title"
        << "  "
        << "Author"
        << "  "
        << "Price"
        << "  "
        << "Publisher"
        << "  "
        << "Current stock"
        << "  "
        << endl;
    cout<<"=========================================================================="<<endl;
    cout<<this->title<<"  "
        <<this->author<< "  "
        <<this->price<< "  "
        <<this->publisher<< "  "
        <<this->stock<<"  "
        <<endl;
}

char Book::getTitle()
{
    return this->title[0];
}
int main()
{
    int i = 0, flag;
    Book* b[MAX];
    int choice;
    char temp[MAX];
    char title[MAX];
    char author[MAX];
    int price;
    char publisher[MAX];
    int stock;
    do
    {
        cout<<"\n======================================\n";
        cout<<"\n1.accept book details.\n2.sale book.\n3.purchase book.\n4.Display.\n5.Exit" << endl;
        cout<<"\n=======================================\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"\n----------------------------\n";
            cout<<"Book Details!!" << endl;
            cout<<"\n----------------------------\n";
            cout<<"Enter title:";
            cin>>title;
            cout<<"Enter author name:";
            cin>>author;
            cout<<"Enter price:";
            cin>>price;
            cout<<"Enter name of publisher:";
            cin>>publisher;
            cout<<"Enter stock:";
            cin>>stock;
            b[i] = new Book(title, author, price, publisher, stock);
            i++;
            cout<<"\n==============================\n";
            break;

        case 2:
            cout<<"\n===============================\n";
            cout<<"List of Books!!"<<endl;
            cout<<"\n================================\n";
            for (int j=0; j<i; j++)
            {
                temp[0]=b[j]->getTitle();
                cout<<temp<<endl;
            }
            cout<<"\n=============================\n";
            cout<<"Enter book title to be sold:";
            cin>>temp;
            for (int j = 0; j < i; j++)
            {
                title[0] = b[j]->getTitle();
                if (strcmp(title, temp) == 0)
                {
                    b[j]->saleBook();
                }
            }
            break;
        case 3:
            cout<<"\n-------------------------\n";
            cout<<"List of Books!!"<<endl;
            cout<<"\n-------------------------\n";
            for (int j=0; j<i; j++)
            {
                temp[0]=b[j]->getTitle();
                cout<<temp<<endl;
            }
            cout<<"\n-------------------------\n";
            cout<<"Book name and stock for purchase:";
            cin>>temp >> stock;
            flag=0;
            for (int j=0; j<i; j++)
            {
                title[0]=b[j]->getTitle();
                if (strcmp(title, temp)==0)
                {
                    flag = 1;
                    b[j]->purchaseBook(stock);
                }
            }
            if (flag==0)
            {
                cout<<"Book not found!!";
            }
            break;
        case 4:
            cout<<"\n------------------------------"<<endl;
            cout<<"Book details!!" << endl;
            cout<<"\n--------------------------------"<<endl;
            for (int j=0; j<=i; j++)
            {
                b[j]->display();
            }
            break;
        }
    } while (choice!=5);
    getch();
    return 0;
}

