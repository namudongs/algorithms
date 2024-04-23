class Solution {
public:
    bool isPalindrome(int x) {
        string p = to_string(x);
        string rp;

        for (int i = p.length()-1; i>-1; i--) {
            rp.push_back(p[i]);
        }
        if (p.compare(rp) == 0) {
            return true;
        } else {
            return false;
        }
    }
};