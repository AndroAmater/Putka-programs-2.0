//
//  trgovina.c
//  Hello World
//
//  Created by Andrej Fidel on 30/05/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>

int main(){
    int a=0, b=0;
    printf("How much cash do u have? ");
    scanf("%d", &a);
    printf("\n");
    while (a!=0){
        printf("How much cash does this swag cost? ");
        scanf("%d", &b);
        if (a-b >= 0){
            a-=b;
            printf("Use it wisely!\n%d$ remaining.\n\n", a);
        }
        else if (a-b < 0){
            printf("You don'thave enough money!\n%d$ remaining.\n\n", a);
        }
    }
    printf("Welp, you're broke now.\n");
    return 0;
}