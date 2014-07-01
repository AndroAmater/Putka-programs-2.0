//
//  File.c
//  Hello World
//
//  Created by Andrej Fidel on 01/07/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int poisciBes()
{
    char a[2], b[256], *c;
    gets(a);
    gets(b);
    c=strtok(b, " ");
    while (c!=NULL) {
        if (c[0]==a[0]){
            printf("%s\n", c);
        }
        c=strtok(NULL, " ");
    }
    return 0;
}