#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>

using namespace std;

int gcd(int a, int b){
    if(b == 0){
         return a;
    }
    else {
        return gcd(b, a%b);
    }
}

int main(){
    int a,b;

    scanf("%d %d", &a, &b);

    int g = gcd(a,b);
    printf("%d\n%d", g, (a*b)/g);
    return 0;
}
