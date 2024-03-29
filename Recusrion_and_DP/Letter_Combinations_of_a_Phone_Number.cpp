// Link   - https://leetcode.com/problems/letter-combinations-of-a-phone-number/
// Author - seeitsmanish
#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #include<ext/pb_ds/trie_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ff first
#define ss second
#define pb emplace_back
#define ll long long int
#define ld long double
#define mod 1000000007
#define vi vector<ll>
#define vii vector<ll, ll>
#define vs vector<> string >
#define pii pair<ll, ll>
#define mii map<ll, ll>
#define ump unordered_map
#define mp make_pair
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll, vi, greater<ll>>
#define endl "\n"
#define flush cin.get()
#define mid(l, r) (l + (r - l) / 2)
#define all(v) v.begin(), v.end()
#define print(v)          \
	for (auto &n : v)     \
		cout << n << " "; \
	cout << endl
#define printpair(v)                           \
	for (auto &it : v)                         \
		cout << it.ff << " " << it.ss << endl; \
	cout << "Ended" << endl;
#define loop(i, s, e) for (auto i = s; i <= e; ++i)
#define looprev(i, s, e) for (auto i = (s); i >= (e); --i)
#define mem(var, val) memset(var, val, sizeof(var))
#define log(args...)                             \
	{                                            \
		string _s = #args;                       \
		replace(_s.begin(), _s.end(), ',', ' '); \
		stringstream _ss(_s);                    \
		istream_iterator<string> _it(_ss);       \
		err(_it, args);                          \
	}
ll max(ll a, ll b)
{
	return a > b ? a : b;
}
ll min(ll a, ll b) { return a > b ? b : a; }
ll __gcd(ll a, ll b) { return b == 0 ? a : __gcd(b, a % b); }
void err(istream_iterator<string> it) {}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
	cout << *it << " = " << a << endl;
	err(++it, args...);
}
void FIO()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// typedef trie<string, null_type, trie_string_access_traits<>, pat_trie_tag, trie_prefix_search_node_update> pbtrie;

unordered_map<int, string> key;
void make_map()
{
	key[2] = "abc";
	key[3] = "def";
	key[4] = "ghi";
	key[5] = "jkl";
	key[6] = "mno";
	key[7] = "pqrs";
	key[8] = "tuv";
	key[9] = "wxyz";
}

// Main Recursive function
void generate_combinations(vector<string> &ans, string &digits, int i, string out)
{
	if (i == digits.size())
	{
		ans.pb(out);
		return;
	}

	string s = key[digits[i] - '0'];
	for (char ch : s)
		generate_combinations(ans, digits, i + 1, out + ch);
}

vector<string> letterCombinations(string digits)
{

	make_map();
	vector<string> ans;
	if (digits == "")
		return ans;
	generate_combinations(ans, digits, 0, "");
	return ans;
}

int main()
{
	FIO();

	// Code Starts from here!

	string s;
	cin >> s;
	auto ans = letterCombinations(s);
	print(ans);

	return 0;
}
