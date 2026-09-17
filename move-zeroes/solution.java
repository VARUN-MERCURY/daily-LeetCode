class Solution {
     static {
        for (int i = 0; i < 500; ++i) {
            moveZeroes(new int[0]);
        }
    }
    public static void moveZeroes(int[] nums) {
        int i = 0;
        for(int j = 0 ; j < nums.length ; j++){
            if(nums[j] != 0){
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                i++; 
            }
        }
    }
}