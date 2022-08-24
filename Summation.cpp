#include<iostream>
using namespace std;
class addition //class
{
private:
    int n1,n2;
public:
    addition(int n, int m)//constructor
    {
        n1 = n;
        n2 = m;
    }
    void sum()
    {
        int res = n1+n2;
        cout<<"Summation is: "<<res<<endl;

    }
};
int main()
{
    int num1,num2,result;
    cin>>num1>>num2;
    addition obj(num1,num2);
    obj.sum();

    return 0;
}
