// Greatest Common Divisor of Strings.
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string x="";
        int i=0;
        int j=0;
        int n=str1.length();
        int m=str2.length();
        while(i<n && j<m){
            if(str1[i]!=str2[j]){
                return "";
            }
            else{
                x+=str1[i];
                i++;
                j++;
            }
        }
        int k=0;
        while(i<n){
            if(str1[i]!=x[k]){
                return "";
            }
            else{
                i++;
                k++;
                if(k==x.length()){
                    k=0;
                }
            }
        }
        while(j<m){
            if(str2[j]!=x[k]){
                return "";
            }
            else{
                j++;
                k++;
                if(k==x.length()){
                    k=0;
                }
            }
        }
        int y=x.length();
        int p=2;
        while(true){
            if(str1.length()%y==0 && str2.length()%y==0){
                break;
            }
            else{
                y=(x.length())/p;
                p++;
            }
        }
        return str1.substr(0,y);
    }
};
