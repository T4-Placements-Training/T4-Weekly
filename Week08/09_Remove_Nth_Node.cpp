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

ListNode* removeNthFromEnd(ListNode* head, int n)
{
	ListNode* dummyHead = new ListNode(0);
	dummyHead->next = head;

	ListNode *slow = dummyHead, *fast = dummyHead;
	for (int i = 0; i < n; ++i)
		fast = fast->next;

	while (fast->next) {
		slow = slow->next;
		fast = fast->next;
	}

	ListNode* temp = slow->next;
	slow->next = slow->next->next;
	delete temp;
	return dummyHead->next;
}

void solve()
{
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	head->next->next->next->next->next = NULL;
	int n = 2;

	head = removeNthFromEnd(head, n);
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
