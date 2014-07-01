//
//  main.c
//  Hello World
//
//  Created by Andrej Fidel on 23/05/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a,b,a+b);
    printf("%d-%d=%d\n", a,b,a-b);
    printf("%d*%d=%d\n", a,b,a*b);
    printf("%d/%d=%d\n", a,b,a/b);
    printf("%d%%%d=%d\n", a,b,a%b);
    //printf("Hello, World!\n");
    return 0;
}

