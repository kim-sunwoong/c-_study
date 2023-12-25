#include <iostream>
# include <cmath>


using namespace std;

int main()
{
    cout << INFINITY << endl; // inf 결과값 반환

    cout << sqrt(-25) << endl;

    cout << pow(2,10) << endl;

    cout << remainder(10, 3) << endl;

    cout << 10 % 3.2 << endl;

    cout << "% 가끔은 틀린다" << endl;
    cout << "예시)" << endl;

    cout << "10 % 3.25 should give 0.25, BUT" << 10 % 3.25 << endl;
    cout << "Thus Using remainder(10, 3.25) will give " << remainder(10, 3.25) << endl;

    cout << fmax(10, 3,25) << endl;

    /*

    ceil = 항상 높이 수로
    
    floor = 항상 낮은 수로

    trunc = 소수점을 그대로 없앤다

    round = 반올림

    */
}
