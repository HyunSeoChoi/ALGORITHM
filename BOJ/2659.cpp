#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>
#include <cmath>

using namespace std;
int sigye[10000];

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int sig = a * 1000 + b * 100 + c * 10 + d;
    sig = min(sig, b * 1000 + c * 100 + d * 10 + a);
    sig = min(sig, c * 1000 + d * 100 + a * 10 + b);
    sig = min(sig, d * 1000 + a * 100 + b * 10 + c);

    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            for(int k=1;k<=9;k++){
                for(int z=1;z<=9;z++){
                    int si = i * 1000 + j * 100 + k * 10 + z;
                    si = min(si, j * 1000 + k * 100 + z * 10 + i);
                    si = min(si, k * 1000 + z * 100 + i * 10 + j);
                    si = min(si, z * 1000 + i * 100 + j * 10 + k);

                    if(si == i*1000 + j * 100 + k * 10 + z){
                        sigye[i*1000 + j * 100 + k * 10 + z] = 1;
                    }
                }
            }
        }
    }
    int cnt = 0;
    for(int i=1111;i<sig;i++){
        if(sigye[i] == 1){
            cnt ++;
        }
    }

    printf("%d", cnt+1);
}
