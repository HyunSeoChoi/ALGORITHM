#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <stack>

using namespace std;

char a[600000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a;
    stack<int> left, right;
    int n = strlen(a);

    for(int i=0;i<n;i++){
        left.push(a[i]);
    }

    int m;

    cin >> m;

    while(m--){
        char what;

        cin >> what;

        if(what == 'L'){
            if(!left.empty()){
                right.push(left.top());
                left.pop();
            }
        }else if(what == 'D'){
            if(!right.empty()){
                left.push(right.top());
                right.pop();
            }
        }else if( what == 'B'){
            if(!left.empty()){
                left.pop();
            }
        }else if(what == 'P'){
            char c;
            cin >> c;

            left.push(c);
        }
    }
    while(!left.empty()){
        right.push(left.top());
        left.pop();
    }

    while(!right.empty()){
        cout << (char)right.top();
        right.pop();
    }

    cout << '\n';
    return 0;
}
