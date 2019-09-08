#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int arr[51];
int arr2[51];

bool compare(int a, int b)
{
    if (a > b)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    sort(arr, arr + n);
    sort(arr2, arr2 + n, compare);
    for (int i = 0; i < n; i++)
    {
        ans += arr[i] * arr2[i];
    }
    printf("%d", ans);
}