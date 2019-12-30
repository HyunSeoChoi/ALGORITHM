#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int arr[101], visit[101];
int startNum;

bool isGChoice(int i)
{
    if(arr[i] == startNum){
        return true;
    }else if(visit[i] == 1){
        return false;
    }
    visit[i] = 1;
    return isGChoice(arr[i]);
}

int main(){
    int n, cnt = 0;
    int ans[101];
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d", arr + i);
    }

    for(int i=1;i<=n;i++){
        startNum = i;
        memset(visit, 0, sizeof(visit));
        if(isGChoice(i)){
            ans[cnt++]=i;
        }
    }

    printf("%d\n", cnt);
    for(int i=0;i<cnt;i++){
        printf("%d\n", ans[i]);
    }
}

