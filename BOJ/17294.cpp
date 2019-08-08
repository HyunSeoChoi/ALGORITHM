#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

char str[1001];

int main()
{
    scanf("%s", str);

    int cha = str[1] - str[0];

    for (int i = 1; i < strlen(str); i++)
    {
        if (str[i] - str[i - 1] != cha)
        {
            printf("흥칫뿡!! <(￣ ﹌ ￣)>");
            return 0;
        }
    }
    printf("◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!");

    return 0;
}
