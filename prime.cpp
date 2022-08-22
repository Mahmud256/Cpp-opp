#include<iostream>
using namespace std;
class Prime{
public:
    int n,i,c=0;

    void display1()
    {
        cout<<"Prime is: "<<n<<endl;
    }

    void display2()
    {
        cout<<"Prime isn't: "<<n<<endl;
    }

};
int main()
{
    Prime p;
    cin>>p.n;
    for(p.i=2; p.i<p.n; p.i++)
    {
        if(p.n%p.i==0)
        {
            p.c++;
            break;
        }
    }
    if(p.c==0)
    {
        p.display1();
    }
    else
    {
        p.display2();
    }

        return 0;
}
