#include <iostream>
using namespace std;
class ClassB;
class ClassA
{
	private:
    int numA;
	public:
    ClassA(int a) : numA(a) {} 
    friend class ClassC;
};
class ClassB
{
	private:
    int numB;
	public:
    ClassB(int b) : numB(b) {} 
    friend class ClassC;
};

class ClassC
{  
	public:
    int multiply(ClassA objA, ClassB objB) 
	{
        return objA.numA * objB.numB;
    }
};

int main() {
    ClassA objA(5);
    ClassB objB(10);
    ClassC objC;
    int result = objC.multiply(objA, objB);
    cout<<"Multiplication result="<<result<<endl;
}

