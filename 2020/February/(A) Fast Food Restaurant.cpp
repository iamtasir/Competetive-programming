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
#define MAX 1000005


int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll a[100000];
        ll b,c,ans=0;
      cin>>a[0]>>a[1]>>a[2];
      sort(a,a+3);
     //ll temp=min(min(a,b),c);
      if(a[0]>0)
      {
          ans=3;
        a[0]=a[0]-1;
        a[1]=a[1]-1;
        a[2]=a[2]-1;
        if(a[0]>0&&a[2]>0)
        {
            ans+=1;
            a[0]=a[0]-1;
            a[2]=a[2]-1;

        }
        if(a[0]>0&&a[1]>0)
        {
                ans+=1;
                a[0]-=1;
                a[1]-=1;
             // cout<<ans<<" in 1"<<nn;
        }
        if(a[0]>0)
            {
                ans+=1;
                a[0]-=1;
                a[1]-=1;
                a[2]-=1;
              //  cout<<ans<<" in 2"<<nn;
         }

        if(a[1]>0&&a[2]>0)
            {
                ans+=1;
                a[1]-=1;
                a[2]-=1;
             //cout<<ans<<" in 3"<<nn;
            }

        cout<<ans<<nn;
      }
        else if(a[0]==0&&a[1]==0&&a[2]==0)
            cout<<0<<nn;
         else if(a[0]==0&&a[1]==0&&a[2]!=0)
            cout<<1<<nn;
        else if(a[0]==0&&a[1]!=0&&a[2]!=0)
        {
            ans=2;
            a[1]-=1;
            a[2]-=1;
            if(a[1]>0&&a[2]>0)
            {
                ans+=1;
                a[1]-=1;
                a[2]-=1;

            }
            cout<<ans<<nn;
    }
}


    return 0;
}
