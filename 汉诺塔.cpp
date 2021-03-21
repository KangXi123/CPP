#include<iostream>
using namespace std;
//h:输出解决汉诺塔问题步骤的函数
void h(int n, char A, char B, char C)
{
	if (n == 1)cout << A << "--->" << C<<endl;
	else {
		h(n - 1, A, C, B); cout << A << "--->" << C << endl; h(n - 1, B, A, C);
	}
}

int main()
{
	int n;char a = 'A', b = 'B', c = 'C';
	while (cin >> n)
	{
		h(n, a, b, c);
		cout << endl ;
	}
}