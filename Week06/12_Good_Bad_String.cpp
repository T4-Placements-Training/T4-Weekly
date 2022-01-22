#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int isGoodorBad(string s)
{
	int v {}, c {};
	int n = s.size();
	string vowels { "aeiou" };

	for (int i = 0; i < n; ++i) {
		if (v > 5 or c > 3)
			return 0;
		if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
			v++;
			c = 0;
		} else if (s[i] == '?') {
			v++, c++;
		} else {
			v = 0;
			c++;
		}
	}

	return 1;
}

void solve()
{
	string s { "bcdaeiou??" };
	cout << isGoodorBad(s) << endl;
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
