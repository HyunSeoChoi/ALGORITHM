#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    sum = sum - n + 1;

    printf("%d", sum);
}
