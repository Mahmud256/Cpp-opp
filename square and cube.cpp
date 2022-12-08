#include<iostream>
#include<math.h>
using namespace std;
class number
{
private:
    int num;
public:
    void getNumber(void)
    {
        cout<<"Enter an integer number: ";
        cin>>num;
    }

    int returnNumber(void)
    {
        return num;
    }
};

//Base Class 1, to calculate square of a number
class Square:public number
{
public:
    int getSquare(void)
    {
        int num,sqr;
        num = returnNumber(); //get number from class number
        sqr = pow(num,2);
        return sqr;
    }
};

//Base Class 2, to calculate cube of a number
class Cube:public number
{
public:
    int getCube(void)
    {
        int num,cube;
        num = returnNumber(); //get number from class number
        cube = pow(num,3);
        return cube;
    }
};

int main()
{
    Square objS;
    Cube objC;
    int sqr, cube;
    objS.getNumber();
    sqr = objS.getSquare();
    cout<<"Square of "<<objS.returnNumber()<<" is: "<<sqr<<endl;
    objC.getNumber();
    cube = objC.getCube();
    cout<<"Cube of "<<objC.returnNumber()<<" is: "<<cube<<endl;
}
