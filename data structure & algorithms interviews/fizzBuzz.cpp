#include <iostream>

using namespace std;

void fizzBuzz(int num){
    for(int i = 1; i < num; i++){
        if(i % 3 == 0 && i % 5 == 0 ){
            cout<<"fizzBuzz"<<endl;
        }
        else if(i % 3 == 0){
            cout<<"fizz"<<endl;
        }
        else if(i % 5 == 0){
            cout<<"Buzz"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}

int main(){

    fizzBuzz(100);


    return 0;
}