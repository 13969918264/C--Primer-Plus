/*
    姓名： 赵子豪
    日期： 2019年7月2日
*/
//  carrots.cpp -- food processing program
//  uses and displays a variable

#include <iostream>

int main()
{
    using namespace std;

    int carrots;                    //  declare an integer variable

    carrots = 25;                   //  assign a value to the variable
    cout << "I have ";
    cout << carrots;                //  display the value of the variable
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;          //  modify the varible
    cout << "Crunch , crunch. Now I have " << carrots << " carrtots." << endl;

    return 0;
}
