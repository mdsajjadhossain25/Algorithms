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

const int M= 1e9+7;

int binExpo(int a, int b, int m){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a)%m;
        }
        a = (a * 1LL* a)%m;
        b >>=1;
    }
    return ans;
}



void solve(){
    int a;
    cin >> a;
    cout << binExpo(a, M-2, M) << endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    solve();
}
