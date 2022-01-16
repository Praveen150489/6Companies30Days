class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int ans=0;
        queue<int> q;
        long long int p=1;
        for(int i=0;i<a.size();i++){
            if(a[i]>=k){
                ans+=(q.size()*(q.size()+1))/2;
                while(!q.empty()){
                    q.pop();
                }
                p=1;
            }
            else{
                p*=a[i];
                q.push(a[i]);
                if(p>=k){
                    while(p>k){
                        int x=q.front();
                        q.pop();
                        ans+=q.size();
                        p=p/x;
                    }
                }
            }
        }
        while(!q.empty()){
            ans+=q.size();
            q.pop();
        }
        return ans;
    }
};
