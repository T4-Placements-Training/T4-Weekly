#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

class ListNode
{
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

	while (fast and fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}

	head1 = head;
	head2 = slow->next;
	slow->next = NULL;
}

ListNode* makeUnion(ListNode* head1, ListNode* head2)
{
	set<int> hash;
	while (head1)
	{
		hash.insert(head1->val);
		head1 = head1->next;
	}

	while (head2)
	{
		hash.insert(head2->val);
		head2 = head2->next;
	}

	ListNode* res = new ListNode(0);
	ListNode* curr = res;
	for (int i : hash)
	{
		curr->next = new ListNode(i);
		curr = curr->next;
	}

	return res->next;
}

void solve()
{
	ListNode* list1 = new ListNode(9);
	list1->next = new ListNode(6);
	list1->next->next = new ListNode(4);
	list1->next->next->next = new ListNode(2);
	list1->next->next->next->next = new ListNode(8);
	list1->next->next->next->next->next = NULL;

	ListNode* list2 = new ListNode(1);
	list2->next = new ListNode(2);
	list2->next->next = new ListNode(8);
	list2->next->next->next = new ListNode(6);
	list2->next->next->next->next = new ListNode(2);
	list2->next->next->next->next->next = NULL;


	ListNode* head = makeUnion(list1, list2);
	while (head)
	{
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
	while (t--)
	{
		/* cout << "Case #" << i++ << ": "; */
		solve();
	}
	return 0;
}
