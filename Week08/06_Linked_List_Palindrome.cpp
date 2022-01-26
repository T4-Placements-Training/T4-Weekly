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

ListNode* reverse(ListNode* head)
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

bool isPalindrome(ListNode* head)
{
	ListNode *slow = head, *fast = head;

	while (fast and fast->next) {
		slow = slow->next;
		fast = fast->next->next;
	}

	if (slow == fast)
		return true;
	if (fast)
		slow = slow->next;

	slow = reverse(slow);
	fast = head;
	while (slow) {
		if (slow->val != fast->val)
			return false;
		slow = slow->next;
		fast = fast->next;
	}

	return true;
}

void solve()
{
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(2);
	head->next->next->next = new ListNode(1);
	head->next->next->next->next = NULL;

	cout << isPalindrome(head) << endl;
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
