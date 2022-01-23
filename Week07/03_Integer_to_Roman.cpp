#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string convertToRoman(int n)
{
	vector<int> nums { 1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000 };
	vector<string> symbols { "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M" };
	int curr = 12;

	string res {};
	while (n) {
		int q = n / nums[curr];

		while (q--)
			res += symbols[curr];

		n = n % nums[curr];
		curr--;
	}

	return res;
}

void solve()
{
	int n {3549};
	cout << convertToRoman(n) << endl;
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
