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
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
#define MAX 1000005
#define mod 1000000007


int main()
{
 //O_O ;
   ll n,x;ll l,c=0;
   cin>>n>>x;
   if(n==3){
        if(x==5)
    cout<<"YES"<<nn;
   else
    cout<<"NO"<<nn;
    return 0;
   }
   if(n==5)
   {
       if(x==7)
       cout<<"YES"<<nn;
       else
        cout<<"NO"<<nn;
       return 0;

   }
   if(n==2)
   {
       if(x==3)
       cout<<"YES"<<nn;
       else
        cout<<"NO"<<nn;
       return 0;
   }
   if(n==7)
   {
       if(x==11)
        cout<<"YES"<<nn;
       else
        cout<<"NO"<<nn;
       return 0;
   }



   for(ll i=n+1;i<=51;i++)
   {
       if(i%2==0||i%5==0||i%3==0||i%7==0)c++;

     else{
            l=i;
        break;
     }

   }
 // cout<<l<<nn;
   if(l==x)
    cout<<"YES"<<nn;
   else
    cout<<"NO"<<nn;



    return 0;
}
