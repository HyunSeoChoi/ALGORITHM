#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>

using namespace std;
int arr[1000];
int res[1000];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    res[0] = 1;

    for (int i = 1; i < n; i++)
    {
        int point = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i])
            {
                point = max(res[j], point);
            }
        }
        if (point == 0)
        {
            res[i] = 1;
        }
        else
            res[i] = point + 1;
    }
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        m = max(res[i], m);
    }
    printf("%d", m);
    return 0;
}
