#include<iostream>
using namespace std;
int main()
//输出必须对应输入的数字判断是否回文数，是回文数请输出”YES“，否则请输出”NO“。
{
	int x,s,n; while (cin >> x)
	{
		n = 0;
		s = x;
		while (s)
		{
			n = 10 * n + s % 10;
			s /= 10;
		}
		cout << n<<endl;
		if (n == x)cout << "YES" << endl; else cout << "NO"<<endl;
		
	}
}