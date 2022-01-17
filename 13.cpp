// Decode the string


class Solution{
public:
    string decodedString(string s){
        // code here
        string ans="";
        stack<string> st;
        string str1="",str2="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){
                str1+=s[i];
                if(str2==""){

                }
                else{
                    st.push(str2);
                    str2="";
                }
            }
            else if(s[i]=='['){
                st.push(str1);
                str1="";
                str1+='[';
                st.push(str1);
                str1="";
            }
            else if(s[i]>='a' && s[i]<='z'){
                str2+=s[i];
            }
            else if(s[i]==']' && st.size()>3){
                if(str2==""){
                    string p=st.top();
                    p+=str2;
                    str2="";
                    st.pop();
                    st.pop();
                    string x=st.top();
                    st.pop();
                    int n=0;
                    for(int j=0;j<x.length();j++){
                        n=n*10 + (x[j]-'0');
                    }
                    string y="";
                    for(int j=0;j<n;j++){
                         y+=p;
                    }
                    st.push(y);
                }
                else{
                st.pop();
                string x=st.top();
                st.pop();
                int n=0;
                for(int j=0;j<x.length();j++){
                    n=n*10 + (x[j]-'0');
                }
                string y="";
                for(int j=0;j<n;j++){
                    y+=str2;
                }
                str2="";
                while(!st.empty() && st.top()!="["){
                    y=st.top()+y;
                    st.pop();
                }
                st.push(y);
                }
            }
            else if(s[i]==']' && st.size()==3){
                string p=st.top();
                p+=str2;
                str2="";
                st.pop();
                st.pop();
                string x=st.top();
                st.pop();
                int n=0;
                for(int j=0;j<x.length();j++){
                    n=n*10 + (x[j]-'0');
                }
                string y="";
                for(int j=0;j<n;j++){
                    y+=p;
                }
                ans+=y;
            }
            else if(s[i]==']' && st.size()==2){
                st.pop();
                string x=st.top();
                st.pop();
                int n=0;
                for(int j=0;j<x.length();j++){
                    n=n*10 + (x[j]-'0');
                }
                string y="";
                for(int j=0;j<n;j++){
                    y+=str2;
                }
                ans+=y;
            }
        }
        return ans;
    }
};
