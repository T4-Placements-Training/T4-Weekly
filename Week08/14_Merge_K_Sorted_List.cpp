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

class ListNodeCompare {
public:
	bool operator()(ListNode* l1, ListNode* l2)
	{
		return l1->val > l2->val;
	}
};

ListNode* mergeKLists(vector<ListNode*>& lists)
{
	priority_queue<ListNode*, vector<ListNode*>, ListNodeCompare> maxHeap;

	for (auto itr : lists) {
		if (itr) {
			maxHeap.push(itr);
		}
	}

	ListNode* dummyHead = new ListNode(0);
	ListNode* head = dummyHead;
	while (!maxHeap.empty()) {
		ListNode* curr = maxHeap.top();
		maxHeap.pop();

		head->next = curr;
		head = head->next;

		if (curr->next)
			maxHeap.push(curr->next);
	}

	return dummyHead->next;
}

void solve()
{
	ListNode* list1 = new ListNode(1);
	list1->next = new ListNode(4);
	list1->next->next = new ListNode(5);
	list1->next->next->next = NULL;

	ListNode* list2 = new ListNode(1);
	list2->next = new ListNode(3);
	list2->next->next = new ListNode(4);
	list2->next->next->next = NULL;

	ListNode* list3 = new ListNode(2);
	list3->next = new ListNode(6);
	list3->next->next = NULL;

	vector<ListNode*> lists { list1, list2, list3 };
	ListNode* res = mergeKLists(lists);
	while (res) {
		cout << res->val << " ";
		res = res->next;
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
