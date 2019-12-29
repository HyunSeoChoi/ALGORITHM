#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> que;

    int n, k;

    cin >> n >> k;

    for(int i=1;i<=n;i++){
        que.push(i);
    }

    cout << "<";
    while(que.size() > 1){
        for(int i=0;i<k-1;i++){
            que.push(que.front());
            que.pop();
        }
        cout << que.front() << ", ";
        que.pop();
    }

    cout << que.front() << ">"<< '\n';
    return 0;
}
