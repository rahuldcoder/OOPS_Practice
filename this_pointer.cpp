#include <bits/stdc++.h>
using namespace std;

//Demonstrate use of this pointer


class baseClass
{
  private:
    int l, b, h;

  public:
    void setData(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }

    void showData()
    {
        cout << "l =" << l << endl;
        cout << "b =" << b << endl;
        cout << "h =" << h << endl;
    }
};

int main()
{

    baseClass obj;
    obj.setData(1, 2, 3);
    obj.showData();
}