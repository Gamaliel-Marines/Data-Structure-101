#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <list>
#include <vector>

using namespace std;

int main(){
    map<string,list<string>> superheroes;
    unordered_map<int,list<string>> heros;

    list<string> capAmerica {"shield", "will", "strength", "speed", "iq"};
    list<string> batman {"cool car", "rich", "strength", "good looking fellow", "iq"};
    list<string> skywalker {"light saber", "force choke", "chosen one", "hot", "not highgroung", "hates sand"};

    superheroes.insert(pair<string,list<string>>("Cap", capAmerica));
    superheroes.insert(pair<string,list<string>>("Batman", batman));
    superheroes.insert(pair<string,list<string>>("Anakin", skywalker));

    heros.insert(pair<int,list<string>>(1, capAmerica));
    heros.insert(pair<int,list<string>>(5, batman));
    heros.insert(pair<int,list<string>>(4, skywalker));

    for(auto pair: superheroes){

        cout<<pair.first<<" - ";
        for(auto qualities: pair.second){
            cout<<qualities<<" , ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    for (auto pair: heros){
        cout<<pair.first<<" - ";
        for(auto qualitires: pair.second){
            cout<<qualitires<<" , ";
        }
        cout<<endl;
    }
    
}