#include <cstdio>
#include <algorithm>

using namespace std;

int h, t, a, b;
int sum = 0;

int main()
{
    scanf("%d %d", &h, &t);

    sum = h;
    while (t--)
    {
        scanf("%d %d", &a, &b);

        if (a == 1)
        {
            sum -= b;
        }
        else if (a == 2)
        {
            sum += b;
        }
        else if (a == 3)
        {
            sum += b;
            printf("%d", sum);
            return 0;
        }
    }
}