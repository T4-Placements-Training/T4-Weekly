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
	{
		this->val = _val;
		this->next = NULL;
	}
};

ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
{
	ListNode *a = headA, *b = headB;
	bool flag = true;

	while (a or b) {
		if (a == b)
			return a;
		if (!a)
			a = headB;
		else
			a = a->next;

		if (!b)
			b = headA;
		else
			b = b->next;
	}

	return NULL;
}

void solve()
{
	ListNode* headA = new ListNode(4);
	headA->next = new ListNode(1);
	headA->next->next = new ListNode(8);
	headA->next->next->next = new ListNode(4);
	headA->next->next->next->next = new ListNode(5);

	ListNode* headB = new ListNode(5);
	headB->next = new ListNode(6);
	headB->next->next = new ListNode(1);
	headB->next->next->next = headA->next->next;

	cout << getIntersection(headA, headB)->val << endl;
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
