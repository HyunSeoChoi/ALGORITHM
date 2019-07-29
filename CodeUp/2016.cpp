#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cmath>
#include <limits>
#include <cstring>

using namespace std;

char str[1000];

int main()
{
    int n;
    scanf("%d", &n);

    scanf("%s", str);


    for(int i=0;i<strlen(str);i++)
    {
        if(i%3 == n%3 && i!=0)
        {
            printf(",");
        }

        printf("%c", str[i]);
    }
}

