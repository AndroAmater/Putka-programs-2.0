//
//  for.c
//  Hello World
//
//  Created by Andrej Fidel on 30/05/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>

int main(){
    int a=0, b=1, c=0;
    scanf("%d", &a);
    for (; b<=a; b++) {
        printf("#%d\n", b);
        c+=b;
    }
    printf("Seštevek = %d\n", c);
    return 0;
}