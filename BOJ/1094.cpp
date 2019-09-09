#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int X;

int main()
{
    scanf("%d", &X);
    int cnt = 0;
    while (X)
    {
        if (X % 2 == 1)
        {
            cnt++;
        }
        X /= 2;
    }
    printf("%d", cnt);
}
