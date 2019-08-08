#include <cstdio>
#include <algorithm>

using namespace std;

int n, rec[101], neds[101], ans = 98765;

int main()
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", rec + i);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", neds + i);
    }

    for (int i = 0; i < n; i++)
    {
        if (neds[i] != 0)
        {
            if (ans > rec[i] / neds[i])
                ans = rec[i] / neds[i];
        }
    }

    printf("%d", ans);
}