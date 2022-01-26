#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

pair<char, char> getRelation(string& s1, string& s2)
{
	int n = min(s1.size(), s2.size());

	for (int i = 0; i < n; ++i) {
		if (s1[i] != s2[i])
			return { s1[i], s2[i] };
	}

	return { '0', '0' };
}

void dfsHelper(vector<vector<int>>& List, int source, vector<bool>& visited, stack<int>& nodeSt)
{
	visited[source] = true;

	for (int i : List[source])
		if (!visited[i])
			dfsHelper(List, i, visited, nodeSt);

	nodeSt.push(source);
}

vector<int> topoSort(vector<vector<int>>& List)
{
	int n = List.size();
	vector<int> res {};
	stack<int> nodeSt;
	vector<bool> visited(n, false);

	for (int i = 0; i < n; ++i)
		if (!visited[i])
			dfsHelper(List, i, visited, nodeSt);

	while (!nodeSt.empty()) {
		res.push_back(nodeSt.top());
		nodeSt.pop();
	}

	return res;
}

string findOrder(string dict[], int n, int k)
{
	int count {};
	unordered_map<char, int> charNum;
	unordered_map<int, char> numChar;
	vector<vector<int>> List(k);

	for (int i = 0; i < n; ++i) {
		for (char c : dict[i]) {
			if (charNum.find(c) == charNum.end()) {
				charNum[c] = count;
				numChar[count] = c;
				count++;
			}
		}
	}

	for (int i = 1; i < n; ++i) {
		auto relation = getRelation(dict[i - 1], dict[i]);
		char u = relation.first, v = relation.second;

		if (u != '0' and v != '0')
			List[charNum[u]].push_back(charNum[v]);
	}

	vector<int> resNum = topoSort(List);
	string resChar {};
	for (int num : resNum)
		resChar.push_back(numChar[num]);

	return resChar;
}

void solve()
{
	string dict[] { "baa", "abcd", "abca", "cab", "cad" };
	int n { 5 };
	int k { 4 };

	cout << findOrder(dict, n, k) << endl;
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
