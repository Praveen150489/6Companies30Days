// Find total number of squares in N*N chessboard.

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        long long ans= (N*(N+1)*(2*N+1))/6;
        return ans;
    }
};
