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

void divider(ListNode* head, ListNode*& head1, ListNode*& head2)
{
	ListNode* slow = head;
	ListNode* fast = head->next;

	while (fast and fast->next) {
		fast = fast->next->next;
		slow = slow->next;
	}

	head1 = head;
	head2 = slow->next;
	slow->next = NULL;
}

ListNode* merge(ListNode* head1, ListNode* head2)
{
	ListNode* dummyHead = new ListNode(0);
	ListNode* curr = dummyHead;

	while (head1 and head2) {
		if (head1->val < head2->val) {
			curr->next = head1;
			head1 = head1->next;
		} else {
			curr->next = head2;
			head2 = head2->next;
		}
		curr = curr->next;
	}

	if (head1)
		curr->next = head1;
	else
		curr->next = head2;
	return dummyHead->next;
}

ListNode* mergeSort(ListNode* head)
{
	if (!head or !head->next)
		return head;

	ListNode *head1, *head2;
	divider(head, head1, head2);

	head1 = mergeSort(head1);
	head2 = mergeSort(head2);
	return merge(head1, head2);
}

void solve()
{
	ListNode* head = new ListNode(3);
	head->next = new ListNode(5);
	head->next->next = new ListNode(2);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(1);
	head->next->next->next->next->next = NULL;

	head = mergeSort(head);
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
