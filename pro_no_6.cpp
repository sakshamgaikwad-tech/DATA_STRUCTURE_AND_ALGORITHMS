// 6. Zigzag Conversion
// The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

// P   A   H   N
// A P L S I I G
// Y   I   R
// And then read line by line: "PAHNAPLSIIGYIR"

// Write the code that will take a string and make this conversion given a number of rows:

// string convert(string s, int numRows);
 

// Example 1:

// Input: s = "PAYPALISHIRING", numRows = 3
// Output: "PAHNAPLSIIGYIR"
// Example 2:

// Input: s = "PAYPALISHIRING", numRows = 4
// Output: "PINALSIGYAHRPI"
// Explanation:
// P     I    N
// A   L S  I G
// Y A   H R
// P     I
// Example 3:

// Input: s = "A", numRows = 1

// Output: "A"


// solution:

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows)
            return s;

        vector<string> lines(numRows);
        int row = 0;
        bool down = false;

        for (char ch : s) {
            lines[row] += ch;

            if (row == 0 || row == numRows - 1)
                down = !down;

            row += down ? 1 : -1;
        }

        string result;
        for (string line : lines)
            result += line;

        return result;
    }
};

int main() {
    Solution obj;

    string s = "PAYPALISHIRING";
    int numRows = 3;

    string result = obj.convert(s, numRows);

    cout << "Converted String: " << result << endl;

    return 0;
}
