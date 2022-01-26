#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string nextStep(string s)
{
	int n = s.size();
	string res {};
	int i {};

	while (i < n) {
		int j = i + 1;

		while (j < n and s[j] == s[i])
			j++;

		res.append(to_string(j - i));
		res.push_back(s[i]);

		i = j;
	}

	return res;
}

string lookandsay(int n)
{
	string res { "1" };

	for (int i = 1; i < n; ++i)
		res = nextStep(res);

	return res;
}

void solve()
{
	int n { 5 };
	cout << lookandsay(n) << endl;
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
