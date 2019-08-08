#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char str[101];
int arr[20];

int main()
{
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        arr[i] = str[i] - '0';
    }

    sort(arr, arr + strlen(str));

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
