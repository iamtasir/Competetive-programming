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
ll pow(ll base, ll x)
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
        //debug("in");
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll ar[n + 10];
        for (ll i = 1; i <= n; i++)
        {
            if (s[i - 1] == 'W')
                ar[i] = 1;
            else
                ar[i] = 0;
        }
        ar[0] = 0;
        vector<pair<ll, ll>> v, v1;
        for (ll i = 1; i <= n; i++)
        {
            if (ar[i] == 1)
            {
                ll temp = i - 1;
                if (temp > 0)
                    v1.pb({1, temp});
                break;
            }
            else if (ar[i] == 0 && i == n)
            {
                v1.pb({1, n});
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            if (ar[i] == 1 && ar[i + 1] == 0 && i + 1 <= n)
            {
                ll index = i + 1;
                //  debug("in");
                while (1)
                {
                    if (ar[i + 1] == 0 && i + 1 <= n)
                        i++;
                    else
                        break;
                }
                if (ar[i + 1] == 1)
                    v.pb({i - index + 1, index});
                else
                {
                    v1.pb({index, i - index + 1});
                    // debug("in");
                }
            }
        }
        //debug("i1n");
        sort(all(v));
        //  for (auto l : v1)
        //    cout << l.first << ss << l.second << nn;

        for (auto l : v)
        {
            if (k > 0)
            {
                ll mi = min(l.first, k);
                if (mi > 0)
                {
                    for (ll j = l.second;; j++)
                    {
                        ar[j] = 1;
                        mi--;
                        if (mi == 0)
                            break;
                    }
                    k -= min(l.first, k);
                }
            }
        }
        //   debug("i1n");
        //cout << k << ss << "in" << nn;
        if (k > 0)
        {
            // cout << sz(v1) << ss << "in" << ss;
            if (sz(v1) == 1)
            {
                // debug("in");
                if (v1[0].ff == 1)
                {
                    //  debug("in2");
                    ll mi = min(v1[0].sc, k);
                    if (mi > 0)
                    {
                        for (ll i = v1[0].sc; i >= 1; i--)
                        {
                            ar[i] = 1;
                            mi--;
                            if (mi == 0)
                                break;
                        }
                    }
                }
                else
                {
                    //  debug("in3");
                    //cout << v[0]
                    ll mi = min(v1[0].sc, k);
                    if (mi > 0)
                    {
                        for (ll j = v1[0].ff;; j++)
                        {
                            ar[j] = 1;
                            // debug("inloop");
                            mi--;
                            if (mi == 0)
                                break;
                        }
                    }
                }
            }
            else if (sz(v1) == 2)
            {
                //  debug("in4");
                // cout << k << ss << "ink" << ss;
                ll mi = min(k, v1[1].sc);
                //  cout << mi << nn;
                if (mi > 0)
                {
                    for (ll j = v1[1].ff; j <= n; j++)
                    {
                        ar[j] = 1;
                        mi--;
                        if (mi == 0)
                            break;
                    }

                    k -= min(k, v1[1].sc);
                }
                if (k > 0)
                {
                    //  debug("in5");

                    ll mi1 = min(k, v1[0].sc);
                    //  cout << mi << nn;
                    if (mi1 > 0)
                    {
                        for (ll i = v1[0].sc; i >= 1; i--)
                        {
                            ar[i] = 1;
                            mi1--;
                            if (mi1 == 0)
                                break;
                        }
                    }
                }
            }
        }
        ll ans = 0;
        //    for (ll i = 1; i <= n; i++)
        //      cout << ar[i] << ss;
        // cout << nn;
        ar[0] = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (ar[i] == 1 && ar[i - 1] == 1)
                ans += 2;
            else if (ar[i] == 1 && ar[i - 1] == 0)
                ans++;
        }
        cout << ans << nn;
    }

    return 0;
}