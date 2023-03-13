#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//新增内容

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n; // （防止 k 大于数组），修改内容

    // 反转整个数组
    reverse(nums.begin(), nums.end());

    // 反转前 k 个元素
    reverse(nums.begin(), nums.begin() + k);

    // 反转后面的元素
    reverse(nums.begin() + k, nums.end());
}

int main() {
int xc=100;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}

