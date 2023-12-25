#include <iostream>
#include <cfloat>

using namespace std;
using std::cout;

/*
int main()
{
    float a;
    double b = 77000; // scientific notation 사용하면 훨씬 작은 메모리로 큰 숫자 저장가능
    double c =  7.7E4;
    long double d;

    cout << "This is the Result of 77000: " << b << endl;
    cout << "This is the Result of 7.7E4: " << c << endl;

}
*/

int main()
{
    long double a = 10.0 / 3;
    a = a * 10000000000;
    long double d;

    cout << "This is the Rusult of using float with big number = " << std::fixed << a << endl;
    // 10/3 = 3.33... and that * 10000000 should be all 3 but in result, it is not 3 (limitation of using float datatype)

    // TO FIND OUT HOW TRUSTWORTHY THE DATATYPE IS
    int aa = LDBL_DIG;


    cout << "Only " << aa << " digits can be trusted" << endl;

}
 