#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int romanToDecimal(string s)
{
	unordered_map<char, int> hash;
	hash['I'] = 1;
	hash['V'] = 5;
	hash['X'] = 10;
	hash['L'] = 50;
	hash['C'] = 100;
	hash['D'] = 500;
	hash['M'] = 1000;

	int i = 0;
	int n = s.size();
	int res {};

	while (i < n) {
		if (i + 1 < n and hash[s[i + 1]] > hash[s[i]]) {
			res += (hash[s[i + 1]] - hash[s[i]]);
			i += 2;
		} else {
			res += hash[s[i]];
			i++;
		}
	}

	return res;
}

void solve()
{
	string s { "V" };
	cout << romanToDecimal(s) << endl;
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
