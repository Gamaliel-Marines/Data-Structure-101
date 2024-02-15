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

string findUnpaired(vector<string>& nums) {
    unordered_set<string> s;
    for (string i : nums) {
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

    vector<string> v2 = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "a", "b", "c", "d", "e", "f", "g", "h", "i"};
    cout << findUnpaired(v2) << endl;
    return 0;
}
