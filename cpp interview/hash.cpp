#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void removePunctuation(string& word) {
    word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
}

void toLowerCase(string& word) {
    transform(word.begin(), word.end(), word.begin(), ::tolower);
}

vector<pair<string, int>> printWordFreq(const string& s) {
    map<string, int> mp;
    vector<pair<string, int>> wrdsFrq;

    string word = "";
    for (auto it : s) {
        if (it == ' ') {
            removePunctuation(word);
            toLowerCase(word);
            mp[word]++;
            word = "";
        } else {
            word = word + it;
        }
    }

    if (!word.empty()) {
        removePunctuation(word);
        toLowerCase(word);
        mp[word]++;
    }

    for (auto pair : mp) {
        wrdsFrq.push_back(pair);
    }

    return wrdsFrq;
}

void printWordFreqPairs(const vector<pair<string, int>>& wordFreq) {
    for (auto pair : wordFreq) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    string s = "hello hello hello hi hi my name is gama gama is my name";
    vector<pair<string, int>> wordFreq = printWordFreq(s);

    printWordFreqPairs(wordFreq);

    return 0;
}
