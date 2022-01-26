#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

class ListNode {
public:
	int val;
	ListNode* next;

	ListNode(int _val)
		: val(_val)
		, next(NULL)
	{
	}
};

ListNode* reverseList(ListNode* head)
{
	ListNode *p = head, *q = NULL, *r = NULL;

	while (p) {
		q = p;
		p = p->next;
		q->next = r;
		r = q;
	}

	return q;
}

void solve()
{
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);

	head = reverseList(head);

	while (head) {
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
#ifdef ONPC
	freopen("input.txt", "r", stdin);
#endif
	int t { 1 };
	/* int i{1}; cin >> t; */
	while (t--) {
		/* cout << "Case #" << i++ << ": "; */
		solve();
	}
	return 0;
}
