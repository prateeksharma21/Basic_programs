#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define f(i,x,n) for(int i=x;i<n;i++)
#define all(c) c.begin(),c.end()
#define int ll
#define print(x) cerr << (#x) << "is "<< x << "\n"
using ll = long long;
using pii = pair<int,int>;
const int MOD = 1e9+7, N = 7e3 + 10; 

int cnt1[62];

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int n,ans = 0;
   cin >> n;
   vector<int> a(n),b(n);
   map<int,int> cnt;
   f(i,0,n){
      cin >> a[i];
      cnt[a[i]]++;
   }
   f(i,0,n){
      cin >> b[i];
   }
   vector<pii> D;
   f(i,0,n){
      if(cnt[a[i]] >= 2) ans+=b[i];
      else{
         cnt.erase(a[i]);
         D.pb({a[i],b[i]});
      }
   }
   f(i,0,D.size()){
      for(auto &it : cnt){
         if((D[i].F| it.F) == it.F){
            ans += D[i].S;
            break;
         }
      }
   }
   cout << ans << '\n';
   return 0;
}
