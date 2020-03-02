/*
    赵子豪@20200302
*/

//  display_time.cpp 

#include <iostream>

using namespace std;

void display(int, int);

int main(void)
{
    int hour;
    int minute;

    cout << "Enter the number of hours : ";
    cin >> hour;
    cout << "Enter the number of minures :";
    cin >> minute;
    display(hour, minute);

    return 0;
}

void display(int h, int m)
{
    cout << "Time:" << h << ":" << m << endl;
}