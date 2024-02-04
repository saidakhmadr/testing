//ego---->motivation?
// #pragma comment(linker, "/stack:200000000") 
// #pragma GCC optimize("Ofast,no-stack-protector")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
// #pragma GCC optimize("unroll-loops")
 
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

using ll = int64_t;
using ill = long long int;
using ld = long double;

#ifdef EXYPN0X_LOCAL 
    #include "exypn0x/debug.h"
#else
    //debug(...) 42
#endif
void solve() {
int a, b, r;
    cin >> a >> b >> r;
    vector<int> v;
    int cur = -1;
    for(int i = 61;i >= 0;--i) if(((1ll << i) & a) != ((1ll << i) & b))
    {
        if(!~cur)
        {
            if((1ll << i) & a) cur = 1;
            else cur = 2;
        }
        else
        {
            if(cur == 1 && ((1ll << i) & a)) v.push_back(i);
            if(cur == 2 && ((1ll << i) & b)) v.push_back(i);
        }
    }
    int x = 0;
    for(auto k : v)
    {
        if(r >= (1ll << k))
        {
            x |= 1ll << k;
            r -= 1ll << k;
        }
    }
    cout << abs((a ^ x) - (b ^ x)) << endl;
}

int main() {
      ll t;cin>>t;
      while(t--) {solve();}
}