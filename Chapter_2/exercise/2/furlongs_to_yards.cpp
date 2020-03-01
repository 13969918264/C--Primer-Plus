/*
    赵子豪@20200301
*/

/*  furlongs_to_yards.c */

#include <iostream>

int main(void)
{
    using namespace std;

    int furlongs;
    int yards;

    cout << "Enter a distance in furlongs: " ;
    cin >> furlongs;
    yards = 220 * furlongs;
    cout << "You means " << yards << " yards."  << endl;

    return 0;
}