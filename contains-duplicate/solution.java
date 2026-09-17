
// TC = O(n) SC = O(1)
// class Solution {
//     public boolean containsDuplicate(int[] nums) {
//             System.out.println(nums.length);
//         for ( int i = 0 ; i < nums.length ; i++ ){
//             for(int j   =i + 1 ; j < nums.length ; j++){
//                 if(nums[i] == nums[j]){
//                     return true;
//                 }
//             }
//         }

//         return false;
//     }
// }
// TC O(n) ans SC O(n)
// class Solution {
//     public boolean containsDuplicate(int[] nums) {
//         HashSet <Integer > set = new HashSet <>();
//         for(int x : nums){
//             if(set.contains(x)){
//                 return true;
//             }
//             set.add(x);
//         }
//        return false;
//     }
// }
// tc O(n log n) + O(n) = O(n log n) / sc = O(1)
// class Solution {
//     public boolean containsDuplicate(int[] nums) {
//         Arrays.sort(nums);
//         for(int i = 1 ; i < nums.length ; i++){
//             if(nums[i] == nums[i-1]){
//                 return true;
//             }
//         }
//         return false;
//     }
// }


// class Solution {
//     public boolean containsDuplicate(int[] nums) {
//         HashSet <Integer> set = new HashSet<>();
//         for(int x : nums){
//             set.add(x);
//         }

//         if(nums.length != set.size()){
//             return true;
//         }

//         return false;
//     }
// }

class Solution {
    public boolean containsDuplicate(int[] nums) {
         HashMap <Integer  , Integer > map = new HashMap<>();
         for(int x : nums){
             if(map.containsKey(x)){
                return true;
             }

             map.put(x,map.getOrDefault(x,0)+1);
         }

         return false;
         
    }
}