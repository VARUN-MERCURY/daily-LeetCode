class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> freq;
    
         for(int i=0 ; i<nums.size();i++){

          int num = nums[i];

          if(freq.find(num)==freq.end()){
            freq[num]=1;
          }
          else{
            freq[num]=freq[num]+1;
          }

         }

         for(unordered_map<int,int>::iterator it= freq.begin();
         it!=freq.end();
         it++) {

            int key = (*it).first;
            int value=(*it).second;

            if(value>nums.size()/2){
                return key;
            }
         }

         return -1;

      
    }
};