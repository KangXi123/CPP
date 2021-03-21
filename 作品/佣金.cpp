#include<iostream>
using namespace std;
//国王的王宫里有很多的侍从，
//国王为了让为他工作越久的人得到越多的报酬，
//制定了一个佣金的支付策略，
//第一天可以得到一个金币，
//随后两天即第二三天每天可以得到两个金币，
//随后的三天即第四五六天每天可以得到三个金币，以此类推。
//请写一个程序计算工作了N天的侍从总共可以得到多少金币。
int sum(int* pa, int col, int i, int j)
{
	int t = 0, * p;
	for (p = pa + col * i; p < pa + col * (j + 1); p++)
		t += *p;
	return t;
}
int main()
{
	int x,n,total;
	while (cin >> x) 
	{
		total = 0;
		n = 1;
		//第1天:1
		//第1~1+2天(不含1)2
		//n(n+1)/2<x(天数)<=(n+1)(n+2)/2时工资为n
		for (; x > n * (n + 1) / 2; n++) {}
		cout << "n=" << n<<'\t';
		for (int i = 1; i < n; i++) { total = total + i * i; }
		total = total + (x - n * (n - 1) / 2)*n;
		cout << "total="<<total << endl;

	}
}
