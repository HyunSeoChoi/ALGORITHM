#include <stdio.h>
#include <cstring>
#include <algorithm>
using namespace std;
int arr[1001], n, cashe[1001];
int searches(int index)
{
    if (cashe[index] != -1)
    {
        return cashe[index];
    }
    int bigger = 0;
    for (int i = index + 1; i <= n; i++)
    {
        int buf = searches(i);
        if (arr[i] > arr[index])
        {
            if (bigger < buf)
            {
                bigger = buf;
            }
        }
    }
    cashe[index] = bigger + 1;
    return bigger + 1;
}
int main()
{
    scanf("%d", &n);
    arr[0] = -987654321;
    cashe[0] = -1;
    for (int i = 1; i <= n; i++)
    {
        cashe[i] = -1;
        scanf("%d", &arr[i]);
    }
    printf("%d\n", searches(0) - 1);
    return 0;
}
