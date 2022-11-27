//
// Created by Moshe Nahshon on 23/11/2022.
//
#include "my_mat.h"
int main(){
    //  functions
    char function;
    start:
    scanf(" %c",&function);
    switch (function) {
        case 'A':
            functionA();
            goto start;
        case 'B':
            functionB();
            goto start;

        case 'C':
            functionC();
            goto start;
        case 'D':
            break;

        default:
            printf("Bad letter");
    }


    return 0;
}