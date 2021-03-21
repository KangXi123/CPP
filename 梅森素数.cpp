#include<iostream>
using namespace std;

bool ZS(int n)
{
	for (int i = 2; i < n; ++i) { if (n % i == 0)return 0; }
	return 1;
}

bool MS(int n)
{
	if (!ZS(n))return 0;
	int k = n + 1;
	while (k > 2) { if (k % 2 == 1)return 0; k /= 2; }
	return 1;
}

//n是最大的梅森素数
bool ZD(int n,int M)
{
	int a[10]; a[0] = n;
	for (int i = 1; i <= 9; ++i)a[i] = 2 * a[i - 1] + 1;
	for (int i = 1; a[i] <= M; ++i){if (MS(a[i]))return 0;}
	return 1;
}

int main()
{
	int N, M;
while (cin >> N >> M)
{
	int h = 0;
	for (int i = N; i <= M; ++i) 
	{
		if (MS(i))
		{
			h = 1;
			if (ZD(i, M))cout << i << endl;
			else cout << i << " ";
			i = 2 * i + 1;
			for (int j = i; j <= M; j=2*j+1)
			{
				if (ZS(j)) { if (ZD(j, M))cout << j << endl; else cout << j << " "; }
			}break;
		}
		
	}
	if (h == 0)cout << -1 << endl;
}


}