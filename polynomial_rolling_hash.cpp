#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define mp make_pair
#define pb push_back
#define pp pop_back
#define fi first
#define se second
#define as(x) (x).begin(), (x).end()
#define rev(x) (x).rbegin(), (x).rend()

#define mod 100000007


int gethash(string key){
    ll value = 0;
    ll p = 31;
    ll p_power = 1;

    for(char ch : key){
        value = (value+ (ch-'a'+1)*p_power) % mod;
        p_power = (p_power*p)%mod;
    }
    return value;
}

void solve(){
    ll n;
    string key;
    cin >> key;
    n = gethash(key);
    cout << n << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
}
