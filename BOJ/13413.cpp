#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <vector>

using namespace std;

char str1[100001], str2[100001];

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        int w = 0, b = 0;
        scanf("%d", &n);
        scanf("%s %s", str1, str2);
        for (int i = 0; i < n; i++)
        {
            if (str1[i] != str2[i])
            {
                if (str1[i] == 'B')
                {
                    b++;
                }
                else
                    w++;
            }
        }
        printf("%d\n", max(b, w));
    }
    return 0;
}
