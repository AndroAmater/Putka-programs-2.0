//
//  File.c
//  Hello World
//
//  Created by Andrej Fidel on 01/07/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//
<<<<<<< HEAD
=======
//http://www.putka.si/tasks/za_vajo/jajca1/izbor-besed
//
>>>>>>> master

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

<<<<<<< HEAD
int main()
{
    char a[2], b[256], *c;
    gets(a);
    gets(b);
    c=strtok(b, " ");
=======
int poisciBes()
{
    char a[2], b[256], *c;
    printf("Vnesi črko in program ti bo izpisal vse besede v tvojem savku, ki se začnejo s to črko.\n");
    gets(a);
    printf("Vnesi stavek.\n");
    gets(b);
    c=strtok(b, " ");
    printf("\n\nIzpis besed:\n");
>>>>>>> master
    while (c!=NULL) {
        if (c[0]==a[0]){
            printf("%s\n", c);
        }
        c=strtok(NULL, " ");
    }
    return 0;
}