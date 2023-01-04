class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m;
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second>2||i.second==2){
                flag=true;
                break;
            }
            
        }
        if(flag==true)
        {
            return true;
        }else{
            return false;
        }    
        }

};
