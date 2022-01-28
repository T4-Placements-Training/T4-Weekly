#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

class Node
{
public:
	int val;
	Node* next;
	Node* random;

	Node(int _val)
	{
		val = _val;
		next = NULL;
		random = NULL;
	}
};

Node* helper(Node* head, unordered_map<Node*, Node*> &hash)
{
	if (hash.find(head) != hash.end())
		return hash[head];
	if (!head)
		return NULL;

	Node* curr = new Node(head->val);
	hash[head] = curr;
	curr->next = helper(head->next, hash);
	curr->random = helper(head->random, hash);

	return curr;
}

Node* copyRandomList(Node* head)
{
	unordered_map<Node*, Node*> hash;

	return helper(head, hash);
}

void solve()
{
	Node* head = new Node(1);
	head->next = new Node(2);
	head->random = head->next;
	head->next->random = head->next;
	head->next->random->next = NULL;

	Node* res = copyRandomList(head);
	cout << res->val << " " << res->random->val << "\n";
	cout << res->next->val << " " << res->random->val << "\n";
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
