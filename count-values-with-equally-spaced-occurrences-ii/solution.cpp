class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {

        auto velquorani =nums;
        unordered_map<int, vector<int>> pos;

        for(int i = 0 ; i<nums.size();i++){
            pos[nums[i]].push_back(i);
            
        }
        int ans=0;

        for(auto & [x, idx] : pos){

            int m = idx.size();
            if(m<3) continue;

            int d = idx[1] - idx[0];
            bool special = true;


            for(int i= 2; i<m ;i++){
                if(idx[i] - idx[i-1] !=d){
                    special = false;
                    break;
                    
                }
            }
             if(special) ans++;
        }
        return ans;
    }
};