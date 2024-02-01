#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(const string& s){

    vector<char> s1;
    vector<char> s2;

    for(char c: s){
        s1.push_back(c);
        s2.insert(s2.begin(), c);
    }

    return s1 == s2;

}

int main() {
    string testString = "radar";
    bool result = isPalindrome(testString);

    if (result) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
