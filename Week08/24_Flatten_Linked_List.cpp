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
	Node* next, *prev, *child;

	Node(int _val)
	{
		this->val = _val;
		next = child = NULL;
	}

};

Node* flatten(Node* head)
{
	if (!head)
		return NULL;

	Node* curr = head;
	Node* currChild = head->child;
	Node* currNext = head->next;

	if (curr->child)
	{
		Node* flattenChild = flatten(curr->child);
		curr->child = NULL;
		curr->next = flattenChild;
		flattenChild->prev = curr;

		while (curr->next)
			curr = curr->next;

		Node* flattenNext = flatten(currNext);
		if (flattenNext)
		{
			curr->next = flattenNext;
			flattenNext->prev = curr;

		}
	}
	else
		head->next = flatten(head->next);

	return head;
}

void solve()
{
	Node* head = new Node(1);
	head->next = new Node(2);
	head->child = new Node(3);

	head = flatten(head);
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
