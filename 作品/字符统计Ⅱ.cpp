#include<iostream>
#include<string>
#include<cstring>
using namespace std;

//是否是英文字母
bool ZM(char ch) 
{
	if (ch >= 'a' && ch <= 'z')return 1;
	if (ch >= 'A' && ch <= 'Z')return 1;
	return 0;
}


struct Node
{
	char ch;
	int n;
	Node* next;
};

int main()
{
	string A; 
	int h=0;
	while (getline(cin, A))
	{Node* head=new Node;
		head->ch = A[0];
		head->n = 1;
		head->next = NULL;
		
		int l = A.length();
		for (int i = 1; i < l; ++i)
		{
			if (ZM(A[i]))
			{
				for (Node* x = head; x != NULL; x = x->next)
				{
					if (x->ch == A[i]||x->ch==A[i]+32||x->ch==A[i]-32) { ++(x->n); h = 1; }
				}
				if (h == 0)
				{
					Node* p = new Node;
					p->next = head;
					p->ch = A[i];
					p->n =1;
					head = p;
				}
				h = 0;
			}
			else continue;
		}
		Node* g = head;
		for (Node* x=head; x != NULL; x = x->next)
		{
			if (g->n < x->n)  g = x; 
			else if (g->n == x->n){if (tolower(x->ch) < tolower(g->ch))g = x;}
		}
		cout << char(tolower(g->ch)) << " " << g->n << endl;
	}

}