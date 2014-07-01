//
//  datum(case).c
//  Hello World
//
//  Created by Andrej Fidel on 30/06/14.
//  Copyright (c) 2014 Andrej Fidel. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int insert();
int delete();
int copy();
int pos();
int besedilo();
int deljivo();
int trgovina();
int vecjinic();
int vsota();
int ugani();
int imenaa();
int viroza();
int najdi();
int poisciBes();
int besedeNa();

int main()
{
    srandom((int)time(0));
    int ret=0, a=0;
    
    printf("   Izberi program\n\n");
    printf("1. Deljivo z 7\n");
    printf("2. Trgovina\n");
    printf("3. Vecji kot nič\n");
    printf("4. Vsota\n");
    printf("5. Besedilo\n");
    printf("6. Pos funkcija\n");
    printf("7. Copy funkcija\n");
    printf("8. Delete funkcija\n");
    printf("9. Insert funkcija\n");
    printf("10. Igra ugibanja\n");
    printf("11. Imenaa\n");
    printf("12. Viroza\n");
    printf("13. Najdi\n");
    printf("14. Poišči besede\n");
    printf("15. Besede na\n");
    
    char buf[256];
    gets(buf);
    sscanf(buf, "%d", &a);
    switch(a)
    {
        case 1:
            printf("Launching Deljivo z 7...\n\n");
            ret = deljivo();
            break;
        case 2:
            printf("Launching Trgovina...\n\n");
            ret = trgovina();
            break;
        case 3:
            printf("Launching Vecji kot nič...\n\n");
            ret = vecjinic();
            break;
        case 4:
            printf("Launching Vsota 1 do 10...\n\n");
            ret = vsota();
            break;
        case 5:
            printf("Launching Besedilo...\n\n");
            ret = besedilo();
            break;
        case 6:
            printf("Launching Pos funkcija...\n\n");
            ret = pos();
            break;
        case 7:
            printf("Launching Copy funkcija...\n\n");
            ret = copy();
            break;
        case 8:
            printf("Launching Delete funkcija...\n\n");
            ret = delete();
            break;
        case 9:
            printf("Launching Insert funkcija...\n\n");
            ret = insert();
            break;
        case 10:
            printf("Launching Igra ugibanja...\n\n");
            ret = ugani();
            break;
        case 11:
            printf("Launching Imenaa...\n\n");
            ret = imenaa();
            break;
        case 12:
            printf("Launching Viroza...\n\n");
            ret = viroza();
            break;
        case 13:
            printf("Launching Najdi...\n\n");
            ret = najdi();
            break;
        case 14:
            printf("Launching Poišči besede...\n\n");
            ret = poisciBes();
            break;
        case 15:
            printf("Launching Besede na...\n\n");
            ret = besedeNa();
            break;
        default:
            printf("\n\nFailed! Closing program...\n\n");
    }
    return 0;
}