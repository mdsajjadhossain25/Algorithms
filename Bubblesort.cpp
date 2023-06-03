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

void bubblesort(int v[], int n){
    for(int i=0; i<n-1; i++){
        bool swaped = false;
        for(int j=0; j<n-1-i; j++){
            if(v[j]>v[j+1]){
                swap(v[j], v[j+1]);
                swaped = true;
            }
        }
        if(swaped==false){
            break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bubblesort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
