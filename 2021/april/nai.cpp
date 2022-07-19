///*    ***Bismillahir Rahmanir Rahim***   */
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

ll w[26] = {2250,2250,2500,2250,2500,2500,2750,2250,2500,2500,2750,2500,2750,2750,3000,2250,2500,2500,2750,2500,2750,3000,2500,2750,2750,3000};

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
//auto s =to_string(42);
//string s = "12345";
// object from the class stringstream
//stringstream geek(s);
// The object has the value 12345 and stream
// it to the integer x
//int x = 0;
//geek >> x;
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007
void f1(string a,string b)
{
    //  cout<<"in"<<nn;
    cout<<"........||........"<<nn;
    cout<<".../"<<"\\"<<"...||.../"<<"\\"<<"..."<<nn;
    cout<<"../..\\..||../..\\.."<<nn;
    cout<<"./....\\.||./....\\."<<nn;
    cout<<"/"<<a;
    for(ll i=0; i<6-a.size(); i++)
        cout<<".";
    cout<<"\\||/"<<b;
    for(ll i=0; i<6-b.size(); i++)
        cout<<".";
    cout<<"\\"<<nn;
    cout<<"\\______/||\\______/"<<nn;
   // cout<<"........||........"<<nn;
}
void f2(string a,string b)
{
    cout<<".../\\...||........"<<nn<<"../..\\..||........"<<nn<<"./....\\.||.../\\..."<<nn
        <<"/"<<a;
    for(ll i=0; i<6-a.size(); i++)
        cout<<".";

    cout<<"\\||../..\\.."<<nn<<"\\______/||./....\\."<<nn<<"........||/"<<b;
    for(ll i=0; i<6-b.size(); i++)
        cout<<".";
    cout<<"\\"<<nn<<"........||\\______/"<<nn;
   // cout<<"........||........"<<nn;

}
void f3(string a,string b)
{

    cout<<"........||.../\\..."<<nn<<"........||../..\\.."<<nn<<".../\\...||./....\\."<<nn
        <<"../..\\..||/"<<b;
    for(ll i=0; i<6-b.size(); i++)
        cout<<".";
    cout<<"\\"<<nn<<"./....\\.||\\______/"<<nn<<"/"<<a;
    for(ll i=0; i<6-a.size(); i++)
        cout<<".";
    cout<<"\\||........"<<nn<<"\\______/||........"<<nn;
    //cout<<"........||........"<<nn;

}
ll ff(string x)
{
    ll l=x.length();
    ll ans=0;
    for(ll i=0; i<l; i++)
    {
        char c=x[i];
        int d=(ll)c;
        ll g=0,one=0,zero=0;
        string binary = bitset<8>(d).to_string();
        for(ll i=0; i<binary.size(); i++)
        {
            if(binary[i]=='1')
            {
                one++;
                g=1;
            }
            else if(g==1&&binary[i]=='0')
                zero++;
        }
        ans+=(one*500+zero*250);


    }
    return ans;

}



int main()
{
 O_O ;
    ll t;
    cin>>t;
    ll c=1;
    // cout<<w[25]<<nn;
    while(t--)
    {
        string s[20],a,b;
        for(ll i=0; i<8; i++)
            cin>>s[i];

        ll x,y;
        for(ll i=0; i<8; i++)
        {
            for(ll j=0; j<9; j++)
            {
                /// cout<<s[i][j]
                if(s[i][j]=='/')
                {

                    j++;
                    while(s[i][j]!="\\"&&j<9)
                    {
                    a+=s[i][j];
                    j++;
                    x=i;
                    }
                }
            }
            for(ll k=9; k<18; k++)
            {
                 if(s[i][k]=='/')
                {

                    j++;
                    while(s[i][k]!="\\"&&k<18)
                    {
                    b+=s[i][k];
                    k++;

                    }
                     y=i;
                }
            }

        }

        ll p=ff(a);
        ll q=ff(b);
//          cout<<p<<ss<<q<<nn;
//         cout<<x<<ss<<y<<nn;
        cout<<a<<ss<<b<<nn;
        if((p>q&&x>y)||(p<q&&x<y))
            cout<<"Case "<<c++<<":"<<nn<<"The figure is correct."<<nn;
        else if(p==q&&x==y)
        {
            cout<<"Case "<<c++<<":"<<nn<<"The figure is correct."<<nn;

        }

        else
        {
            if(p==q)
            {
                cout<<"Case "<<c++<<":"<<nn;
                f1(a,b);
            }
            else if(p<q)
            {
                cout<<"Case "<<c++<<":"<<nn;
                f2(a,b);
            }
            else
            {
                cout<<"Case "<<c++<<":"<<nn;
                f3(a,b);
            }



        }






    }


    return 0;
}








//https://codeforces.com/contest/1371/problem/D korte hbe
//https://codeforces.com/contest/1256/problem/B implementation pari nai
/*****************  ALHAMDULILLAH  *****************/
