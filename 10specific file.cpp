#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
    fstream FileName;
    FileName.open("FileName.txt", ios::out);
    if (!FileName) {
        cout<<" Error while creating the file ";
    }
    else {
         cout<<"File created \n";
         string s;
         getline(cin, s);
         cout << s << endl;

          FileName << s;

        FileName.close();
    }
    return 0;
}
