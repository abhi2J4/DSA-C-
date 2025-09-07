#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int num = 0, i = 0, sign = 1;  // default: +ve

        // 1. Skip leading spaces
        while (i < s.size() && s[i] == ' ')
            i++;

        // 2. Check sign
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '+') ? 1 : -1;
            i++;
        }

        // 3. Convert digits
        while (i < s.size() && isdigit(s[i])) {
            // check for overflow before multiplying
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7')) {
                return (sign == -1) ? INT_MIN : INT_MAX;
            }
            num = num * 10 + (s[i] - '0');
            i++;
        }

        return num * sign;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;

    string s;
    getline(cin, s);   // input a string (with spaces possible)

    cout << sol.myAtoi(s) << "\n";
    return 0;
}

// leetcode

ṇ
// class Solution {
// public:
//     int myAtoi(string s) {
//        int num = 0,i =0, sign = 1;//+ve
//        while(s[i] == ' '){
//         i++;
//        }
    
//     if(i < s.size() && (s[i] == '-' || s[i] == '+')){
//         sign = s[i] == '+' ? 1 : -1;
//         ++i;
//     }

//     while(i< s.size() && isdigit(s[i])){
//         if(num > INT_MAX/10 ||( num == INT_MAX/10 && s[i] > '7')){
//             return sign == -1 ? INT_MIN : INT_MAX;
//         }
//         num = num * 10 + (s[i] - '0');
//         ++i;
//     }
//     return num*sign;
//     }
// };