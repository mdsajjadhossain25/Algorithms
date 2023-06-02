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

const int N = 1e5+10;
int parent[N];
int sz[N];

void make(int v){
    parent[v] = v;
    sz[v] = 1;
}

int find(int v){
    if(v==parent[v]) return v;
    //path compression 
    return parent[v] = find(parent[v]);
}

void Union(int a, int b){
    a = find(a);
    b = find(b);
    if(a!=b){
        //union by size
        if(sz[a]<sz[b])
            swap(a,b);
        parent[b] = a;
        sz[a]+=sz[b];
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        make(i);
    }
    while(k--){
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }
    int connected_cnt = 0;
    for(int i=1; i<=n; i++){
        if(find(i)==i){
            connected_cnt++;
        }
    }
    cout << connected_cnt << endl;
}
