#include <iostream>
using namespace std;

template <typename T>
T Summa(T a, T b)
{
    return a + b;
}

int main()
{
    cout << Summa(1, 2) << endl;
    cout << Summa(1.5, 2.5) << endl;
    cout << Summa('a', 'b') << endl;
    cout << Summa((string)"Hello",(string)"World!") << endl;
    cout << Summa <double>(1, 2.5) << endl;
    return 0;
}


