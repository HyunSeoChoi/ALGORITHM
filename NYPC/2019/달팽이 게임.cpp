#include <cstdio>
#include <algorithm>

using namespace std;

int n, k, c = 1, i = 1, j = 1, dx = 0, dy = 1, arr[1001][1001];

int main()
{
    scanf("%d %d", &n, &k);

    while (c <= n * n)
    {
        if (c == k)
        {
            printf("%d %d", j, i);
            return 0;
        }
        arr[i][j] = c++;

        if (arr[i + dx][j + dy] != 0 || i + dx > n || i + dx < 1 || j + dy > n || j + dy < 1)
        {
            if (dx == 0 && dy == 1)
            {
                dx = 1;
                dy = 0;
            }
            else if (dx == 1 && dy == 0)
            {
                dx = 0;
                dy = -1;
            }
            else if (dx == 0 && dy == -1)
            {
                dx = -1;
                dy = 0;
            }
            else if (dx == -1 && dy == 0)
            {
                dx = 0;
                dy = 1;
            }
        }

        i += dx;
        j += dy;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}