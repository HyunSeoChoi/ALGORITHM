#include <iostream>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> s;
    int n;
    string ans;

    cin >> n;
    int m = 0;

    while(n--){
        int x;
        cin >> x;

        if(x > m){
            while(x> m){
                s.push(++m);
                ans += '+';
            }
            s.pop();
            ans+= '-';
        }else {
            bool found = false;
            if(!s.empty()){
                int top = s.top();
                s.pop();

                ans+= '-';
                if(x == top){
                    found = true;
                }
            }
            if(!found){
                cout <<"NO" << '\n';
                return 0;
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << '\n';
    }

    return 0;
}
