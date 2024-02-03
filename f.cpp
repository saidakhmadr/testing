#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

#define vi vector<int>
#define vll vector<long long>
#define vlvl vector<vector<long>>
#define vull vector<unsigned long long>
#define pii pair<int,int>
#define vii vector<pii>
#define sz(x) (int)(x.size())
#define pb push_back
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rz resize
#define FOR(i, n) for(int i = 1; i < (n); i++)
#define rep(i, a, b) for(int i = a ; i < b ; i++)
#define Sum(a) accumulate(all(a), (int)0)
#define psum(a, b) partial_sum(a.begin(), a.end(), b.begin())
#define boost ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define umap unordered_map
#define inf 0x3f3f3f3f
#define ll128 long long

#define debug(x) cout << #x << " is " << x << endl;

using ill = long long int;
using ll = int64_t;
using uint = uint32_t;
using ld = long double;
//ll arr[1<<24];
unordered_map<pair<ll128, ll128>, ll128> memo;

ll128 dp(ll128 h, ll128 w) {
    if (h == 1 and w == 1) {
        return 1;
    }
    

    // Check if the result is already computed
    if (memo.find({h, w}) != memo.end()) {
        return memo[{h, w}];
    }

    ll128 result;

    if (h > w) {
        result = dp(h - 1, w) + dp(1, w) + h * w;
    } else {
        result = dp(h, w - 1) + dp(h, 1) + h * w;
    }

    // Memoize the result for future use
    memo[{h, w}] = result;

    return result;
}
int main() {
    boost;
    ll h,w;
    cin>>h>>w;
    ll128 ans = dp(h,w);
    cout<<ans<<endl;
    return 0;
}
