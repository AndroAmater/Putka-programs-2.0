//
//  Test.c
//  Hello World
//
//  Created by Andrej Fidel on 30/06/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a=0;
    printf("Vpiši število! ");
    scanf("%d", &a);
    if (a>0)
        printf("Število je večje od nič.\n");
    return 0;
}