#include<iostream>
using namespace std;
class Student
{
public:
    int id;
    double gpa;

    void display() //function
    {
        cout<<id<<" "<<gpa<<endl;
    }
    Student(int x, double y) //Parameterized Constructor
    {
        id = x;
        gpa = y;
    }

    Student() //Default Constructor
    {
        cout<<id<<" "<<gpa<<endl;
    }

    Student(Student &j) //Copy Constructor
    {
        id = j.id;
        gpa = j.gpa;
    }


};
int main()
{
    int m;
    double n;
    cin>>m>>n;
    cout<<endl;
    Student Alim(m,n); //Parameterized Constructor Called
    Alim.display();

    Student Tasin(201,4.33); //Parameterized Constructor Called
    Tasin.display();

    Student s1(Tasin); //Copy Constructor Called
    s1.display();

    Student s2(); //Default Constructor Called

    return 0;
}



