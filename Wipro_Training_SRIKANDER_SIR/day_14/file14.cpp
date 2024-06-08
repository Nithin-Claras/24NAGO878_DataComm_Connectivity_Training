#include <tuple>
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 10;
    tuple<int,int>  t = make_tuple(a, b);
    cout << get<0>(t) << endl;
    cout << get<1>(t) << endl;
    int x, y;
    tie(b,a) = t;
    cout << a << endl;
    cout << b << endl;
}

