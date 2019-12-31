#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>

using namespace std;

int ans[30];

int main()
{
    char str[101];
    memset(ans, -1, sizeof(ans));
    scanf("%s", str);

    for(int i=0;i<strlen(str);i++){
        if(ans[str[i]-'a'] == -1)
            ans[str[i]-'a'] = i;
    }
    for(int i=0;i<26;i++){
        printf("%d ",ans[i]);
    }
}
