#include <bits/stdc++.h>
using namespace std;

class baseClass
{
  protected:
    int a;

  public:
    void setDataBaseClass(int x)
    {
        a = x;
    }
};

class derivedCLass : public baseClass
{
  protected:
    int b;

  public:
    void setDataDerivedClass(int x, int y)
    {
        a = x;
        b = y;
    }
    void displayDerivedClass()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
};

class secondDerivedClass : public derivedCLass
{
  private:
    int c;
  public:
  void setSecondDerivedClass(int value1,int value2,int value3)
  {
      c=value1;
      b=value2;
      a=value3;

  }  
};

int main()
{
    secondDerivedClass obj;
    obj.setSecondDerivedClass(1,2,3);
   
}