#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

char str[100];

int main()
{
    char before = '0';
    scanf("%s", str);

    int sum = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (before == str[i])
        {
            sum += 5;
        }
        else
            sum += 10;
        before = str[i];
    }

    printf("%d", sum);
}
