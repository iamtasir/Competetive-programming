#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll>>      vpll;
typedef		vector<ll>      vll;


int main()
{
 //O_O ;
   ll n,k,ans=0;
   cin>>n>>k;
   vll a;
   for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    a.pb(x);
   }
   sort(a.begin(),a.end());
   if(n<=k)
    cout<<"0"<<nn;
   else{
      ll temp=n-k;
      for(ll i=0;i<temp;i++){
         ans+=a[i];
      }
      cout<<ans<<nn;

   }


    return 0;
}
