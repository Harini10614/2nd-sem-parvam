#include<iostream>
using namespace std;

int main() 
{
    int a,b,choice;
    cout << "enter the value of a and b:";
    cin >> a>> b;
    if(b == 0) 
    {
        cout << "division by zero is not allowed" << endl;
    }
    cout << "1.addition" << endl;
    cout << "2.subtraction" << endl;
    cout << "3.multiplication" << endl;
    cout << "4. division" << endl;
    cout << "select the choice:" <<endl;
    cin >> choice;
    if(choice == 1)
    {
        cout << "the addition of two nnumber is :" << a+b << endl;
    }
    else if (choice == 2)
    {
        cout << "the sutraction of nnumber is :" << a-b << endl;
    }
    else if (choice == 3)
    {
        cout << "the multiplication of number is :" << a*b << endl;
    }
    else if (choice == 4)
    {
        cout  << "the division of number is :" << a/b << endl;
    }
    return 0;
}


