#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
1. if k < 1 throw error
2. sort array --> complexity of O(log n)
3. return nums[size_of_array-k] -->complexity O(1)


*/

int findKthLargest(std::vector<int>& nums, int k){
    if(k<1) throw runtime_error("K not valid");
    sort(nums.begin(), nums.end());
    
    return nums[nums.size()-k];
};

int findKthLargest2(std::vector<int>& nums, int k) {
    if (k < 1 || k > nums.size()) {
        return -1;
    }

    nth_element(nums.begin(), nums.begin() + nums.size() - k, nums.end());
    
    return nums[nums.size() - k];
}


int main(){


    vector <int> nums;
    nums = {3, 1, 4, 2, 7, 5, 6};
    int k = 3;

    int result = findKthLargest(nums, k);

    cout<<result;

}