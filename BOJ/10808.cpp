#include <cstdio>
#include <cstring>
#include <queue>
#include <algorithm>

using namespace std;

int ans[30];

int main()
{
    char str[101];

    scanf("%s", str);

    for(int i=0;i<strlen(str);i++){
        ans[str[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        printf("%d ", ans[i]);
    }
}
