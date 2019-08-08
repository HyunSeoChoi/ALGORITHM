#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int n;
int cache[10][101];

long long int dfs(int num, int cnt)
{
    if (cache[num][cnt] != -1)
    {
        return cache[num][cnt];
    }
    if (cnt == n)
    {
        return cache[num][cnt] = 1;
    }

    long long int sum = 0;
    if (num != 0)
        sum += dfs(num - 1, cnt + 1) % 1000000000;
    if (num != 9)
        sum += dfs(num + 1, cnt + 1) % 1000000000;

    cache[num][cnt] = sum % 1000000000;
    return cache[num][cnt];
}

int main()
{
    memset(cache, -1, sizeof(cache));
    scanf("%d", &n);

    long long int ans = 0;
    for (int i = 1; i <= 9; i++)
    {
        ans += dfs(i, 1) % 1000000000;
    }

    printf("%lld", ans % 1000000000);
}
