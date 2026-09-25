class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int s1 = word1.length();
        int s2 = word2.length();

        int i = 0;
        int j = 0;

        string result = "";

        while (i < s1 || j < s2) {
            if (i < s1) {
                result.push_back(word1[i]);
                i++;
            }

            if (j < s2) {
                result.push_back(word2[j]);
                j++;
            }
        }

        return result;
    }
};