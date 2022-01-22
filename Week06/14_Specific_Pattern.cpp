#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

vector<int> getHash(string s)
{
	int counter { 1 };
	unordered_map<char, int> map;

	for (char c : s)
		if (map.find(c) == map.end())
			map[c] = counter++;

	vector<int> res {};
	for (char c : s)
		res.push_back(map[c]);

	return res;
}

vector<string> findMatchedWords(vector<string> dict, string pattern)
{
	int n = pattern.size();
	vector<string> res {};
	vector<int> patternHash = getHash(pattern);

	for (string s : dict) {
		if (s.size() == n) {
			auto temp = getHash(s);
			if (temp == patternHash)
				res.push_back(s);
		}
	}

	return res;
}

void solve()
{
	vector<string> dict { "abb", "abc", "xyz", "xyy" };
	string pattern { "foo" };

	auto res = findMatchedWords(dict, pattern);
	for (auto itr : res)
		cout << itr << " ";
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
