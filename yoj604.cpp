#include <iostream>
using namespace std;
int n, m;
int num[1005];
int cnt;
void input()
{
    scanf("%d%d", &n, &m);
    return;
}
void ysf(int start, int count)
{
    if (cnt == n - 1)
        return;
    if (num[start] != 0)
    {
        count++;
        if (count == m)
        {
            num[start] = 0;
            cnt++;
            if (start == n)
                ysf(1, 0);
            else
                ysf(start + 1, 0);
        }
        else
        {
            if (start == n)
                ysf(1, count);
            else
                ysf(start + 1, count);
        }
    }
    else
    {
        if (start == n)
            ysf(1, count);
        else
            ysf(start + 1, count);
    }
    return;
}
void solve()
{
    for (int i = 1; i <= n; i++)
        num[i] = i;
    ysf(1, 0);
}
void output()
{
    for (int i = 1; i <= n; i++)
    {
        if (num[i] != 0)
        {
            printf("%d", num[i]);
            return;
        }
    }
}
int main()
{
    input();
    solve();
    output();
    return 0;
}
// #include <iostream>
// using namespace std;
// int n, m, num[1001], te[1001], f = 0;
// void sha(int start, int shushu)
// {
//     if (f == (n - 1))
//     {
//         return;
//     }
//     if (num[start] != 0)
//     {
//         shushu++;
//         if (shushu == m)
//         {

//             num[start] = 0;
//             f++;
//             // printf("%d ", f);
//             if (start == n)
//                 sha(1, 0);
//             else
//                 sha(start + 1, 0);
//         }
//         else
//         {
//             if (start == n)
//                 sha(1, shushu);
//             else
//                 sha(start + 1, shushu);
//         }
//     }
//     else
//     {
//         if (start == n)
//             sha(1, shushu);
//         else
//             sha(start + 1, shushu);
//     }
//     return;
// }
// int main()
// {

//     cin >> n >> m;
//     for (int i = 1; i <= n; i++)
//     {
//         num[i] = i;
//     }
//     sha(1, 0);
//     // printf("%d", num[4]);
//     for (int i = 1; i <= n; i++)
//     {
//         if (num[i] != 0)
//         {
//             cout << i << endl;
//             break;
//         }
//     }
//     return 0;
// }