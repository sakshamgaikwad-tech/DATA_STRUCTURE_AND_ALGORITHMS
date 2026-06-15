// problem 2161: 


// You are given a 0-indexed integer array nums and an integer pivot. Rearrange nums such that the following conditions are satisfied:

// Every element less than pivot appears before every element greater than pivot.
// Every element equal to pivot appears in between the elements less than and greater than pivot.
// The relative order of the elements less than pivot and the elements greater than pivot is maintained.
// More formally, consider every pi, pj where pi is the new position of the ith element and pj is the new position of the jth element. If i < j and both elements are smaller (or larger) than pivot, then pi < pj.
// Return nums after the rearrangement.



 #include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> l, e, g;

        for (int n : nums) {
            if (n < pivot) {
                l.push_back(n);
            }
            else if (n == pivot) {
                e.push_back(n);
            }
            else {
                g.push_back(n);
            }
        }

        vector<int> result;

        result.insert(result.end(), l.begin(), l.end());
        result.insert(result.end(), e.begin(), e.end());
        result.insert(result.end(), g.begin(), g.end());

        return result;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;

    vector<int> result = obj.pivotArray(nums, pivot);

    cout << "Result: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
