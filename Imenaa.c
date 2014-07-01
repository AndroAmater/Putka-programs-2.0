//
//  Imenaa.c
//  Hello World
//
//  Created by Andrej Fidel on 01/07/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char b[128];
    int a=0, d=0;
    scanf("%d", &d);
    for (; a<=d; a++){
        gets(b);
        switch (b[0]) {
            case 'z':
                if (b[strlen(b)-1]=='a'){
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
        }
    }
    return 0;
}