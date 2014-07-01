//
//  Sestevek.c
//  Hello World
//
//  Created by Andrej Fidel on 30/06/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a=0, b=0;
    for (; a<=10; a++) {
        b+=a;
    }
    printf("Vsota prvih 10 števil je %d\n", b);
    return 0;
}