#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string makeEven(string s)
{
	int n = s.size();
	int front { -1 }, back { -1 };

	for (int i = 0; i < n; ++i) {
		if ((s[i] - '0') % 2 == 0) {
			if ((s[i] - '0') < (s[n - 1] - '0')) {
				swap(s[i], s[n - 1]);
				return s;
			}
		}
	}

	for (int i = n - 1; i >= 0; --i) {
		if ((s[i] - '0') % 2 == 0) {
			swap(s[n - 1], s[i]);
			return s;
		}
	}

	return s;
}

void solve()
{
	string s { "1539" };

	cout << makeEven(s) << endl;
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
