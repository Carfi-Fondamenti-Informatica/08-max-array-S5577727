#include "lib.h"

float max_value(float array[], int size){
    float max;
    max = array[0];
    for (int i=1; i<size; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
}
