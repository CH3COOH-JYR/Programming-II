#include <iostream>
#include <cstdio>
using namespace std;
class a
{
public:
    static int aa;
    int bb;
};
int a::aa = 10;
int main()
{
    class a c;
    cout << c.aa << endl;
    return 0;
}