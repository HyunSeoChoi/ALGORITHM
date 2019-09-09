#include <stdio.h>

bool Hansu(int x)
{
    int back, now, diff;
    if (x < 100)
    {
        return true;
    }
    diff = x / 10 % 10 - x % 10;
    back = x / 10 % 10;
    x /= 100;
    while (x != 0)
    {
        if (x % 10 - back != diff)
        {
            return false;
        }
        back = x % 10;
        x /= 10;
    }
    return true;
}
int main()
{
    int n, cnt = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (Hansu(i) == true)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
}