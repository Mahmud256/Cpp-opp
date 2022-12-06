#include <iostream>
#include <cmath>
#define pi 3.14159265359
using namespace std;
void triangle(float height, float weight, float area)
{
     area=0;
     area = height*weight*1/2;

     cout<<"Triangle Area is: "<<area<<endl;
}

void circle(float radius, float area)
{
     area=0;
     area = pi*pow(radius,2);

     cout<<"Circle Area is: "<<area<<endl;
}

void rectangle(double height, double weight, double area)
{
     area=0;
     area = height*weight;

     cout<<"Rectangle Area is: "<<area<<endl;
}
int main()
{
    int a,r,h,w,Triangle,Circle,Rectangle;

    cout<<"Enter Radius Value:";
    cin>>r;

    cout<<"Enter Height Value:";
    cin>>h;

    cout<<"Enter Weight Value:";
    cin>>w;

    cout<<endl;

    triangle(h,w,a);

    circle(r,a);

    rectangle(h,w,a);


    return 0;
}

