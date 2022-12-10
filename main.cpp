#include <iostream>
#include "lib.h"
using namespace std;

int main(){
    int size;
    cin >> size;
    float array[size];
    for (int i=0; i<size; i++){
        cin >> array[i];
    }
    float max;
    max = max_value(array, size);
    cout << max;
    return 0;
}
