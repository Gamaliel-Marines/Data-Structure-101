/*Entendido, aquí tienes la descripción del problema sin la solución:
 se espera que expliques tu enfoque antes de escribir el código 
 y que estés abierto a discutir posibles mejoras o cambios en tu implementación.*/


#include <iostream>
#include <vector>

using namespace std;

int_fast16_t encontrarMayorElemento(vector<int>& nums){
    int max = 0;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i]>max){
            max = nums[i];
        }
    }
    return max;
}

int main(){

    vector<int> nums = {1,2,3,4,5,6,7,8,9,11,-2};

    cout<<encontrarMayorElemento(nums);

    return 0;
}
