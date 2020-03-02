/*
    赵子豪@20200302
*/

//  celsius_to_fahrenheit.cpp  

#include <iostream>

using namespace std;

double celsius_to_fahrenheit(double);

int main(void)
{
    double temperature;

    cout << "Please enter a Celsius value : ";
    cin >> temperature;
    cout << temperature <<" degrees Celsius is " << celsius_to_fahrenheit(temperature) <<" degrees Fahrenheit" << endl;

    return 0;
}

double celsius_to_fahrenheit(double n)
{
    return n * 1.8 + 32;
}