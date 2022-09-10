#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y)//local variable
        {
            a=x;
            b=y;
        }

        void showData()
        {
            cout<<endl<<"real="<<a<<" imaginary="<<b;
        }

};

int main()
{
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,9);
    c1.showData();
    c2.showData();

}
