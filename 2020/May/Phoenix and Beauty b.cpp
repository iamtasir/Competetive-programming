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


map<ll,ll>mp;


int main()
{
//O_O ;
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>v;
        set<ll>s;

        ll ar[10000]= {0};
        ll n,k;
        cin>>n>>k;
        for(ll i=0; i<n; i++)
        {
            ll temp;
            cin>>temp;
            ar[temp]++;
            mp[temp]++;
            s.insert(temp);
        }
        if(s.size()>k)
        {
            cout<<-1<<nn;
            continue;
        }
        for(ll i=1; i<=k; i++)
            if(ar[i]>0)
                v.pb(i);

        cout<<n*k<<nn;
        for(ll i=0; i<n; i++){
            for(auto b:s)
                cout<<b<<ss;
                for(ll i=1; i<=k-s.size(); i++)
           cout<<1<<ss;
        }
        v.clear();
        mp.clear();
        s.clear();

    }


    return 0;
}

