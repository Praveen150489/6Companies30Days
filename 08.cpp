// Total Decoding Messages.

class Solution {
	public:
		int CountWays(string str){
		    // Code here
		    int n=str.length();
		    int t[n+1];
		    t[0]=1;
		    t[1]=1;
		    if(str[0]=='0'){
		        return 0;
		    }
		    for(int i=2;i<=n;i++){
		        t[i]=0;
		        if(str[i-1]>'0'){
		            t[i]=t[i-1];
		        }
		        if(str[i-2]=='1' || (str[i-2]=='2' && str[i-1]<'7')){
		            t[i]=(t[i]%1000000007 + t[i-2]%1000000007)%1000000007;
		        }
		    }
		    return t[n];
		}
};
