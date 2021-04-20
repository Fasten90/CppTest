#include <iostream>
using namespace std;

constexpr int power (const int a, const int b)
{
    int res = 1;
    for (int i=0; i<b; i++)
    {
        res *= a;
    }
    return res;
}    


int main()
{
    int a = 5;
    int b = 2;
    int c;
    c = power(a,b);
    cout << c << endl;

    return 0;
}

