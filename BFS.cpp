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

vector<int> g[N];
int vis[N];
int level[N];

void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source]=1;

    while(!q.empty()){
        int cur_v = q.front(); 
        q.pop();
        for(int child: g[cur_v]){
            if(!vis[child]){
                q.push(child);
                vis[child] = 1; 
                level[child] = level[cur_v] + 1;
            }
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        g[x].pb(y);
        g[y].pb(x);
    }
    bfs(1);
    cout << endl;
    for(int i=1; i<=n; i++){
        cout << i << " : " << level[i] << endl;
    }
}
