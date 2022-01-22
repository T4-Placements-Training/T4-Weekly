#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int transform(string a, string b)
{
	vector<int> hash(256, 0);
	for (char c : a)
		hash[c]++;
	for (char c : b)
		hash[c]--;
	for (int i : hash)
		if (i != 0)
			return -1;

	int n1 = a.size(), n2 = b.size();
	int i { n1 - 1 }, j { n2 - 1 };
	int count {};

	while (i >= 0 and j >= 0) {
		if (a[i] == b[j]) {
			i--, j--;
		} else {
			count++;
			i--;
		}
	}

	return count;
}

void solve()
{
	string a { "GeeksForGeeks" };
	string b { "ForGeeksGeeks" };

	cout << transform(a, b) << endl;
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
