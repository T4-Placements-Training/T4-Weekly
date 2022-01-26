#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"


int minValue(string s, int k)
{	
	unordered_map<char, int> hash;
	for(char c: s)
		hash[c]++;
	
	priority_queue<int> maxHeap;
	for(auto itr: hash)
		maxHeap.push(itr.second);
	
	for(int i=0; i<k; ++i) {
		int curr = maxHeap.top();
		maxHeap.pop();
		if(curr != 1)
			maxHeap.push(curr-1);
	}

	int res{};
	int n = maxHeap.size();
	for(int i=0; i<n; ++i) {
		res += pow(maxHeap.top(), 2);
		maxHeap.pop();
	}

	return res;
}	


void solve()
{
	string s{"abccc"};
	int k{1};

	cout << minValue(s, k) << endl;
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

