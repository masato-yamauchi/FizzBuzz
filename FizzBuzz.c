/*
Author: 山内 雅斗(Masato Yamauchi)
Date:   2015/09/27
*/

#include <stdio.h>

void fizzBuzz00(int i){
    if(i > 1) fizzBuzz00(i-1);
    if(i%15 == 0){
        printf("FizzBuzz\n");
    }
    else if(i%5 == 0){
        printf("Buzz\n");
    }
    else if(i%3 == 0){
        printf("Fizz\n");
    }
    else{
        printf("%d\n", i);
    }
}

int main(){
    fizzBuzz00(100);
    return 0;
}
