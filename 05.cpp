// Find Nth Ugly Number.

class Solution{
public:
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    vector<long long> v;
	    v.push_back(1);
	    int p=2;
	    int q=3;
	    int r=5;
	    int x=0,y=0,z=0;
	    for(int i=1;i<n;i++){
	        long long m=min(p*v[x],min(q*v[y],r*v[z]));
	        v.push_back(m);
	        if(m==p*v[x]){
	            x++;
	        }
	        if(m==q*v[y]){
	            y++;
	        }
	        if(m==r*v[z]){
	            z++;
	        }
	    }
	    return v[n-1];
	}
};
