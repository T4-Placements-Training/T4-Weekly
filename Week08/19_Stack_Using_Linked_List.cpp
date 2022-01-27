#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

class StackNode
{
public:
	int data;
	StackNode* next;

	StackNode(int _data)
	{
		data = _data;
		next = NULL;
	}
};

class MyStack {
public:
	StackNode* top;
	MyStack() { top = NULL; }

	void push(int x)
	{
		StackNode* temp = new StackNode(x);
		temp->next = top;
		top = temp;
	}

	int pop()
	{
		if (!top)
			return -1;

		int temp = top->data;
		StackNode* tempNode = top;
		top = top->next;
		delete tempNode;
		return temp;
	}
};

void solve()
{
	MyStack* st = new MyStack();
	cout << st->pop() << endl;
	st->push(4);
	st->push(5);
	cout << st->pop() << endl;
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
