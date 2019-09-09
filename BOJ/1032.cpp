#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

char str[55][55];

int main()
{
    char ans[55];
    int n, j;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    int si = strlen(str[0]);
    for (int i = 0; i < si; i++)
    {
        j = 0;
        char a = str[0][i];
        for (; n > j; j++)
        {
            if (a != str[j][i])
            {
                break;
            }
        }
        if (j == n)
        {
            ans[i] = a;
        }
        else
            ans[i] = '?';
    }
    ans[si] = 0;
    printf("%s", ans);
}
