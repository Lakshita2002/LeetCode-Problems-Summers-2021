ll fibo(ll n, int* dp){
    // base case
    if(n<=1) return n;

    // check if we already have the ans in our memo pad
    if(dp[n] != -1){
        return dp[n];
    }

    // recursive case
    ll ans = fibo(n-1, dp) + fibo(n-2, dp);
    // if not then store it in the memo pad
    dp[n] = ans;
    return ans;
    // alternate
    // return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int *dp = new int[n+1];
    for(int i=0; i<=n; i++){
        dp[i] = -1;
    }

    cout << fibo(n, dp);

    return 0;
}