#include <iostream>
#include <vector>


using namespace std;

int divide(vector<int>& nums, int start, int end){
    int pivot = nums[end];
    int index = start;

    for(int i = start; i < end; i++){
        if(nums[i] < pivot){
            swap(nums[i], nums[index]);
            index++;
        }
    }

    swap(nums[index], nums[end]);

    return index;
}

void quickSort(vector<int>& nums, int start, int end){

    if(start<end){
        int d = divide(nums, start, end);
        quickSort(nums, start, (d-1));
        quickSort(nums, (d+1), end);
    }
}



int main(){
    vector<int> nums = {1,2,32,42,25,36,64,57,64,75,68};
    int start = 0;
    int end = (nums.size()-1);
    quickSort(nums, start, end);

    for(auto i: nums) cout<<i<<" \t";

    cout<<endl;


    return 0;
}