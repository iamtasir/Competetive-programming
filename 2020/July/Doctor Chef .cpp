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
#define	       MEM(a,b)         memset(a,(b),sizeof(a))
#define	       CLR(p)           memset(p,0,sizeof(p))
#define f0(i,b) for(int i=0;i<(b);i++)
#define f1(i,b) for(int i=1;i<=(b);i++)
#define f2(i,a,b) for(int i=(a);i<=(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define	       ff               first
#define	       sc              second
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
#define yes cout << "YES\n"
#define no cout<<"NO\n"
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

ll ar[MAX];

int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll ans=1;
        multiset<ll>s;
        ll n;cin>>n;ll x;cin>>x;
   for(ll i=1;i<=n;i++)
   {
       ll a;cin>>a;
       ar[i]=a;
       s.insert(a);
   }
   sort(ar,ar+n+1);
   ll aim=ar[n];

   if(x>=aim)
   {
       cout<<s.size()<<nn;
       continue;
   }
   auto index2=s.lower_bound(x);

   ll y=*index2;
  cout<<y<<"value of y"<<nn;
   if(y-x)
   {
       s.erase(y);
       ll temp4=y-x;
       temp4*=2;
       if(temp4>y)
        temp4=y;
       s.insert(temp4);

   }
   else
    s.erase(x);
  // cout<<y<<nn;
  y=x;
  cout<<y<<"in"<<nn;
    while(y<=aim)
    {
        y*=2;
        cout<<y<<"value of y"<<nn;

      auto index=s.lower_bound(y);
        if(index!=s.end())
        {
            ll temp=*index;
           // cout<<temp<<"TEMP"<<nn;
            if(temp-y){
            s.erase(temp);
             temp=temp-y;
            // cout<<temp<<"TEMP"<<nn;
             temp*=2;
             if(temp>*index)
                temp=*index;
             s.insert(temp);

        }
        else if(temp-y==0)
        {
            s.erase(temp);
        }
        else if()
        for(auto it=s.begin();it!=s.end();it++)
            cout<<*it<<"#"<<ss;
            cout<<nn;

      ans++;


    }




   }
   cout<<ans+s.size()<<nn;

   }
    return 0;
}
