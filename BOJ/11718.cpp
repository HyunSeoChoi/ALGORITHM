#include <cstdio>

int main()
{
    char x;
    while (true)
    {
        x = getchar();
        if (x == EOF)
            break;
        putchar(x);
    }
}