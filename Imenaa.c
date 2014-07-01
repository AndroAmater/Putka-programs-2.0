//
//  Imenaa.c
//  Hello World
//
//  Created by Andrej Fidel on 01/07/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//
<<<<<<< HEAD
=======
//  http://www.putka.si/tasks/za_vajo/jajca2/imena
//
>>>>>>> master

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

<<<<<<< HEAD
int main(){
    char b[128];
    int a=0, d=0;
    scanf("%d", &d);
    for (; a<=d; a++){
=======
int imenaa(){
    char b[128];
    int a=0, d=0;
    printf("Vpiši število imen ki jih želiš vnesti.\n");
    gets(b);
    sscanf(b, "%d", &d);
        //printf("Vpiši spol in ime ločena s presledkom in program ti bo povedal če si imel prav. (npr.: m Miha)\n");
    for (; a<=d; a++){
        printf("Vnesi %d. ime\n", a);
>>>>>>> master
        gets(b);
        switch (b[0]) {
            case 'z':
                if (b[strlen(b)-1]=='a'){
<<<<<<< HEAD
                    printf("pravilno\n");
                }
                else if (b[strlen(b)-1!='a']){
                    printf("narobe\n");
                }
                break;
            case 'm':
                if (b[strlen(b)-1]!='a'){
                    printf("pravilno\n");
                }
                else if (b[strlen(b)-1]=='a'){
                    printf("narobe\n");
                }
                break;
=======
                    printf("pravilno\n\n");
                    break;
                }
                else if (b[strlen(b)-1!='a']){
                    printf("narobe\n\n");
                    break;
                }
            case 'm':
                if (b[strlen(b)-1]!='a'){
                    printf("Pravilno!\n\n");
                    break;
                }
                else if (b[strlen(b)-1]=='a'){
                    printf("Narobe!\n\n");
                    break;
                }
                break;
            default:
                printf("Vnos neprevilen\n\n");
                break;
>>>>>>> master
        }
    }
    return 0;
}