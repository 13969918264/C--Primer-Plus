/*
    赵子豪@20200302
*/

/*  user_defined_function.cpp   -- use two user defined functions and one main to display two statements    */

#include <iostream>

using namespace std;

void mice(void);
void run(void);

int main(void)
{
    mice();
    run();

    return 0;
}

void mice(void)
{
    cout << "Three blind mice." << endl;
    cout << "Three blind mice." << endl;
}

void run(void)
{
    cout << "See how they run." << endl;
    cout << "See how they run." << endl;
}