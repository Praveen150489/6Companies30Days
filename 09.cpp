//.Given a pattern containing only I's and D's. I for increasing and D
//for decreasing.Devise an algorithm to print the minimum number following
//that pattern.

class Solution {
public:
    string printMinNumberForPattern(string S){
        // code here
        int n=S.length();
        string ans="";
        int x=n+1;
        vector<int> v(x,-1);
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(S[i]=='I'){
                v[i+1]=x;
                x--;
                for(int k=i+2;k<=(i+1+count);k++){
                    v[k]=x;
                    x--;
                }
                count=0;
            }
            else{
                count++;
            }
        }
        for(int i=0;i<=count;i++){
            v[i]=x;
            x--;
        }
        for(int i=0;i<v.size();i++){
            ans+=(v[i]+'0');
        }
        return ans;
    }
};
