//Swapping number with friend function

#include<iostream>
using namespace std;

class Swapping
{
private:
    int a, b, temp;

public:
    void set_data();
    friend void display(Swapping t); //declare friend function
};

void Swapping::set_data()
{
    cout<<"Input two number: ";
    cin>>a>>b;
    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;
}



void display(Swapping t) //define friend function
{

    cout << "\nAfter swapping." << endl;
    cout << "a = " << t.a << ", b = " << t.b << endl;

}

int main()
{
	Swapping obj;
	obj.set_data();
	display(obj);

	return 0;
}
