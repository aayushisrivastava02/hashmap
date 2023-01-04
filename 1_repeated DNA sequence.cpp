class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
      
       vector<string>v;
        if(s.size()<=10){
           return v;
       }
        unordered_map<string,int>m;
        for(int i=0;i<s.size()-9;i++){
           string h=s.substr(i,10);
            m[h]++;
          for(auto i:m){
            if(i.second>1){
                v.push_back(i.first);
            }
        }
        return v;
    }
};
