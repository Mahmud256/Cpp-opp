#include <iostream>
using namespace std;
void volume(int l, int w, int h )
{
     cout<<"Volume of a rectangle: "<<l*w*h<<endl;
}
void volume(double r, int h){
    cout<<"Volume of a cylinder: "<<3.1416*r*r*h<<endl;
}
void volume(int a)
{
     cout<<"Volume of a cube: "<<a*a*a<<endl;
}
int main()
{
    int length,width,height,sl;
    double radius;

    cout<<"Enter length,width and height to calculate the volume of a rectangle:"<<endl;
    cin>>length>>width>>height;
    volume(length,width,height);

    cout<<"Enter radius & height to calculate the volume of a cylinder:"<<endl;
    cin>>radius>>height;
    volume(radius,height);

    cout<<"Enter sl to calculate the volume of a cube:"<<endl;
    cin>>sl;
    volume(sl);

return 0;
}
