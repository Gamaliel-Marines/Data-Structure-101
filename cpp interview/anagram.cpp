#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;
/*
first approach
1. check the size of the strings
    a. if not equal return false
    b. if equal continue
2. sort the strings --> O(nlogn)
3. compare string s[i] with string t[i]
    a. if they are not equal return false
*/

bool isAnagram(std::string s, std::string t) {
    if(s.size() != t.size()) return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for(int i = 0; i < s.size(); i++){
        if(s[i] != t[i]){
            return false;
        }
    }

    return true;
    
}

/*
second approach
1. check the size of the strings
    a. if not equal return false
    b. if equal continue
2. unorder_map
3. compare maps
    a. if they are not equal return false
*/


bool isAnagram2(std::string s, std::string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char,int> mps, mpt;

        for (int i = 0; i <s.size(); i++){
            mps[s[i]]++;
            mpt[t[i]]++;
        }

        return mps == mpt;
    }