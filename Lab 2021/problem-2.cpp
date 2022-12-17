#include <iostream>
using namespace std;
class time{
int hour,minute;
char ch;
public:
    time()
    {
        hour=minute=0;
    }
    void getData()
    {
        cout<<"Enter hour : minute"<<endl;
        cin>>hour>>ch>>minute;
    }
    void add(time &time1, time &time2);
    void display();
};

void  time :: add(time &time1, time &time2)
{
     minute = time1.minute+time2.minute;
     hour = minute/60;
     minute = minute%60;
     hour = hour+time1.hour+time2.hour;
}

void time :: display()
{
    cout<<"Hours : Minutes"<<endl;
    cout<<hour<<":"<<minute<<endl;
}

int main()
{
    time t1,t2,c;

    t1.getData();
    t2.getData();

    c.add(t1,t2);
    c.display();

    return 0;
}
