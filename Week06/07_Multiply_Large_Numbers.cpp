#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

string add(string a, string b)
{
	string res {};
	int carry {};
	int i {}, j {};
	int n1 = a.size(), n2 = b.size();

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

	return res;
}

string multiply(string s, char digit)
{
	string res {};
	int carry {}, i {}, n = s.size();

	while (i < n) {
		int temp = ((s[i] - '0') * (digit - '0')) + carry;
		int curr = temp % 10;
		carry = temp / 10;

		res.push_back(curr + '0');
		i++;
	}

	if (carry)
		res.push_back(carry + '0');

	return res;
}

string multiplyStrings(string a, string b)
{
	string res {};
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	bool sign = false;
	if ((a.back() != '-' and b.back() == '-') or a.back() == '-' and b.back() != '-')
		sign = true;
	if (a.back() == '-')
		a.pop_back();
	if (b.back() == '-')
		b.pop_back();

	int n1 = a.size(), n2 = b.size();
	int i {}, j {};
	int carry {};

	for (int i = 0; i < b.size(); ++i) {
		string zeroes {};
		for (int j = 0; j < i; ++j)
			zeroes.push_back('0');

		string curr = zeroes + multiply(a, b[i]);
		res = add(res, curr);
	}

	while (res.size() > 1 and res.back() == '0')
		res.pop_back();

	if (res.size() == 1 and res[0] == '0')
		return res;
	if (sign)
		res.push_back('-');
	reverse(res.begin(), res.end());
	return res;
}

void solve()
{
	string a { "33" };
	string b { "-24" };

	cout << multiplyStrings(a, b) << endl;
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
