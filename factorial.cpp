#include <iostream>
#include <cmath>
using namespace std;
class factorial
{
private:
    int n,fact=1,i;
public:
    factorial();
    void work();
    void getdata();
};
factorial::factorial()
{
    cout<<"Enter integer Value:";
    cin>>n;

}

void factorial::work()
{
    if(n<0)
    {
        cout<<"\nError! Factorial of a negative number doesn't exist."<<endl;
        exit(0);
    }
    else
    {
     for (i = 1; i <= n; ++i) {
            fact *= i;
        }
    }

}

void factorial::getdata()
{
     cout<<endl;
     cout<<"Factorial is: "<<fact<<endl;

}

int main()
{
    factorial obj;
    obj.work();
    obj.getdata();

    return 0;
}
