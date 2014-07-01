//
//  if.c
//  Hello World
//
//  Created by Andrej Fidel on 23/05/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>

int deljivo()
{
    int a;
    scanf("%d", &a);
    if (a%7==0) printf("%d Je deljivo s 7\n", a);
    else printf("%d Ni deljivo s 7\n", a);
    return 0;
}