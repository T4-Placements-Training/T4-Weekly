#ifdef ONPC
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << ": " << x << "\n"

int grayCode(int curr)
{
	return (curr ^ (curr >> 1));
}

string stringFromGray(int gray, int n)
{
	string res;

	for (int i = n - 1; i >= 0; --i)
		if (gray & (1 << i))
			res.push_back('1');
		else
			res.push_back('0');

	return res;
}

vector<string> generateCode(int n)
{
	vector<string> res {};
	ll total = 1 << n;

	for (int i = 0; i < total; ++i) {
		int gray = grayCode(i);
		string curr = stringFromGray(gray, n);
		res.push_back(curr);
	}

	return res;
}

void solve()
{
	int n = 5;
	auto res = generateCode(n);

	for (auto s : res)
		cout << s << " ";
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
