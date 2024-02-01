#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int missingNumber(vector<int>& nums){
    int size = nums.size();
    sort(nums.begin(), nums.end());
    int x = 0;

    if(size < 1){
        return -1;
    }

    for(int i = 0; i < size; i++){
        if(nums[i+1] != (nums[i] + 1) && i < size-1){
            x = nums[i] + 1;
        }
    }

    return x;
    
}

int main(){

    vector<int> nums = {2,1,4,5};

    cout<<missingNumber(nums);

    return 0;

}