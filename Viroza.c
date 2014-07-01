//
//  Viroza.c
//  Hello World
//
//  Created by Andrej Fidel on 01/07/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//
<<<<<<< HEAD

#include <stdio.h>

int main(){
    int a=0, b=0, c=0, d=0, z=0, p=0;
    scanf("%d", &b);
    for (; a<b; a++) {
=======
//http://www.putka.si/tasks/za_vajo/jajca2/viroza
//

#include <stdio.h>

int viroza(){
    int a=0, b=0, c=0, d=0, z=0, p=0;
    printf("Koliko kokoši je v kurniku?\n");
    for (scanf("%d", &b); b%2!=0; scanf("%d", &b)) {
        printf("Prosim unesi SODO ševilo!\n");
    }
    printf("Vpišite če je kokš zdrava(0) ali bolana(1) in program jih bo bo razporedil po kurnikih.\n");
    for (; a<b; a++) {
        printf("%d. kokoš:  ", a+1);
>>>>>>> master
        scanf("%d", &c);
        switch (c) {
            case 0:
                z++;
                break;
            case 1:
                p++;
                break;
<<<<<<< HEAD
        }
    }
    d=b/2;
    if (z>=d){
        printf("%d 0 ", d);
        z-=d;
        printf("%d %d\n", z, p);
    }
    else if (z<d){
        printf("%d %d ", z, (d-z));
        p-=(d-z);
        printf("0 %d\n", p);
=======
            default:
                printf("Vnos nepravilen!\n");
                a-=1;
                break;
        }
    }
    d=b/2;
    printf("\n");
    if (z>=d){
        printf("Zdrav kurnik: %d zdravih in 0 prehlajenih kokoši.\n", d);
        z-=d;
        printf("Prehlajen kurnik: %d zdravih in %d prehlajenih kokoši.\n", z, p);
    }
    else if (z<d){
        printf("Zdrav kurnik: %d zdravih in %d prehlajenih kokoši.\n", z, (d-z));
        p-=(d-z);
        printf("Prehlajen kurnik: 0 zdravih in %d prehlajenih kokoši.\n", p);
>>>>>>> master
    }
    return 0;
}