#include <cstdio>
#include <cstring>

using namespace std;

char str[1000];
bool isCap, isSm, isNum, isSpe;

int main()
{
    scanf("%s", str);

    if (strlen(str) <= 15 && strlen(str) >= 8)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            if ('a' <= str[i] && str[i] <= 'z')
            {
                isSm = true;
            }
            else if ('A' <= str[i] && str[i] <= 'Z')
            {
                isCap = true;
            }
            else if ('0' <= str[i] && str[i] <= '9')
            {
                isNum = true;
            }
            else
                isSpe = true;
        }
    }
    if (isSm && isCap && isNum && isSpe)
    {
        printf("valid");
        return 0;
    }
    printf("invalid");
}