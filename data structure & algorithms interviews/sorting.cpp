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

vector<int> insertionSort(vector<int>& nums){
    int n = nums.size();
    for(int i = 1; i < n; i++){
        int j = i-1;
        int temp = nums[i];
        while(j >= 0 && temp < nums[j]){
            nums[j+1] = nums[j];    
            j--;
        }
        nums[j+1] = temp;
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

    vector<int> v2 = {1, -6, 38, 22, 18, 55, 67, -12, 3, 1, 4, 6};
    vector<int> sorted2 = insertionSort(v2);
    for(auto i : sorted2){
        cout << i << "\t";

    }

    cout << endl;
    return 0;
}