class Solution {
public:
    int minDays(int n) {
        int dravonelik= n;

        vector<pair<int,int>> coins;
        for(int len=1; ; len++){
            int t= len* (len+1)/2;
            if(t>n) break;
            coins.push_back({t,len+1});
        }

       const int INF=1e9;

        vector<int> dp(n+1, INF);

        dp[0]=0;

        for(auto &[score,cost] : coins){
            for(int s = score; s<= n; s++){
                dp[s]= min(dp[s],dp[s - score]+ cost);
            }
        }

        return dp[n] -1;
        
        
    }
};