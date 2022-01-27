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

ListNode* swapPairs(ListNode* head)
{
	if (!head or !head->next)
		return head;

	ListNode *listOneHead = new ListNode(0), *listTwoHead = new ListNode(0), *resHead = new ListNode(0);
	ListNode *listOne = listOneHead, *listTwo = listTwoHead;
	ListNode* curr = head;
	bool flag = true;

	while (curr) {
		if (flag) {
			listTwo->next = curr;
			curr = curr->next;
			flag = (!flag);
			listTwo = listTwo->next;
		} else {
			listOne->next = curr;
			curr = curr->next;
			flag = (!flag);
			listOne = listOne->next;
		}
	}
	listOne->next = listTwo->next = NULL;

	curr = resHead;
	listOne = listOneHead->next, listTwo = listTwoHead->next;
	while (listOne and listTwo) {
		curr->next = listOne;
		curr = curr->next;
		listOne = listOne->next;

		curr->next = listTwo;
		curr = curr->next;
		listTwo = listTwo->next;
	}

	if (listOne)
		curr->next = listOne;
	else
		curr->next = listTwo;

	return resHead->next;
}

void solve()
{
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = NULL;

	head = swapPairs(head);
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
