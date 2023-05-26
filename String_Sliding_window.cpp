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

int lp, lt;
string text, pattern;

bool match(int L, int  R){
    for(int i=0; i<lp; i++){
        if(text[L+i]!=pattern[i]){
            return false;
        }
    }
    return true;
}

void solve(){
    cin >> text >> pattern;
    lp = pattern.size();
    lt = text.size();
    for(int L=0, R=lp-1; R<lt; L++, R++){
        if(match(L, R)){
            cout << L << " ";
        }
    }

}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
