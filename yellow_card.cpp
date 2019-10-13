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
const int MOD = 1e9+7, N = 1e5 + 10; 

int32_t main(){
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   int a1,a2,k1,k2,n;
   cin >> a1 >> a2 >> k1 >> k2 >> n;
   if(k1 > k2){
      swap(k1,k2);
      swap(a1,a2);
   }
   int res = 0;
   if(n >= k1*a1){
      res = a1+(n-k1*a1)/k2;
   }else{
      res = n/k1;
   }
   cout << max(n-a1*(k1-1)-a2*(k2-1),0ll) << ' ' << res << '\n';
   return 0;
}
