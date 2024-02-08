#include<iostream>
#include <vector>
#include <unordered_map>


using namespace std;


bool containsDuplicate(vector<int>& nums) {
    if(nums.size() < 2){
        return false;
    }

    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size(); j++){
            if(nums[i] == nums[j]){
                return true;
            }
        }
    }

    return false;
    
}


bool mapDuplicate(vector<int>& nums){
    if(nums.size() < 2){
        return false;
    }

    unordered_map<int,int> mp;
    for(int i = 0; i < nums.size(); i ++){
        mp[nums[i]]++;
    }

    for(auto i: mp){
        if(i.second >= 2) return true;
    }

    return false;

}


int main(){



    return 0;
}