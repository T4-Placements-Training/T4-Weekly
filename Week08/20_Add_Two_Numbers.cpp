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

	ListNode(int _data)
	{
		this->val = _data;
		next = NULL;
	}
};

ListNode* createList(vector<int> nums)
{
	if (nums.size() == 0)
		return NULL;

	ListNode* l = new ListNode(nums[0]);
	ListNode* curr = l;
	int i = 1;
	while (i < nums.size()) {
		curr->next = new ListNode(nums[i]);
		curr = curr->next;
		i++;
	}

	return l;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* resHead = new ListNode(0);
	ListNode* head = resHead;
	int carry = 0;

	while (l1 and l2) {
		int curr = l1->val + l2->val + carry;
		carry = curr / 10;
		head->next = new ListNode(curr % 10);

		head = head->next;
		l1 = l1->next;
		l2 = l2->next;
	}

	while (l1) {
		int curr = l1->val + carry;
		carry = curr / 10;
		head->next = new ListNode(curr % 10);

		head = head->next;
		l1 = l1->next;
	}

	while (l2) {
		int curr = l2->val + carry;
		carry = curr / 10;
		head->next = new ListNode(curr % 10);

		head = head->next;
		l2 = l2->next;
	}

	if (carry) {
		head->next = new ListNode(carry);
	}

	return resHead->next;
}

void solve()
{
	vector<int> nums1 { 9, 9, 9, 9, 9, 9, 9 };
	vector<int> nums2 { 9, 9, 9, 9 };
	ListNode* l1 = createList(nums1);
	ListNode* l2 = createList(nums2);

	ListNode* l3 = addTwoNumbers(l1, l2);
	while (l3) {
		cout << l3->val << " ";
		l3 = l3->next;
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
