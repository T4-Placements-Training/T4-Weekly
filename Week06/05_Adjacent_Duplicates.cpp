#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string remove(string s)
{
	bool flag = false;

	int i {}, j {};
	while (i < s.size()) {
		j = i + 1;
		while (j < s.size() and s[i] == s[j])
			j++;

		if (j != i + 1) {
			s.erase(s.begin() + i, s.begin() + j);
			flag = true;
		} else {
			i++;
		}
	}

	if (flag)
		return remove(s);
	return s;
}

void solve()
{
	string s { "abcdcbccba" };
	cout << remove(s) << endl;
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
