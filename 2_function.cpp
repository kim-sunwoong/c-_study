#include <iostream>
#include <cmath>

using std:: cout;
using std:: cin;
using std:: endl;

double power(double first_value, int second_value)
{
    double result = 1;
    for(int i = 0; i < second_value; i++)
    {
        result = result * first_value;
    }
    return result;
}

void print_pow(double first_value, int second_value)
{
    double Mypower = power(first_value,second_value);
    cout << first_value <<" rasied to the "<< second_value <<" power is "<< Mypower << endl;
}

int main()
{
    double first_value;
    int second_value;
    cout << "First Number: ";
    cin >> first_value;
    cout << "Second Number: ";
    cin >> second_value;
    print_pow(first_value, second_value);
} 
