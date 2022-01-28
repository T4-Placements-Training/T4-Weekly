#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

class Node
{
public:
	int val;
	Node* next, *prev;

	Node(int _val)
	{
		this->val = _val;
		this->next = NULL;
		this->prev = NULL;
	}
};

Node* reverseDLL(Node* head)
{
	Node* p = head, *q = NULL, *r = NULL;
	while (p)
	{
		q = p;
		p = p->next;
		q->prev = p;
		q->next = r;
		r = q;
	}

	return q;
}

void solve()
{
	Node* head = new Node(3);
	head->next = new Node(4);
	head->next->prev = head;
	head->next->next = new Node(5);
	head->next->next->prev = head->next;

	head = reverseDLL(head);
		
	while (head)
	{
		cout << head->val << " ";
		head = head->next;
	}
	cout << "\n";
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
#ifdef ONPC
	freopen("input.txt", "r", stdin);
#endif
	int t { 1 };
	/* int i{1}; cin >> t; */
	while (t--)
	{
		/* cout << "Case #" << i++ << ": "; */
		solve();
	}
	return 0;
}
