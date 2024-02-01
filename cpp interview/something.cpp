#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

string reverseWords(const string& input) {
    // Tokenization: Break the input string into individual words
    stringstream ss(input);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    // Reversal: Reverse the order of the words
    reverse(words.begin(), words.end());

    // Concatenation: Combine the reversed words into a new string
    string reversedString;
    for (const string& w : words) {
        reversedString += w + " ";
    }

    // Remove the trailing space, if any
    if (!reversedString.empty()) {
        reversedString.pop_back();
    }

    return reversedString;
}

int main() {
    // Example usage
    string inputString = "Hello World";
    string result = reverseWords(inputString);

    cout << "Original String: " << inputString << endl;
    cout << "Reversed Words: " << result << endl;

    return 0;
}
