class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i;

        for (i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                break;
            }
        }
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        return count;
    }
};