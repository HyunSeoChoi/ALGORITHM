#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

long long fibo[100] = {1, 2};

int main()
{
    int n;
    scanf("%d", &n);
    fibo[0] = fibo[1] = 1;
    for (int i = 2; i <= n + 1; i++)
    {
        fibo[i] = (fibo[i - 1] + fibo[i - 2] + 1) % 1000000007;
    }
    printf("%lld", fibo[n]);
    return 0;
}
