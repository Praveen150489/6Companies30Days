class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        int n=string_list.size();
        vector<vector<string>> ans;
        map<string,vector<string>> mp;
        for(int i=0;i<n;i++){
            string x=string_list[i];
            sort(x.begin(),x.end());
            mp[x].push_back(string_list[i]);
        }
        set<string> s;
        for(int i=0;i<n;i++){
            string x=string_list[i];
            sort(x.begin(),x.end());
            if(s.find(x)==s.end()){
                ans.push_back(mp[x]);
                s.insert(x);
            }
        }
        return ans;
    }
};
