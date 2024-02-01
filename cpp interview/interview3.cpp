#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPalindrome(vector<string> s){
    int size = s.size();

    vector<string> s1(s);
    vector<string> s2;

    for(int j = size -1; j > -1; j--){
        s2.push_back(s[j]);
    }

    return s1 == s2;

}

int main() {
    // Example usage
    vector<string> testVector = {"apple", "banana", "orange", "banana", "apple"};
    bool result = isPalindrome(testVector);

    if (result) {
        cout << "The vector is a palindrome." << endl;
    } else {
        cout << "The vector is not a palindrome." << endl;
    }

    return 0;
}