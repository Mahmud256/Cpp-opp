#include<iostream>
using namespace std;
class prime //class
{
private:
    int n,i,c=0;
public:
    prime(int num)//constructor
    {
        n = num;
    }
    void p()
    {
        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            cout<<"Prime"<<endl;
        }

        else
        {
            cout<<"prime is not"<<endl;
        }

    }
};
int main()
{
    int num;
    cin>>num;
    prime obj(num);
    obj.p();

    return 0;
}
