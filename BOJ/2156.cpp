#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>

using namespace std;
int n;

int arr[10001];
int cache[10001][3];
int DP(int here, int howmanystepru)
{
    if (here == n)
    {
        return arr[n];
    }
    else if (here > n)
    {
        return 0;
    }
    if (cache[here][howmanystepru] != -1)
    {
        return cache[here][howmanystepru];
    }
    int m = 0;
    if (howmanystepru == 1)
    {
        m = max(m, max(DP(here + 1, 2), DP(here + 2, 1)));
    }
    else if (howmanystepru == 2)
    {
        m = max(m, max(DP(here + 2, 1), DP(here + 3, 1)));
    }
    cache[here][howmanystepru] = m + arr[here];
    return cache[here][howmanystepru];
}

int main()
{
    for (int i = 1; i <= 10001; i++)
    {
        cache[i][1] = -1;
        cache[i][2] = -1;
    }
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", max(DP(1, 1), DP(2, 1)));
}
