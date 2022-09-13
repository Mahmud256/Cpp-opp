#include<iostream>
using namespace std;
class prime //class
{
private:
    int n,i,c=0;
public:
    prime(); // constructor
     void work();
     void getdata();
};
prime::prime() // Constructor called //scope::
{
    cout<<"Enter a value: ";
    cin>>n;
}
void prime::work()
{
      for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                c++;
                break;
            }
        }
}
void prime::getdata()
{

    if(c==0)
        {
            cout<<"Prime"<<endl;
        }

        else
        {
            cout<<"prime is not"<<endl;
        }
}
int main()
{
    prime obj;
    obj.work();
    obj.getdata();

    return 0;
}

