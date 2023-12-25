#include <iostream>
#include <climits>
 
using std::cout;
using std::endl;

int main()
{
    /*아무리 int 타입이여도 너무 큰 수 (long long)는 못 저장한다*/

    /*int x = 999999999999999999999999;*/

    short a;
    int b;
    long c;
    long long d;
    /*ONLY POSITIVE +++++*/
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout << SHRT_MAX << endl;
}