//
//  Programs.c
//  Hello World
//
//  Created by Andrej Fidel on 30/06/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void insf(char *insert, char *destination, int pos);
void delf(char *source, int from, int count);

    //Program igra ugibanja
int ugani()
{
    int a=((int)random())%100, b=0;
    printf("Ugani število! ");
    scanf("%d", &b);
    while (b!=a) {
        if (a < b) {
            printf("Previsoko!\n");
            scanf("%d", &b);
        }
        else if (a > b){
            printf("Prenizko!\n");
            scanf("%d", &b);
        }
    }
    printf("Bravo!");
    return 0;
}

    //Pascal insert funkcija (demonstracija)
int insert()
{
    char a[128] = "How are you?";
    printf("How are you? \nInserting 'Hey there! '\n");
    insf("Hey there! ", a, 0);
    printf("%s\n", a);
    return 0;
}

    //Pascal delete funkcija (demonstracija)
int delete()
{
    char a[128] = "Hey there! How are you?";
    int b=0;
    printf("Hey there! How are you?\n");
    printf("Deleting ' there'\n");
    b = (int)(strlen(a)-strlen(strstr(a, " there")));
    delf(a, b, 6);
    printf("%s\n", a);
    return 0;
}

    //Pascal insert funkcija
void insf(char *insert, char *destination, int pos)
{
    memmove(destination+pos+strlen(insert), destination+pos, strlen(insert)+1);
    memmove(destination+pos, insert, strlen(insert));
}

    //Pascal delete funkcija
void delf(char *source, int from, int count)
{
    //memmove(destination, source, count);
    memmove(source+from, source+from+count, strlen(source+from+count)+1);
}

    //Pascal copy funkcija (Demonstracija)
int copy()
{
    char a[255] = "Hey there! How are you?";
    char b[50];
    printf("Hey there! How are you?\nCopying 'There'\n");
    strncpy(b, strstr(a, "there"), 5);
    printf("%s", b);
    return 0;
}

    //Pascal pos funkcija (demonstracija)
int pos()
{
    int b=0;
    char a[255] = "Hey there! How are you?";
    printf("Hey there! How are you?");
    b=(int)(strlen(a)-strlen(strstr(a, "How"))+1);
    printf("'How' je na %d mestu.\n", b);
    return 0;
}

    //Program besedilo
int besedilo()
{
    char a[255];
    printf("Vpiši besedilo:\n");
    scanf("%s", a);
    printf("Dolžina je %zu\n", strlen(a));
    printf("Prva črka je %c\n", a[0]);
    return 0;
}

    //Program deljivo z 7
int deljivo()
{
    int a;
    printf("Vpiši število!");
    scanf("%d", &a);
    if (a%7==0) printf("%d Je deljivo s 7\n", a);
    else printf("%d Ni deljivo s 7\n", a);
    return 0;
}

    //Program trgovina
int trgovina(){
    int a=0, b=0;
    printf("How much cash do u have? ");
    scanf("%d", &a);
    printf("\n");
    while (a!=0){
        printf("How much cash does this swag cost? ");
        scanf("%d", &b);
        if (a-b >= 0){
            a-=b;
            printf("Use it wisely!\n%d$ remaining.\n\n", a);
        }
        else if (a-b < 0){
            printf("You don'thave enough money!\n%d$ remaining.\n\n", a);
        }
    }
    printf("Welp, you're broke now.\n");
    return 0;
}

    //Program vecji kot nic
int vecjinic()
{
    int a=0;
    printf("Vpiši število! ");
    scanf("%d", &a);
    if (a>0)
        printf("Število je večje od nič.\n");
    return 0;
}


    //Program Vsota
int vsota()
{
    int a=0, b=0;
    for (; a<=10; a++) {
        b+=a;
    }
    printf("Vsota prvih 10 števil je %d\n", b);
    return 0;
}