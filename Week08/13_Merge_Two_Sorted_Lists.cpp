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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
	ListNode* dummyHead = new ListNode(0);
	ListNode* list = dummyHead;

	while (list1 and list2) {
		if (list1->val < list2->val) {
			list->next = list1;
			list1 = list1->next;
		} else {
			list->next = list2;
			list2 = list2->next;
		}

		list = list->next;
	}

	if (list1)
		list->next = list1;
	else if (list2)
		list->next = list2;

	return dummyHead->next;
}

void solve()
{
	ListNode* list1 = new ListNode(1);
	list1->next = new ListNode(2);
	list1->next->next = new ListNode(4);

	ListNode* list2 = new ListNode(1);
	list2->next = new ListNode(3);
	list2->next->next = new ListNode(4);

	ListNode* list = mergeTwoLists(list1, list2);
	while (list) {
		cout << list->val << " ";
		list = list->next;
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
