// Position of M-th item in circle.
class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        M=M%N;
        if(M==0){
            if(N==1){
                return 1;
            }
            else if(K==1){
                return N;
            }
            else{
                return K-1;
            }
        }
        int x=(M+K-1)%N;
        if(x==0){
            return N;
        }
        return x;
    }
};
