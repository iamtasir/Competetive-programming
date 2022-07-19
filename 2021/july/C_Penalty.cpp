///*    ***Bismillahir Rahmanir Rahim***   */

/*
 Algorithm Used: 
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double dl;
typedef unsigned long long ull;
#define pb push_back
#define eb emplace_back
#define PB pop_back
#define nn "\n"
#define O_O                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define all(p) p.begin(), p.end()
#define zz(v) (ll) v.size()
#define ss ' '
#define MEM(a, b) memset(a, (b), sizeof(a))
#define CLR(p) memset(p, 0, sizeof(p))
#define precision(a) fixed << setprecision(a)
#define rep(i, b) for (ll i = 0; i < (b); i++)
#define rep1(i, b) for (int i = 1; i <= (b); i++)
//#define rep(s,e)         for(i=s;i<e;i+=1)
//#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i, b, a) for (int i = (b); i >= (a); i--)
#define rep2(i, a, b, c) for (int i = (a); i != (b); i += (c))
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define S(a) scanf("%lld", &a)
#define SS(a, b) scanf("%lld %lld", &a, &b)
#define SSS(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define pi acos(-1.0)
#define ff first
#define sc second
#define print(v)   \
    for (ll i : v) \
    cout << i << ss
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pair<ll, ll>> vpll;
typedef vector<ll> vll;
typedef map<string, ll> msl;
typedef map<ll, ll> mll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
bool comp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first != b.first)
        return a.first > b.first;
    else
        return a.second > b.second;
}
#define sz(x) (ll) x.size()
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
ll pow1(ll base, ll x)
{
    ll ans = 1;
    for (ll i = 1; i <= x; i++)
        ans *= base;
    return ans;
}

void debug(string s)
{
    cout << s << nn;
}

#define MAX 1000005
#define precision(a) fixed << setprecision(a)
#define mod 1000000007
int main()
{
    //O_O ;
    ll t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        string s1 = s;
        ll ans = 10;

        for (ll i = 0; i < sz(s1); i += 2)
        {
            if (s1[i] == '?')
                s1[i] = '1';
        }
        for (ll i = 1; i < sz(s1); i += 2)
        {
            if (s1[i] == '?')
                s1[i] = '0';
        }
        vector<ll> v, v1;
        for (ll i = 0; i < sz(s1); i++)
        {
            if (i % 2 == 0)
            {
                if (s1[i] == '0')
                    v.pb(0);
                else
                    v.pb(1);
            }
            if (i % 2 != 0)
            {
                if (s1[i] == '0')
                    v1.pb(0);
                else
                    v1.pb(1);
            }
        }
        for (ll i = 1; i < sz(v1); i++)
        {
            v[i] += v[i - 1];
            v1[i] += v1[i - 1];
        }
        // print(v);
        // cout << nn;
        // print(v1);
        // cout << nn;
        for (ll i = 1; i < sz(v); i++)
        {
            // if (i == sz(v) - 1)
            // {
            //     if (v1[i - 1] > v[i])
            //     {
            //         ans = 9;
            //         break;
            //     }
            // }
            if (v1[i - 1] + 5 - (i) < v[i])
            {
                ans = ((i + 1) * 2) - 1;
                break;
            }
            if (v1[i] + 5 - (i + 1) < v[i])
            {
                ans = ((i + 1) * 2);
                break;
            }
            if (v[i] + 5 - (i + 1) < v1[i - 1])
            {
                ans = ((i + 1) * 2) - 1;
                //  debug("in");
                break;
            }
            if (v[i] + 5 - (i + 1) < v1[i])
            {
                ans = ((i + 1) * 2);
                //  debug("in");
                break;
            }
        }
        s1 = s;
        ll ans1 = 10;

        for (ll i = 0; i < sz(s1); i += 2)
        {
            if (s1[i] == '?')
                s1[i] = '0';
        }
        for (ll i = 1; i < sz(s1); i += 2)
        {
            if (s1[i] == '?')
                s1[i] = '1';
        }
        v.clear();
        v1.clear();
        for (ll i = 0; i < sz(s1); i++)
        {
            if (i % 2 == 0)
            {
                if (s1[i] == '0')
                    v.pb(0);
                else
                    v.pb(1);
            }
            if (i % 2 != 0)
            {
                if (s1[i] == '0')
                    v1.pb(0);
                else
                    v1.pb(1);
            }
        }
        for (ll i = 1; i < sz(v1); i++)
        {
            v[i] += v[i - 1];
            v1[i] += v1[i - 1];
        }
        // print(v);
        // cout << nn;
        // print(v1);
        for (ll i = 1; i < sz(v); i++)
        {
            // if (i == sz(v) - 1)
            // {
            //     if (v1[i - 1] > v[i])
            //     {
            //         ans1 = 9;
            //         break;
            //     }
            // }
            if (v1[i - 1] + 5 - (i) < v[i])
            {
                ans1 = ((i + 1) * 2) - 1;
                break;
            }
            if (v1[i] + 5 - (i + 1) < v[i])
            {
                ans1 = ((i + 1) * 2);
                break;
            }
            if (v[i] + 5 - (i + 1) < v1[i - 1])
            {
                ans1 = ((i + 1) * 2) - 1;
                //  debug("in");
                break;
            }
            if (v[i] + 5 - (i + 1) < v1[i])
            {
                ans1 = ((i + 1) * 2);
                //   debug("in");
                break;
            }
        }

        cout << min(ans1, ans) << nn;
        // cout << ans << nn;
        // cout << ans1 << nn;

        // ll team1 = 0, team2 = 0;
    }

    return 0;
}