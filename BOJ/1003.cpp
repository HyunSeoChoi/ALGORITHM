#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int cache[41];
int fibonacci(int n)
{
    if (cache[n] != -1)
    {
        return cache[n];
    }
    if (n <= 1)
    {
        return cache[n] = 1;
    }
    else
        return cache[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        memset(cache, -1, sizeof(cache));

        scanf("%d", &n);
        if (n == 0)
        {
            printf("1 0\n");
            continue;
        }
        if (n == 1)
        {
            printf("0 1\n");
            continue;
        }
        fibonacci(n);
        printf("%d %d\n", cache[n - 2], cache[n - 1]);
    }
    return 0;
}
