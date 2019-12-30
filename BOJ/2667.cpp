#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;
int n;
char str[26][26];

int visit[26][26], xdi[4] = {-1,0,1,0},ydi[4] = {0,1,0,-1};

vector<int> ans;
int DFS(int x,int y)
{
    int Cnt=0;
    visit[x][y] = 1;
    for(int j=0;j<4;j++)
    {
        int xx = x+xdi[j];
        int yy = y+ydi[j];
        if(yy>=0&&yy<n&&xx>=0&&xx<n&&!visit[xx][yy]&&str[xx][yy]=='1')
        {
            Cnt += DFS(xx,yy);
        }
    }
    return Cnt+1;
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!visit[i][j])
            {
                if(str[i][j] == '1')
                {
                    ans.push_back(DFS(i,j));
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    printf("%d\n",ans.size());

    for(int i=0;i<ans.size();i++)
    {
        printf("%d\n",ans[i]);
    }
}

