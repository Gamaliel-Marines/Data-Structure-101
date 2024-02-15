#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>



using namespace std;

/*
We need a function that recieves a list of int
The list of int is composed by pair of numbers, every number has a pair
except for one, that number is the one we need to return
Special cases: 
* The list of int is empty
* The list of int has only one number
*/

int findUnpair(vector<int>& nums){
    int size = nums.size();
    
    //!Special cases!!!
    if(size < 1){
        cout<<"Empty list"<<endl;
        return -1;
    } else if(size == 1){
        return nums[0];
    } else{
        
        unordered_set<int> unPairST;

        for(auto n: nums){
            if(unPairST.find(n)!= unPairST.end()){
                unPairST.erase(n);
            }else{
                unPairST.insert(n);
            }
        }
        return *unPairST.begin();
    }
}

int main(){
    vector<int> nums = {1,1,2,2,3,3,4};
    int res = findUnpair(nums);
    cout<<"The unpair number is: "<<res<<"!!! \n";

    return 0;
}