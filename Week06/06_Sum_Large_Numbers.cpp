#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string findSum(string a, string b)
{
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	string res {};
	int n1 = a.size(), n2 = b.size();
	int i {}, j {};
	int carry {};

	while (i < n1 and j < n2) {
		int temp = (a[i] - '0') + (b[j] - '0') + carry;
		int curr = temp % 10;
		carry = temp / 10;

		res.push_back(curr + '0');
		i++, j++;
	}

	while (i < n1) {
		int temp = (a[i] - '0') + carry;
		int curr = temp % 10;
		carry = temp / 10;

		res.push_back(curr + '0');
		i++;
	}

	while (j < n2) {
		int temp = (b[j] - '0') + carry;
		int curr = temp % 10;
		carry = temp / 10;

		res.push_back(curr + '0');
		j++;
	}

	if (carry)
		res.push_back(carry + '0');

	while (res.size() > 1 and res.back() == '0')
		res.pop_back();

	reverse(res.begin(), res.end());
	return res;
}

void solve()
{
	string a { "2547" };
	string b { "42" };

	cout << findSum(a, b) << endl;
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
