#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> bubbleSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i +1; j < n; j++) {
            if (nums[j] < nums[i]) {
                swap(nums[j], nums[i]);
            }
        }
    }
    return nums;
}

int main() {
    vector<int> v = {1, 6, 3, 2, 8};
    cout<<"Start the function"<<endl;
    vector<int> sorted = bubbleSort(v);
    for (auto i : sorted) {
        cout << i << "\t";
    }

    cout << endl;
    return 0;
}