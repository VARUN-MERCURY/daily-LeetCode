// Using Boyer-Moore Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int DN= nums[0];
        int count=1;

        for(int i=1 ;i<nums.size()  ; i++){
            if(DN==nums[i]){
                count++;
            }
            else{
                count--;
            }
            if(count==0){
                DN=nums[i];
                count++;
            }

        }
        return DN;
        
    }
};