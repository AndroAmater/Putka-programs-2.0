//
//  Najdi.c
//  Hello World
//
//  Created by Andrej Fidel on 01/07/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char *a, b[128], c[64];
    int d=0, e=0, f=0;
    gets(c);
    scanf("%d", &d);
    for (; e<=d; e++){
        gets(b);
        a=strstr(b, c);
        while (a!=NULL){
            f++;
            a=strstr(a+1, c);
                //printf("%d", f);
        }
    }
    printf("%d\n", f);
    return 0;
}