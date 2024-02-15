#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


int findUnpaired(vector<int>& nums) {
    unordered_set<int> s;
    for (int i : nums) {
        if (s.find(i) != s.end()) {
            s.erase(i);
        } else {
            s.insert(i);
        }
    }
    return *s.begin();
}



int main() {
    vector<int> v = {1, 6, 3, 2, 8, 3, 2, 1, 6};
    cout << findUnpaired(v) << endl;
    return 0;
}
