// You are given an array of strings words, where each string represents a word containing lowercase English letters.

// You are also given an integer array weights of length 26, where weights[i] represents the weight of the ith lowercase English letter.

// The weight of a word is defined as the sum of the weights of its characters.

// For each word, take its weight modulo 26 and map the result to a lowercase English letter using reverse alphabetical order (0 -> 'z', 1 -> 'y', ..., 25 -> 'a').

// Return a string formed by concatenating the mapped characters for all words in order.

 

// Example 1:

// Input: words = ["abcd","def","xyz"], weights = [5,3,12,14,1,2,3,2,10,6,6,9,7,8,7,10,8,9,6,9,9,8,3,7,7,2]

// Output: "rij"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res;
        int n = words.size();

        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = 0; j < words[i].size(); j++) {
                char ch = words[i][j];
                sum += weights[ch - 'a'];
            }

            int r = sum % 26;
            res += char('z' - r);
        }

        return res;
    }
};

int main() {
    Solution obj;

    vector<string> words = {"abc", "hello", "xyz"};

    vector<int> weights(26);
    for (int i = 0; i < 26; i++) {
        weights[i] = i + 1;  // a=1, b=2, ..., z=26
    }

    string result = obj.mapWordWeights(words, weights);

    cout << "Result: " << result << endl;

    return 0;
}
