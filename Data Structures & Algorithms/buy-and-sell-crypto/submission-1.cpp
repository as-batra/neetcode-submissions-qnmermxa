class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int curr_prof=0;int low_price=INT_MAX;int max_prof=0;
        for(int i=0;i<n;i++){
            if(prices[i]<low_price)low_price=prices[i];
            curr_prof=prices[i]-low_price;
            max_prof=max(max_prof,curr_prof);
        }
        return max_prof;
    }
};
