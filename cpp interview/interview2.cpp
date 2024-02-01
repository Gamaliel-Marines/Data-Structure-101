#include <iostream>
#include <vector>

using namespace std;

int sumaNumPares(vector<int>& nums){
    int sum = 0;
    int size = nums.size();

    if(size < 1){
        return -1;
    }

    for(int i = 0; i < size; i++){
        if(nums[i] % 2 == 0){
            sum = sum + nums[i];
        }
    }
    return sum;
}

int main(){

    vector<int> nums = {1,2,3,4,5,6,7,8,9,0,-12,2,2,4};
    int res = sumaNumPares(nums);
    cout<<res;
    return 0;
}