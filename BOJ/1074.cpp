#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int r, c;
int cnt;
void func(int x, int y, int l)
{
    //cout << x << " " << y << " " << l << endl;
    if (l == 1)
    {
        return;
    }

    int len = l / 2;
    if (r < x + len && c < y + len)
    {
        func(x, y, len);
    }
    else if (r < x + len && c >= y + len)
    {
        cnt += len * len;
        func(x, y + len, len);
    }
    else if (r >= x + len && c < y + len)
    {
        cnt += 2 * len * len;
        func(x + len, y, len);
    }
    else
    {
        cnt += 3 * len * len;
        func(x + len, y + len, len);
    }
}
int main()
{
    int n;
    while (scanf("%d %d %d", &n, &r, &c) != EOF)
    {
        cnt = 0;
        func(0, 0, pow(2, n));
        cout << cnt << "\n";
    }
    return 0;
}
