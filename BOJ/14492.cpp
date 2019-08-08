#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>

using namespace std;

bool a[301][301], b[301][301];

int main()
{
    int n;
    int cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k = 0;
            for (; k < n; k++)
            {
                if (a[i][k] && b[k][j])
                {
                    break;
                }
            }
            if (k < n)
            {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
}
