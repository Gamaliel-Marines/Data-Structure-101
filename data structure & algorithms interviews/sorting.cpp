#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortArray(vector<int>& nums){
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
    cout<<"The time cpomplexity of bubble sort is O(n^2)"<<endl;
    for(auto i:nums){
        cout<<i<<" ";
    }
}

int main() {
    vector<int> v = {1, 6, 3, 2, 8};
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout<<"Start the function"<<endl;
    sortArray(v);
    return 0;
}