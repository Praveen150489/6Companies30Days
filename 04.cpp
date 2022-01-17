// Run Length Encoding Problem.
string encode(string src)
{
  //Your code here
    string s="";
    s+=src[0];
    int count=1;
    for(int i=1;i<src.length();i++){
        if(src[i]==src[i-1]){
            count++;
        }
        else{
            s+=to_string(count);
            count=1;
            s+=src[i];
        }
    }
    s+=to_string(count);
    return s;
}
