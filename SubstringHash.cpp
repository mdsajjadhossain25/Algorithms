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

const int M= 1e8+7;
ll inv[M];
ll dp[M];

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

void init(string input){
    ll p = 31;
    ll p_power = 1;
    inv[0] = 1;
    dp[0] = (input[0]-'a'+1);
    for(int i=1; i<input.size(); i++){
        char ch = input[i];
        p_power = (p_power*p)%M;
        inv[i] = binExpo(p_power, M-2, M);
        dp[i] = (dp[i-1]+(ch-'a'+1)*p_power)%M;
    }
}

int subStringHash(int L, int R){
    int result = dp[R];
    if(L>0){
        result -= dp[L-1];
    }
    result = (result*inv[L])%M;
    return result;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    string input;
    int t, L, R;
    cin >> input;
    init(input);
    cin >> t;
    while(t--){
        cin >> L >> R;
        cout << subStringHash(L, R) << endl;
    }
}
