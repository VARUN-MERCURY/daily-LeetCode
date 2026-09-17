class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int dn=0;
         
         for(int i = 0 ; i< nums.size() ; i++){

            dn=dn^nums[i];
             

         }
         return dn;
    }
    
};