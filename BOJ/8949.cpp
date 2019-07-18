#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>

using namespace std;

int arr[10], brr[10];
int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int acnt = 0;
    while (a != 0)
    {
        arr[acnt] = a % 10;
        a /= 10;
        acnt++;
    }

    int bcnt = 0;
    while (b != 0)
    {
        brr[bcnt] = b % 10;
        b /= 10;
        bcnt++;
    }
    for (int i = max(acnt, bcnt) - 1; i >= 0; i--)
    {

        printf("%d", arr[i] + brr[i]);
    }
    return 0;
}
