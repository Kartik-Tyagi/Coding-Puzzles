class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        string result;
        int rowCounter = 1;
        while(rowCounter <= numRows) {
            int increment1 = 2*numRows - 2*rowCounter;
            int increment2 = 2*rowCounter - 2;
            bool change = true;
            if (increment1 == 0) {
                change = false;
            }
            int i = rowCounter - 1;
            while (i < s.length()) {
                result.push_back(s[i]);
                if (change) {
                    i += increment1;
                    if (increment2 != 0) {
                        change = false;
                    }
                } else {
                    i += increment2;
                    if (increment1 != 0) {
                        change = true;
                    }
                }
            }
            rowCounter++;
        }
        return result;
    }
};
