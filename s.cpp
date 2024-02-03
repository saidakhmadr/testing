#include <bits/stdc++.h>
#define vi vector<int>
#define vll vector<long long>
#define vlvl vector<vector<long>>
#define vull vector<unsigned long long>
#define pii pair<int,int>
#define vii vector<pii>
#define sz(x) (int)(x.size())
#define pb push_back
#define bg begin
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rz resize
#define FOR(i, n) for(int i = 1; i <= (n); i++)
#define rep(i, a, b) for(int i = a; i < b; i++)
#define Sum(a) accumulate(all(a), (int)0)
#define psum(a, b) partial_sum(a.begin(), a.end(), b.begin())
#define boost ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define umap unordered_map
#define inf 30000000

#define debug(x) cout << #x << " is " << x << endl;

using namespace std;
using ill = long long int;
using ll = int64_t;
using uint = uint32_t;
using ld = long double;


void solve() {
    #if !defined(ONLINE_JUDGE)
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll t;
    cin >> t;
    while (t--) {
         int n; cin >> n;
        string a, b, c; cin >> a >> b >> c;
        bool ok = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == b[i]) {
                if(c[i] != a[i]) {
                    ok = 1; break;
                }
            }
            else {
                if(c[i] != a[i] && c[i] != b[i]) {
                    ok = 1; break;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}

int main() {
    boost;
    solve();
    return 0;
}
