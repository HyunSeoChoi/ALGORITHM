#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>

using namespace std;

long long int cost[100001], dist[100001]; // i<->i+1 일때 arr[i]

int main()
{
    long long int n, ans = 0, bufdist = 0, nowindex = 1;
    scanf("%lld", &n);
    for (int i = 1; i <= n - 1; i++)
    {
        scanf("%lld", &dist[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &cost[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            ans += bufdist * cost[nowindex];
            break;
        }
        if (cost[i] < cost[nowindex])
        {
            ans += cost[nowindex] * bufdist;
            bufdist = 0;
            nowindex = i;
        }
        bufdist += dist[i];
    }
    printf("%lld", ans);
    return 0;
}
