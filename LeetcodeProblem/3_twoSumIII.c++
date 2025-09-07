#include <bits/stdc++.h>
using namespace std;

class TwoSum {
public:
    void add(int number) {
        ++count[number];
    }

    bool find(int value) {
        for (const auto &p : count) {
            int key = p.first;
            int freq = p.second;
            int remain = value - key;

            if (key == remain && freq > 1) {
                return true;
            }
            if (key != remain && count.find(remain) != count.end()) {
                return true;
            }
        }
        return false;
    }

private:
    unordered_map<int, int> count;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    TwoSum ts;

    ts.add(1);
    ts.add(3);
    ts.add(5);

    cout << (ts.find(4) ? "true" : "false") << "\n"; // true (1+3)
    cout << (ts.find(7) ? "true" : "false") << "\n"; // false

    return 0;
}
