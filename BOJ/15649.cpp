#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int visit[100];
vector<int> V;
int n, m;

void dfs(int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < V.size(); i++)
        {
            printf("%d ", V[i]);
        }
        printf("\n");

        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (visit[i])
            continue;
        visit[i] = 1;
        V.push_back(i);
        dfs(cnt + 1);
        V.pop_back();
        visit[i] = false;
    }
}

int main()
{
    scanf("%d %d", &n, &m);

    dfs(0);
}
