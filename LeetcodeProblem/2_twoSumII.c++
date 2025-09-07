#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                return {left + 1, right + 1}; // 1-based index (LeetCode format)
            }
            if (sum > target) {
                right--;
            } else {
                left++;
            }
        }
        return {-1, -1};
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    // Input format:
    // n
    // arr[0] arr[1] ... arr[n-1]   (sorted array)
    // target
    int n, target;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) cin >> numbers[i];
    cin >> target;

    vector<int> ans = sol.twoSum(numbers, target);

    cout << ans[0] << " " << ans[1] << "\n";

    return 0;  
}


// 5
// 2 7 11 15 20
// 9
