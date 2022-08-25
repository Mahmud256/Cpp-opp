#include<iostream>
using namespace std;
class prime //class
{
private:
    int n,i,c=0;
public:
    void setdata(); //function
    void work();
    void getdata();
};
void prime::setdata() //scope
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
            cout<<"This is Prime"<<endl;
        }

        else
        {
            cout<<"This is no prime"<<endl;
        }
}
int main()
{
    prime obj;
    obj.setdata();
    obj.work();
    obj.getdata();

    return 0;
}

