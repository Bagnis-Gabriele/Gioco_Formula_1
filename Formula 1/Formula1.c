#include <stdio.h>
#include <stdlib.h>
#include "formula1.h"

int main(){
    FILE *rec;
    float record;
    char nome[50];
    float meter;
    int ancora=1;
    cursor_hide();
    gotoxy(0,5);
    formula1();
    gotoxy(29,23);
    printf(" Aprire a schermo intero");
    gotoxy(29,25);
    printf("inserire username (max 20)");
    gotoxy(29,27);
    scanf("%s", nome);
    clrscr();
    while(ancora){
        StampaStrada();
        record=StampaScritte(nome);
        meter=funz();
        clrscr();
        if(record<meter){
            rec=fopen("record.txt","w");
            fprintf(rec, "%f %s", meter, nome);
            fclose(rec);
        }
        aggiornaStorico(meter,nome);
        gotoxy(0,5);
        formula1();
        gotoxy(29,23);
        printf("vuoi riprovare? (1=si 0=no)");
        gotoxy(29,25);
        scanf("%d", &ancora);
        clrscr();
    }
}
