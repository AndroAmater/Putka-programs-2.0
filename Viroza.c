//
//  Viroza.c
//  Hello World
//
//  Created by Andrej Fidel on 01/07/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>

int main(){
    int a=0, b=0, c=0, d=0, z=0, p=0;
    scanf("%d", &b);
    for (; a<b; a++) {
        scanf("%d", &c);
        switch (c) {
            case 0:
                z++;
                break;
            case 1:
                p++;
                break;
        }
    }
    d=b/2;
    if (z>=d){
        printf("%d 0 ", d);
        z-=d;
        printf("%d %d\n", z, p);
    }
    else if (z<d){
        printf("%d %d ", z, (d-z));
        p-=(d-z);
        printf("0 %d\n", p);
    }
    return 0;
}