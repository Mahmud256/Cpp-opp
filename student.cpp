#include<iostream>
using namespace std;
class student //class
{
private:
    char name[30], section[20];
    int semester, roll, marks, sum=0, tnum[10];
    int i;

public:
    void setdata(); //function
    void work();
    void getdata();
};
void student::setdata() //scope
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter semester: ";
    cin>>semester;
    cout<<"Enter roll: ";
    cin>>roll;
    cout<<"Enter section: ";
    cin>>section;
}
void student::work()
{
    for(i=0; i<5; i++)
    {
        cout<<"Enter "<<i+1<<" no subject mark: ";
        cin>>tnum[i];
        sum = tnum[i]+sum;
    }
}
void student::getdata()
{
    cout<<"\n";
    cout<<"Name of student: "<<name<<endl;
    cout<<"Semester of the student: "<<semester<<"rd"<<endl;
    cout<<"Section of the student: "<<section<<endl;
    cout<<"Roll no of student: "<<roll<<endl;
    cout<<"Total marks of student: "<<sum<<endl;
}
int main()
{
    student obj;
    obj.setdata();
    obj.work();
    obj.getdata();

    return 0;
}


