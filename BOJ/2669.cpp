#include <cstdio>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int arr[101][101];

int main(){
    int n = 4;
    while(n--){
        int x1, y1, x2, y2;

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        for(int i=x1;i<x2;i++){
            for(int j=y1;j<y2;j++){
                arr[i][j] = 1;
            }
        }
    }
    int cnt = 0;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            if(arr[i][j] == 1){
                cnt ++;
            }
        }
    }

    printf("%d", cnt);
}
