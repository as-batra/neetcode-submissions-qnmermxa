class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int max_prof=0;
        for(int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                int profit=prices[j]-prices[i];
                max_prof=max(max_prof,profit);
            }
        }
        return max_prof;
    }
};
