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

ListNode* oddEvenList(ListNode* head)
{
	if (!head or !head->next or !head->next->next)
		return head;

	ListNode *oddHead = new ListNode(0), *evenHead = new ListNode(0);
	ListNode *odd = oddHead, *even = evenHead;
	ListNode* curr = head;
	bool flag = true;

	while (curr) {
		if (flag) {
			odd->next = curr;
			odd = odd->next;
			flag = (!flag);
		} else {
			even->next = curr;
			even = even->next;
			flag = (!flag);
		}
		curr = curr->next;
	}

	even->next = NULL;
	odd->next = evenHead->next;
	return oddHead->next;
}

void solve()
{
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	head->next->next->next->next->next = NULL;

	head = oddEvenList(head);
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
