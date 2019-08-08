//입출력 헤더
#include <cstdio>

using namespace std;

int n;
int ans; // 0 initialization

void dfs(int len, int cnt)
{
    //printf("%d %d\n", len, cnt);
    if (len == 2 * n) // n개의 괄호를 여닫아 2*n으로 표시
    {
        if (!cnt)
        {
            ans++;
        }
        return;
    }

    if (cnt < 0 || cnt > n)
    {
        return;
    }
    // OPEN
    dfs(len + 1, cnt + 1);
    //CLOSE
    dfs(len + 1, cnt - 1);
}

int main()
{
    scanf("%d", &n);

    dfs(0, 0);

    printf("%d", ans);

    return 0;
}
