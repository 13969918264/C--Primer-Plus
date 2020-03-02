/*
    赵子豪@20200302
*/

//  light_year_convert.cpp  

#include <iostream>

using namespace std;

double light_year_convert_astronomical_units(double);

int main(void)
{
    double light_year;

    cout << "Enter the number of light year : ";
    cin >> light_year;
    cout << light_year <<" light year is " << light_year_convert_astronomical_units(light_year) <<" astronomical units." << endl;

    return 0;
}

double light_year_convert_astronomical_units(double n)
{
    return n * 63240;
}