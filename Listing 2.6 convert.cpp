/*
    姓名：赵子豪
    日期：2019年7月6日
*/
//  convert.cpp -- converts stone pounds
#include <iostream>
int stonetolb(int);         //  functions prototype
int main()
{
    using namespace std;
    int stone ;
    cout << "Enter the height in stone; ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone <<" stone = ";
    cout << pounds << " pounds." << endl;

    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}
