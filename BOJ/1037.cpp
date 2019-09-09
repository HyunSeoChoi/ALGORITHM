#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    int n, buff;
    int l = 1000001, h = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &buff);
        h = max(h, buff);
        l = min(l, buff);
    }
    printf("%d", h * l);
}
