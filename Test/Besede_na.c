//
//  Besede_na.c
//  Hello World
//
//  Created by Andrej Fidel on 01/07/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//
//http://www.putka.si/tasks/za_vajo/jajca2/stevilo-besed-na
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int besedeNa(){
    char a[2], b[256], *c;
    int f=0;
    printf("Vnesi črko in program ti bo koliko besed v tvojem savku, se začne s to črko.\n");
    gets(a);
    printf("Vnesi svoj stavek.\n");
    gets(b);
    c=strtok(b, " ");
    while (c!=NULL) {
        if (c[0]==a[0]){
            f++;
        }
        c=strtok(NULL, " ");
    }
    if (f>0){
        printf("V tvojem stavku je %d besed, ki se začnejo s črko %s.\n", f, a);
    }
    else if (f==0){
        printf("Nobene besede ni na %s", a);
    }
    return 0;
}