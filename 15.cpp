// Array Pairs sum divisibility problem.

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int x=nums[i]%k;
            mp[x]++;
        }
        set<int> s;
        for(auto x:mp){
            if(s.find(x.first)==s.end()){
                if(x.first==0){
                    if(x.second%2==1){
                        return false;
                    }
                    s.insert(0);
                }
                else if(k-x.first==x.first){
                    if(x.second%2==1){
                        return false;
                    }
                    s.insert(x.first);
                }
                else{
                    if(mp.find(k-x.first)==mp.end()){
                        return false;
                    }
                    else{
                        s.insert(x.first);
                        s.insert(k-x.first);
                        if(mp[x.first]!=mp[k-x.first]){
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
