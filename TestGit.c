//
//  main.c
//  TheCode
//
//  Created by Nien-Tai Ho on 2015/7/5.
//  Copyright (c) 2015年 Nien-Tai Ho. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <stdbool.h>

int clean_stdin()
{
    while (getchar()!='\n');
    return 1;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int min = 0;
    int max = 1000;
    int guess;
    srand((unsigned)time(NULL));
    int answer = (rand()%1000)+1;
    do {
        printf("猜%d-%d的數字\n",min,max);
        printf("Now the range is: %d-%d\n" ,min,max);
        printf("Guess a number:");
        scanf("%d",&guess);
        clean_stdin();
        if(guess<answer && guess>min){
            min = guess;
        }
        else if(guess>answer && guess<max){
            max = guess;
        }
        
        
    
    } while (guess!=answer);


        printf("You got the number!\n");
    
    return 0;
}
