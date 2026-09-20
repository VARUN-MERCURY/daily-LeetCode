class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> p;
        vector<int> n;

        vector<int> pn(nums.size());

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] >= 0) {
                p.push_back(nums[i]);
            } else {
                n.push_back(nums[i]);
            }
        }

        int count = 0;
        int count2 = 0;

        for (int i = 0; i < pn.size(); i++) {

            if (i % 2 == 0) {

                pn[i] = p[count];
                count++;
            } else {

                pn[i] = n[count2];
                count2++;
            }
        }

        return pn;
    }
};