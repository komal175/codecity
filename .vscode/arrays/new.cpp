#include <bits/stdc++.h>
using namespace std;

pair<int, int> twosum(int n, vector<int>& nums, int target) {
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int a = nums[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end()) {
            return {mpp[more], i};
        }
        mpp[a] = i;
    }
    return {-1, -1};
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;

    pair<int, int> result = twosum(n, nums, target);
    if (result.first == -1) {
        cout << "No valid pair found." << endl;
    } else {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
