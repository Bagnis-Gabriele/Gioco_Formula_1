#include <conio.h>      //kbhit getch
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "strada.h"
#include "ostacoli.h"
#include "funzioni.h"
#include "macchina.h"
#include "scritte.h"

float funz(){
    int vett[8];
    int color;
    int col;
    float meter=0;
    int x;
    int control=1;
    int color2;
    int col2;
    int control2=1;
    int macc[3];
    int fine=0;
    float i=0;
    macc[1]=1;
    macc[0]=0;
    macc[2]=0;
    CaricaVettColori(vett);
    fflush(stdin);
    getch();
    for(x=0;fine==0;x++){
        i=i+0.01;
        macchina(macc);
        if(control==1){
            color=ColoreMacchinaAvversaria();
            color=vett[color];
            col=Colonna();
        }
        if(control2==1){
            color2=ColoreMacchinaAvversaria();
            color2=vett[color2];
            col2=Colonna();
        }
        control=MuoviMacchinaAvversaria(color,col,x);
        control2=MuoviMacchinaAvversaria(color2,col2,x+15);
        MuoviStrada(x);
        meter=meter+i;
        gotoxy(74,10);
        printf("%.2f km", meter);
        fine=ControlloIncidente(macc[1],col,col2,x);
    }
    return meter;
}

void aggiornaStorico(float meter, char nome[]){
        FILE *stor;
        FILE *pass;
        int a;
        float punt;
        char nomes[50];
        pass=fopen("passaggio.txt", "w");
        stor=fopen("storico.txt","r");
        fscanf(stor, "%f %s", &punt, nomes);
        for (a=0;a<9;a++){
        fscanf(stor, "%f %s", &punt, nomes);
        fprintf(pass, "%f %s\n", punt, nomes);
        }
        fclose(pass);
        fclose(stor);
        pass=fopen("passaggio.txt", "r");
        stor=fopen("storico.txt","w");
        for (a=0;a<9;a++){
        fscanf(pass, "%f %s", &punt, nomes);
        fprintf(stor, "%f %s\n", punt, nomes);
        }
        fclose(pass);
        fprintf(stor, "%f %s\n", meter, nome);
        fclose(stor);
        return;
}
