class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the smaller array to optimize binary search
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int n1 = nums1.size();
        int n2 = nums2.size();
        int low = 0, high = n1;

        while (low <= high) {
            int partition1 = (low + high) / 2;
            int partition2 = (n1 + n2 + 1) / 2 - partition1;

            // Edge cases: handle empty left or right partitions using boundary values
            int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
            int minRight1 = (partition1 == n1) ? INT_MAX : nums1[partition1];

            int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
            int minRight2 = (partition2 == n2) ? INT_MAX : nums2[partition2];

            // Valid partition achieved
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                // If the total combined length is even
                if ((n1 + n2) % 2 == 0) {
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                } 
                // If the total combined length is odd
                else {
                    return max(maxLeft1, maxLeft2);
                }
            } 
            // We are too far right in nums1, shift left
            else if (maxLeft1 > minRight2) {
                high = partition1 - 1;
            } 
            // We are too far left in nums1, shift right
            else {
                low = partition1 + 1;
            }
        }

        return 0.0;
    }
};
