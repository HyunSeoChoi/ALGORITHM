#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <queue>

using namespace std;
typedef pair<int, int> ii;

vector<int> vec[101];
queue<ii> que;
int visit[101];

int main()
{
    int v, e, start, endfind;
    scanf("%d", &v);
    scanf("%d %d", &start, &endfind);
    scanf("%d", &e);
    for (int i = 0; i < e; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    ii a(10, 20);
    a = ii(30, 40);
    que.push(ii(0, start));
    while (!que.empty())
    {
        ii here = que.front();
        que.pop();
        if (visit[here.second] == 1)
        {
            continue;
        }
        if (here.second == endfind)
        {
            printf("%d", here.first);
            return 0;
        }
        visit[here.second] = 1;
        for (int i = 0; i < vec[here.second].size(); i++)
        {
            int there = vec[here.second][i];
            if (visit[there] == 0)
            {
                que.push(ii(here.first + 1, there));
            }
        }
    }
    printf("-1");
}
