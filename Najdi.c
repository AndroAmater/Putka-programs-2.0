//
//  Najdi.c
//  Hello World
//
//  Created by Andrej Fidel on 01/07/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//
<<<<<<< HEAD
=======
//http://www.putka.si/tasks/za_vajo/jajca1/najdi
//
>>>>>>> master

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

<<<<<<< HEAD
int main(){
    char *a, b[128], c[64];
    int d=0, e=0, f=0;
    gets(c);
    scanf("%d", &d);
    for (; e<=d; e++){
=======
int najdi(){
    char *a, b[128], c[64], buf[128];
    int d=0, e=0, f=0;
    printf("Vnesi iskano besedo oziroma del besede.\n");
    gets(c);
    printf("V koliko stavkih boš iskal?\n");
    gets(buf);
    sscanf(buf, "%d", &d);
    for (; e<=d; e++){
        printf("Vnesi %d. stavek:\n", e+1);
>>>>>>> master
        gets(b);
        a=strstr(b, c);
        while (a!=NULL){
            f++;
            a=strstr(a+1, c);
<<<<<<< HEAD
                //printf("%d", f);
        }
    }
    printf("%d\n", f);
=======
        }
    }
    printf("Najdenih je bilo %d besed \"%s\".\n", f, c);
>>>>>>> master
    return 0;
}