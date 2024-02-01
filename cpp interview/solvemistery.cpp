#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

void solveMistery(vector<string>& code, int key){
    int size = code.size();

    unordered_map<char,int> characters = {
        {'a', 1},
        {'b', 2},
        {'c', 3},
        {'d', 4},
        {'e', 5},
        {'f', 6},
        {'g', 7},
        {'h', 8},
        {'i', 9},
        {'j', 10},
        {'k', 11},
        {'l', 12},
        {'m', 13},
        {'n', 14},
        {'ñ', 15},
        {'o', 16},
        {'p', 17},
        {'q', 18},
        {'r', 19},
        {'s', 20},
        {'t', 21},
        {'u', 22},
        {'v', 23},
        {'w', 24},
        {'x', 25},
        {'y', 26},
        {'z', 27}
    };

    vector<char> newCode;

    for(int i = 0; i < size; i++){
        for(char c: code[i]){
            if(code[i] == characters.first && characters.second == key){
                newCode.push_back('0');
            }

        }

    }

    



}