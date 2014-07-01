//
//  Besede_na.c
//  Hello World
//
//  Created by Andrej Fidel on 01/07/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//
<<<<<<< HEAD
=======
//http://www.putka.si/tasks/za_vajo/jajca2/stevilo-besed-na
//
>>>>>>> master

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

<<<<<<< HEAD
int main(){
    char a[2], b[256], *c;
    int f=0;
    gets(a);
=======
int besedeNa(){
    char a[2], b[256], *c;
    int f=0;
    printf("Vnesi črko in program ti bo koliko besed v tvojem savku, se začne s to črko.\n");
    gets(a);
    printf("Vnesi svoj stavek.\n");
>>>>>>> master
    gets(b);
    c=strtok(b, " ");
    while (c!=NULL) {
        if (c[0]==a[0]){
            f++;
        }
        c=strtok(NULL, " ");
    }
    if (f>0){
<<<<<<< HEAD
        printf("%d", f);
=======
        printf("V tvojem stavku je %d besed, ki se začnejo s črko %s.\n", f, a);
>>>>>>> master
    }
    else if (f==0){
        printf("Nobene besede ni na %s", a);
    }
    return 0;
}