class Solution {
public:
    int minSwaps(string s) {
       int open=0;
        for (char ch : s) {
            if (ch == '[') {
               open++;
            } else if (open>0) {
                open--;
            }
        }
        return (open + 1) / 2;
    }
};