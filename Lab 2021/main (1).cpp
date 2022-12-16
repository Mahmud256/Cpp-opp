#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file1, file2;
    string f1,f2;
    file1.open("read1.txt", ios::in);
    file2.open("read2.txt", ios::in);
    if(!file1 || !file2)
    {
        cout<<"Error"<<endl;
    }
    while(getline(file1,f1) && getline(file2,f2))
    {
        cout<<f1<<f2;
    }
    file1.close();
    file2.close();
    return 0;
}
