//AIM: Stack Demonstration using STL
#include<bits/stdc++.h>
using namespace std;
#define sort(v) sort(v.begin(),v.end())
#define print(v) for(auto n:v) cout<<n<<" "
#define rev(v) reverse(v.begin(), v.end())
#define l long
#define ll long long
#define vi vector<int>
#define pb push_back
#define el cout<<"\n"
#define loop(st,con,inc) for(auto it=st; it<con; it+=inc)

ll findMax(auto top) {
	if ((top + 1) == NULL) return *(top);
	ll maxNum = *(top);
	while (!top) {
		top = top + 1;
		maxNum = max(*(top), maxNum);
		return (maxNum);
	}

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	stack<ll> s;
	s.push(12);
	s.push(23);
	s.push(56);
	cout << findMax(s.top());

	return 0;
}