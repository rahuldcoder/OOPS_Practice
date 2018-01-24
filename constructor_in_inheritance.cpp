#include <bits/stdc++.h>
using namespace std;

class baseClass1
{
  private:
    int a;

  public:
    baseClass1()
    {
        cout << "Base Class 1 Constructor" << endl;
    }
    ~baseClass1()
    {
        cout<<"Destructor of Base Class1"<<endl;
    }
};

class baseClass2
{
  public:
    baseClass2()
    {
        cout << "Base Class 2 Constructor" << endl;
    }
       ~baseClass2()
    {
        cout<<"Destructor of Base Class2"<<endl;
    }
};

class derivedClass : public baseClass1, public baseClass2 //Order is decided by this statement
{
  private:
    int b;

  public:
    derivedClass() : baseClass2(),baseClass1() 
    {
        cout << "Derived Class Contructor" << endl;
    }
    ~derivedClass()
    {
        cout<<"Destructor of derivedBaseClass"<<endl;
    }
};

int main()
{
    derivedClass obj;
}