#include<stdio.h>
#include<algorithm>
using namespace std;

int s, e, x, y;

int main()
{
    scanf("%d %d", &s, &e);

    int gap = abs(s-e);
    if(gap != 0)
    {
        while(gap%2==0)
        {
            gap/=2;
        }
    }
    int i = 5;
    while(i--)
    {
        scanf("%d %d", &x, &y);

        if(gap == 0)
        {
            if(x==y)
            {
                printf("Y\n");
            }
            else printf("N\n");
        }
        else if(x==y) printf("N\n");
        else if(((s>e&&x>y)||(s<e&&x<y))&&abs(x-y) % gap == 0)
        {
            printf("Y\n");
        }else printf("N\n");
    }
}
