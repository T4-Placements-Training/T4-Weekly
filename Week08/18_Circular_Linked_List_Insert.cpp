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

ListNode* sortedInsert(ListNode* head, int data)
{
	if (!head)
		return new ListNode(data);

	ListNode* toInsert = new ListNode(data);
	ListNode* curr = head;

	while (curr->next != head) {
		if (curr->val <= data and curr->next->val >= data) {
			toInsert->next = curr->next;
			curr->next = toInsert;
			return head;
		}
		curr = curr->next;
	}

	toInsert->next = curr->next;
	curr->next = toInsert;
	return toInsert;
}

void solve()
{
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(4);
	head->next->next->next = head;
	int data = 2;

	head = sortedInsert(head, data);
	ListNode* curr = head;
	while (curr->next != head) {
		cout << curr->val << " ";
		curr = curr->next;
	}
	cout << curr->val << "\n";
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
