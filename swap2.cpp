#include<iostream>
using namespace std;
class B;
class A
{
    int x;
public:
    void assign(int t)
    {
        x = t;
    }
    void display()
    {
        cout<<"Value of X: "<<x<<endl;
    }
    friend void swap(A&, B&);
};

class B
{
    int y;
public:
    void assign(int w)
    {
        y = w;
    }
    void display()
    {
        cout<<"Value of Y: "<<y<<endl;
    }
    friend void swap(A&, B&);
};

void swap(A &c, B &d)
{
    int temp;
    temp = c.x;
    c.x = d.y;
    d.y = temp;
}
int main()
{
    A n;
    B m;
    int a,b;
    cout<<"Enter X = ";
    cin>>a;
    cout<<"Enter Y = ";
    cin>>b;
    n.assign(a);
    m.assign(b);
    swap(n,m);
    cout<<"After Swapping"<<endl;
    n.display();
    m.display();

    return 0;
}
