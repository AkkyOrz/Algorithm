// @prefix atcoder
// @description atcoder template

#include <bits/stdc++.h>
using namespace std;
#define int long long

// typedef
//------------------------------------------
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef vector<PII> VP;

// rep
//------------------------------------------
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) (x).begin(), (x).end()
#define DEBUG(x) cerr << #x << ": " << x << '\n'
#define DEBUGP(x) cerr << #x << ": " << x.first << " \t" << x.second << '\n'

int n;
map<int, int> mp;

signed main()
{
	cin >> n;
	REP(i, n){
		int a;
		cin >> a;
		if (mp[a] != 0){
			mp[a] = 0;
		} else {
			mp[a] = 1;
		}
	}

	int cnt = 0;
	for (auto itr = mp.begin(); itr != mp.end(); itr++){
        if (itr-> second == 1){
			cnt++;
		}
    }

	cout << cnt << endl;

	return 0;
}
