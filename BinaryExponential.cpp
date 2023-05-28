const int m= 1e9+7;

int binExpo(int a, int b){
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
