#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;

int arr[2][100000], cache[3][100000];
int n, t;
int func(int index, int how)
{

    if (index == 0)
    {
        if (how == 2)
        {
            return 0;
        }
        else
            return arr[how][index];
    }
    if (cache[how][index] != -1)
    {
        return cache[how][index];
    }
    int mm = 0;
    if (how == 0)
    {
        mm = max(func(index - 1, 1), func(index - 1, 2)) + arr[how][index];
    }
    else if (how == 1)
    {
        mm = max(func(index - 1, 2), func(index - 1, 0)) + arr[how][index];
    }
    else
    {
        mm = max(func(index - 1, 0), func(index - 1, 1));
    }
    cache[how][index] = mm;
    return mm;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            cache[0][j] = cache[1][j] = cache[2][j] = -1;
            scanf("%d", &arr[0][j]);
        }
        for (int j = 0; j < n; j++)
        {
            scanf("%d\n", &arr[1][j]);
        }
        cache[0][0] = arr[0][0];
        cache[1][0] = arr[1][0];
        cache[2][0] = 0;
        for (int i = 1; i < n; i++)
        {
            cache[0][i] = max(cache[1][i - 1], cache[2][i - 1]) + arr[0][i];
            cache[1][i] = max(cache[0][i - 1], cache[2][i - 1]) + arr[1][i];
            cache[2][i] = max(cache[1][i - 1], cache[0][i - 1]);
        }
        printf("%d\n", max(cache[0][n - 1], cache[1][n - 1]));
    }
    return 0;
}
