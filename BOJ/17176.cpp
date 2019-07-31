#include<cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int acnt[200], bcnt[200];

int main() {
    int n;
    scanf("%d", &n);

    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d", &x);
        acnt[x] ++;
    }

    for(int i=0;i<=n;i++)
    {
        char str;
        scanf("%c", &str);
        if(str == ' ')
        {
            bcnt[0] ++;
        }
        else if('A' <= str && str <= 'Z')
        {
            bcnt[str-'A' + 1] ++;
        }else if('a' <= str && str <= 'z')
        {

            bcnt[str-'a' + 27] ++;
        }
    }
    char x;
    scanf("%c", &x);


    for(int i=0;i<195;i++)
    {
        //printf("%d %d\n", acnt[i], bcnt[i]);
        if(acnt[i] != bcnt[i])
        {
            printf("n");
            return 0;
        }
    }
    printf("y");
    return 0;
}
