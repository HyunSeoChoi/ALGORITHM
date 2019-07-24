#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int ans = 0;
    while (n >= m)
    {
        ans += n;
        n /= m;
    }

    ans += n;
    printf("%d", ans);
}
