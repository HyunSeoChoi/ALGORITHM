#include <cstdio>
#include <algorithm>

using namespace std;

int n;
int arr[20001];
bool visited[20001];

int gcd(int a, int b)
{
	return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b)
{
	return a / gcd(a, b) * b;
}

int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}

	int res = 1;

	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		int sNum = i + 1;
		int cNum = sNum;
		if (sNum == arr[sNum - 1])
		{
			continue;
		}
		if (visited[i])
		{
			continue;
		}
		while (1)
		{
			cnt++;
			visited[cNum - 1] = 1;
			cNum = arr[cNum - 1];

			if (sNum == cNum)
			{
				break;
			}
		}
		res = lcm(res, cnt);
	}

	printf("%d", res);
}
