///*    ***Bismillahir Rahmanir Rahim***   */
/// bujsilam ar proti index value gcd ber korte hbe
///pore je oi gcd mod oita mathaia sen ni
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
#define precision(a) fixed << setprecision(a)
#define rep(i,b) for(ll i=0;i<(b);i++)
#define rep1(i,b) for(int i=1;i<=(b);i++)
//#define rep(s,e)         for(i=s;i<e;i+=1)
//#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,b,a) for(int i=(b);i>=(a);i--)
#define rep2(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
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
#define     print(v)        for(ll i:v) cout<<i<<ss
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
#define yes cout << "YES\n"
#define no cout<<"NO\n"
bool comp(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.first != b.first)
        return a.first > b.first;
    else
        return a.second > b.second;
}
//ll minelementindex = min_element(v.begin(),v.end()) - v.begin();
//ll minelement = *min_element(v.begin(), v.end());
//ll maxelementindex = max_element(v.begin(),v.end()) - v.begin();
//ll maxelement = *max_element(v.begin(), v.end());
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
// string x(w.size(),'1');
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

ll ar[MAX];

int main()
{
// O_O ;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>v[m+1];
        map<ll,ll>mp;
        ll mi=(m+1)/2 ;
        ll w=0;
       // ll ar[m+1];
        for(ll i=1; i<=m; i++)
        {
            ll k;
            cin>>k;
            if(k==1)
            {
                ll x;
                cin>>x;
                mp[x]++;
                v[i].pb(x);
                if(mp[x]>mi)
                    w=1;
                else
                {
                    ar[i]=x;
                }

            }
            else
            {
                for(ll j=0; j<k; j++)
                {
                    ll y;
                    cin>>y;
                    v[i].pb(y);
                }
                sort(v[i].begin(),v[i].end());
                // for(ll j=0;j<k;j++) cout<<v[i][j]<<ss;cout<<nn;
            }



        }
        for(ll i=1; i<=m; i++)
        {
            auto vec=v[i];
            ll l=vec.size();
            if(vec.size()==1){
                v[i].clear();continue;
            }
            for(ll j=0; j<l; j++)
            {
                ll z=vec[j];
                if(mp[z]>=mi)
                {
                    ar[i]=-1;
                }
                else
                {
                    ar[i]=vec[j];
                    mp[vec[j]]++;
                    break;
                }
            }
            if(ar[i]==-1)
                w=1;

      v[i].clear();
        }

        if(w)
            no;
        else
        {
            yes;
            for(ll i=1; i<=m; i++)
                cout<<ar[i]<<ss;
            cout<<nn;
        }
         mp.clear();






    }


    return 0;
}








//https://codeforces.com/contest/1371/problem/D korte hbe
//https://codeforces.com/contest/1256/problem/B implementation pari nai
/*****************  ALHAMDULILLAH  *****************/
