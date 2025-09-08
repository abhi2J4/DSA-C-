#include <bits/stdc++.h>
using namespace std;
class Solution{
    public : 
    int lengthLongestSubstring(string s){
        int ans = 0; 
        int j = -1;
        vector<int> lastSeen(128,-1);

        for(int i = 0; i < s.length();++i){
            j = max(j, lastSeen[s[i]]);
            ans = max(ans, i -j);
            lastSeen[s[i]] = i;
        }
        return ans;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    string s;
    cin >> s;

    cout << sol.lengthLongestSubstring(s)<< "\n";
    return 0;
}


// input = abcabcbb  
// Output =   3
// input = bbbb 
// Output =   1
// input = pwwkew 
// Output =   3
