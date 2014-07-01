//
//  Besede_na.c
//  Hello World
//
//  Created by Andrej Fidel on 01/07/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[2], b[256], *c;
    int f=0;
    gets(a);
    gets(b);
    c=strtok(b, " ");
    while (c!=NULL) {
        if (c[0]==a[0]){
            f++;
        }
        c=strtok(NULL, " ");
    }
    if (f>0){
        printf("%d", f);
    }
    else if (f==0){
        printf("Nobene besede ni na %s", a);
    }
    return 0;
}