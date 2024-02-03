//ego---->motivation?
// #pragma comment(linker, "/stack:200000000") 
// #pragma GCC optimize("Ofast,no-stack-protector")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
// #pragma GCC optimize("unroll-loops")
 
#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;
using ill = long long int;
using ld = long double;

#ifdef EXYPN0X_LOCAL 
    #include "exypn0x/debug.h"
#else
    //debug(...) 42
#endif
const int T = 96, M = 96;
int cached[T][M];
 
void solve() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  for (int k = 1; k <= n; k++) {
    if (n % k == 0) {
      int m = 0;
      for (int i = 1; m != 1 && i + k <= n; i++) {
        int t = abs(a[i + k] - a[i]);
        if (t < m) swap(t, m);
        if (t < T && m < M && cached[t][m]) {
          m = cached[t][m];
        } else {
          int tmp = __gcd(t, m);
          if (t < T && m < M) {
            cached[t][m] = tmp;
          }
          m = tmp;
        }
      }
      ans += (m != 1);
    }
  }
  cout << ans << '\n';
}

int main() {
      ll t;cin>>t;
      while(t--) {solve();}
}