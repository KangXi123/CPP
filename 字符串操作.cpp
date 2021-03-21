#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char* p = new char[80];
	cin >> p;
	const char ch[4][4] = { "ADD","DEL","SER","CHA" };
	char x[4] = { '6','6','6' };
	while (cin >> x[0] >> x[1] >> x[2])
	{
		if (x[0] == ch[0][0] && x[1] == ch[0][1] && x[2] == ch[0][2])//ADD
		{
			char* dd = new char[20];
			int a;
			char* h = new char[20];
			cin >> h >> a;
			for (int i = 0; i <= a; ++i)
			{
				dd[i] = p[i];
			}
			dd[a + 1] = '\0';
			strcat(dd, h);
			
			strcat(dd, p + (a + 1));
			p = dd;
			cout << p << endl;

		}
		else if (x[0] == ch[1][0] && x[1] == ch[1][1] && x[2] == ch[1][2])//DEL
		{
			int x, n; cin >> x >> n;
			for (int i = x; i < 80 - n; ++i)p[i] = p[i + n];
			cout << p << endl;

		}
		else if (x[0] == ch[2][0] && x[1] == ch[2][1] && x[2] == ch[2][2])//SER
		{
			int x = 666; bool k = 1;
			char* h = new char[20];
			cin >> h;

			for (int i = 0; i < int(strlen(p)); ++i)
			{
				k = 1;
				for (int j = i, g = 0; j < i + int(strlen(h)); j++, ++g)
				{
					if (p[j] != h[g]) { k = 0; break; }
				}
				if (k) { x = i; break; }

			}
			cout << x << endl;
		}
		else if (x[0] == ch[3][0] && x[1] == ch[3][1] && x[2] == ch[3][2])
		{
			int x;
			char* h = new char[20];
			cin >> h >> x;
			for (int i = x, g = 0; i < x + int(strlen(h)); ++i, ++g)p[i] = h[g];
			cout << p << endl;

		}
		else cout << "error" << endl;

	}
	delete[]p;
}