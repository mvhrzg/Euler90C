/* 
 * File:   Euler90.cpp
 * Author: M. Herzog
 *
 * Created on February 16, 2015, 3:24 PM
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <array>
#include <string.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int size = 10;
    int faces[6];
    std::array<std::array<int, 9>, 2> digits = {{{0, 1, 2, 3, 4, 5, 6, 8, 9}, {0, 1, 2, 3, 4, 5, 6, 8, 9}}};
    int tens;
    int ones;
    char onesC;
    char tensC;
    char valid[100] = "01, 04, 09, 16, 25, 36, 49, 64, 81";

    int count = 0;
    string numbers = "";
    
    
    for(int n = 0; n < 9; n++){
        for(int m = 0; m < 1; m++){
            for(int j = 0; j < 9; j++){
                for(int i = 1; i < 2; i++){
                    tens = digits[i][j];
                    ones = digits[m][n];
                    tensC = (char)(((int)'0') + tens);
                    onesC = (char)(((int)'0') + ones);
                    numbers += (printf("%c%c ", onesC, tensC));
                }//for i
            }//for j
        }//for m
    }//for n
    
    
    for(int i = 0; numbers[i] != '\0'; i++){
        if(numbers.find(valid[i])){
            count++;
        }
    }
    cout << endl;
    
    printf("there are %d possible combinations", count);
    return 0;
}