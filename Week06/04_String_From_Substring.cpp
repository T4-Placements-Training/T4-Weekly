#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

vector<int> getFactors(int n)
{
	vector<int> res {};
	for (int i = 1; i <= n / 2; ++i)
		if (n % i == 0)
			res.push_back(i);

	return res;
}

bool helper(string& s, int num)
{
	int i = 0, j = num;
	int n = s.size();

	while (j < n) {
		if (s[i] != s[j])
			return false;
		i++, j++;
	}

	return true;
}

int isRepeat(string& s)
{
	int n = s.size();
	vector<int> nums = getFactors(n);

	for (int i : nums) {
		if (helper(s, i))
			return 1;
	}

	return 0;
}

void solve()
{
	string s { "ababab" };
	cout << isRepeat(s) << endl;
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
