#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct Planet
{
    int x, y;
    int rad;

    bool operator==(Planet a)
    {
        return a.x == x && a.y == y && a.rad == rad;
    }
    bool operator<(Planet a)
    {
        return rad < a.rad;
    }
    bool operator>(Planet a)
    {
        return rad > a.rad;
    }
};

vector<Planet> s, e;
int n, t;
int acnt, bcnt;

int main()
{
    scanf("%d", &t);
    while (t--)
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        s.clear();
        e.clear();

        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            Planet o;
            scanf("%d %d %d", &o.x, &o.y, &o.rad);

            if ((x1 - o.x) * (x1 - o.x) + (y1 - o.y) * (y1 - o.y) < o.rad * o.rad) // r 과 동일할 경우는 주어지지 않음
            {
                s.push_back(o);
            }
            if ((x2 - o.x) * (x2 - o.x) + (y2 - o.y) * (y2 - o.y) < o.rad * o.rad)
            {

                e.push_back(o);
            }
        }

        sort(s.begin(), s.end()); // 오름차순 정리
        sort(e.begin(), e.end()); // 오름차순 정리

        int ans = 0;
        acnt = 0;
        bcnt = 0;
        while (acnt < s.size() && bcnt < e.size())
        {
            if (s[acnt] == e[bcnt])
            {
                break;
            }
            else
            {
                ans++;
                if (s[acnt] < e[bcnt])
                {
                    acnt++;
                }
                else
                {
                    bcnt++;
                }
            }
        }

        if (acnt == s.size())
            ans += e.size() - bcnt;
        if (bcnt == e.size())
            ans += s.size() - acnt;
        printf("%d\n", ans);
    }
}
