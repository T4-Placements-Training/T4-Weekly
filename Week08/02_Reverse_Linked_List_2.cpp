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

ListNode* reverse(ListNode* head, int k)
{
	ListNode *p = head, *q = NULL, *r = NULL;
	while (k--) {
		q = p;
		p = p->next;
		q->next = r;
		r = q;
	}

	return q;
}

ListNode* reverseBetween(ListNode* head, int left, int right)
{
	ListNode* dummyHead = new ListNode(0);
	dummyHead->next = head;

	ListNode *start = dummyHead, *end;

	for (int i = 0; i < left - 1; ++i)
		start = start->next;
	end = start->next;
	for (int i = 0; i < (right - left + 1); ++i)
		end = end->next;

	ListNode* reversedStart = reverse(start->next, right - left + 1);

	start->next->next = end;
	start->next = reversedStart;

	return dummyHead->next;
}

void solve()
{
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	int left = 2, right = 4;

	head = reverseBetween(head, left, right);
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
