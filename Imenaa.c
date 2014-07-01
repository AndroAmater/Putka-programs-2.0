//
//  Imenaa.c
//  Hello World
//
//  Created by Andrej Fidel on 01/07/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//
//  http://www.putka.si/tasks/za_vajo/jajca2/imena
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int imenaa(){
    char b[128];
    int a=0, d=0;
    printf("Vpiši število imen ki jih želiš vnesti.\n");
    gets(b);
    sscanf(b, "%d", &d);
        //printf("Vpiši spol in ime ločena s presledkom in program ti bo povedal če si imel prav. (npr.: m Miha)\n");
    for (; a<=d; a++){
        printf("Vnesi %d. ime\n", a);
        gets(b);
        switch (b[0]) {
            case 'z':
                if (b[strlen(b)-1]=='a'){
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
        }
    }
    return 0;
}