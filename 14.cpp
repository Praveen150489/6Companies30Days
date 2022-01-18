// Minimum size Subarray sum.

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int count=0;
            int sum=0;
            bool flag=false;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                count++;
                if(sum>=target){
                    flag=true;
                    break;
                }
            }
            if(flag==true){
                ans=min(ans,count);
            }
            if(sum<target){
                break;
            }
        }
        if(ans==INT_MAX){
            return 0;
        }
        return ans;
    }
};
