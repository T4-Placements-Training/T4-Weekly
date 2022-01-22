#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

vector<int> factorial(int n)
{
	vector<int> res { 1 };

	for (int x = 2; x <= n; x++) {
		int carry = 0;
		for (int i = 0; i < res.size(); i++) {
			int prod = res[i] * x + carry;
			res[i] = prod % 10;
			carry = prod / 10;
		}

		while (carry != 0) {
			res.push_back(carry % 10);
			carry /= 10;
		}
	}

	reverse(res.begin(), res.end());
	return res;
}

void solve()
{
	int n { 10 };
	vector<int> res = factorial(n);

	for (int i : res)
		cout << i;
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
