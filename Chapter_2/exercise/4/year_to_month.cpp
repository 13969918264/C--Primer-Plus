/*
    赵子豪@20200302
*/

//  year_to_month.cpp   --display your age in month 

#include <iostream>

using namespace std;

int year_to_month(int);

int main(void)
{
    int age;

    cout << "Enter your age : ";
    cin >> age;
    cout << "Your age in month is " << year_to_month(age) <<"." << endl;

    return 0;
}

int year_to_month(int n)
{
    return n * 12;
}