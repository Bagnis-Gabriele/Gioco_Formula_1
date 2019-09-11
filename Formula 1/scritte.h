#include <stdio.h>
#include <stdlib.h>
#include "funzioni.h"

#define BLOCCO 219
#define BIANCO 255

float StampaScritte(char nome[]){
    FILE *rec;
    FILE *stor;
    float punt;
    char nomes[50];
    int a;
    rec=fopen("record.txt","r");
    float record;
    char nomer[50];
    fscanf(rec, "%f %s", &record, nomer);
    fclose(rec);
    gotoxy(53,6);
    printf("Formula 1");
    gotoxy(53,8);
    puts(nome);
    gotoxy(53,10);
    printf("distanza effettuata: ");
    gotoxy(53,12);
    printf("record: %.2f km di %s", record, nomer);
    gotoxy(53,15);
    printf("comandi:");
    gotoxy(53,17);
    printf("freccia destra: spostati a destra");
    gotoxy(53,18);
    printf("freccia sinistra: spostati a sinistra");
    gotoxy(53,19);
    printf("c: cambia colore");
    gotoxy(53,21);
    printf("partite recenti:");
    stor=fopen("storico.txt","r");
    for (a=0;a<10;a++){
        fscanf(stor, "%f %s", &punt, nomes);
        gotoxy(53, 32-a);
        printf("%.2f km \t %s", punt, nomes);
    }
    fclose(stor);

    return record;
}

void formula1(){
    printf("\n                    %c%c%c%c   %c%c%c%c   %c%c%c%c  %c   %c  %c  %c  %c     %c%c%c%c   ", BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO);
    printf("\n                    %c      %c  %c   %c  %c  %c%c %c%c  %c  %c  %c     %c  %c   ", BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO);
    printf("\n                    %c%c%c%c   %c  %c   %c%c%c%c  %c %c %c  %c  %c  %c     %c%c%c%c   ", BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO);
    printf("\n                    %c      %c  %c   %c%c    %c   %c  %c  %c  %c     %c  %c   ", BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO);
    printf("\n                    %c      %c  %c   %c %c   %c   %c  %c  %c  %c     %c  %c   ", BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO);
    printf("\n                    %c      %c%c%c%c   %c  %c  %c   %c  %c%c%c%c  %c%c%c%c  %c  %c   ", BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO,BLOCCO);
    printf("\n                                                                                ");
    printf("\n                                         %c                                     ", BLOCCO);
    printf("\n                                        %c%c                                     ", BLOCCO,BLOCCO);
    printf("\n                                       %c %c                                     ", BLOCCO,BLOCCO);
    printf("\n                                      %c  %c                                     ", BLOCCO,BLOCCO);
    printf("\n                                         %c                                     ", BLOCCO);
    printf("\n                                         %c                                     ", BLOCCO);
    printf("\n                                         %c                                     ", BLOCCO);
}
