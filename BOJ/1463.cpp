#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

int x, arr[1000001];

int main()
{
    scanf("%d", &x);

    arr[1] = 0;
    for(int i=2;i<=x;i++)
    {
        arr[i] = arr[i-1] + 1;
        if(i%2==0){
            arr[i] = min(arr[i], arr[i/2]+1);
        }
        if(i%3==0){
            arr[i] = min(arr[i], arr[i/3]+1);
        }
    }

    printf("%d", arr[x]);
}
