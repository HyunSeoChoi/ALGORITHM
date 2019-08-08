#include <cstdio>

//C++(11), C++(14)

using namespace std;

int n, m, st, woo, nee;
int b[11], now;
int cnt = 0;

int main()
{
    scanf("%d %d %d", &n, &m, &st);

    now = st;
    while (m--)
    {
        int build, isRain;
        scanf("%d %d", &build, &isRain);
        if (isRain == 1)
        { // 비가 옴
            if (b[now] >= 1)
            {
                b[now]--;
                b[build]++;
                now = build;
            }
            else
            {
                cnt++;
                b[build]++;
                now = build;
            }
        }
        else
        {
            now = build;
        }
    }

    printf("%d", cnt);

    return 0;
}