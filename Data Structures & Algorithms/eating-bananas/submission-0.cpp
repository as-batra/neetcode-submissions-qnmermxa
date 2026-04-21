class Solution {
public:
    int func(vector<int>& piles, int rate){
        int time=0;int n=piles.size();
        for(int i=0;i<n;i++){
            time+=ceil((double)piles[i]/(double)rate);
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,piles[i]);
        }
        int low=1,high=maxi;int ans;
        while(low<=high){
            int mid=(low+high)/2;
            int totalH=func(piles,mid);
            if(totalH<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
