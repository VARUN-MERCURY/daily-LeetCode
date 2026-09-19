class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        while (s.length() > 0) {

            char temp = s[0];
            bool found = false;

            for (int j = 0; j < t.length(); j++) {

                if (temp == t[j]) {

                    s.erase(0, 1);
                    t.erase(j, 1);

                    found = true;
                    break;
                }
            }

            if (!found) {
                return false;
            }
        }

        return true;
    }
};