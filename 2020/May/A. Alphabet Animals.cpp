
#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef     unsigned long long  ull;
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
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
#define yes cout << "YES\n"
#define no cout<<"NO\n"
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define mod 1000000007



int main()
{
 //O_O ;
 map<string,ll>mp;ll d=0,p=0;
 string s,v;cin>>s;
 ll l=s.length();
 char c=s[l-1];
   ll n;
   cin>>n;
  // cout<<s<<ss<<"*"<<ss<<c<<nn;
   for(ll i=0;i<n;i++)
   {
        string x ;cin>>x;
       ll y=x.length();
      // cout<<
       if(x[0]==c&&p==0)
       {
           c=x[y-1];d++;
           v=x;p=1;
       }
       else if(x[0]==c&&p==1){
        d++;
        c=x[y-1];
       }

   }
   if(d==n)
    cout<<v<<nn;
  else if(d==1)
     cout<<v<<"!"<<nn;
   else
    cout<<"?"<<nn;


    return 0;
}
