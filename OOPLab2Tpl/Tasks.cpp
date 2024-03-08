#include <iostream>
using namespace std;
#include "Tasks.h"
#include "Examples.h"
void MenuTask()
{
    cout << "     Menu Task   \n";
    cout << "    1.  Calculation of expressions using bitwise operations  \n";
    cout << "    2.  Data encryption using bitwise operations \n";
    cout << "    3.  Data encryption using structures with bit fields \n";
    cout << "    4.  The problem of using bitwise operations \n";
    cout << "    5.  Examples of problems using bitwise operations \n";
    cout << "    6.  Exit \n";
}
void task1() {

    cout << " Calculation of expressions using bitwise operations  \n";

    int a, b, c, d;
    cout<<" input a, b, c, d "<<" \n ";
    cin>>a>>b>>c>>d;
    a= ((((a<<4)+a)+((c << 8)+(c<<5)+(c<<4)+(c<<3)))/32)-((b<<6)+(b<<5)+(b<<4)+((b<<3))+(d<<7)-d);
    cout<< a << "=a " << b << "=b " << c << "=c " << d <<"=d " << endl;

}

void task2()
{
    cout << " Data encryption using bitwise operations  \n";

    char input[128];


}

void task3()
{
    // Шифрування даних з використання стуктур з бітовими полями 
    // Data encryption using structures with bit fields
    cout << "  Data encryption using structures with bit fields \n";
}


void task4()
{   // Задача із використання побітових операцій
    // The problem of using bitwise operations
    cout << " Data encryption using structures with bit fields \n";

}




