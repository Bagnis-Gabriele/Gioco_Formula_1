#include <stdio.h>
#include <stdlib.h>
#include "funzioni.h"

#define BLOCCO 219
#define BIANCO 255
#define NORMALE 15
#define NERO 0
#define AZZURRO 51
#define VETRO 187
#define ROSSO 68
#define VIOLA 85
#define VERDESCURO 34
#define VERDECHIARO 170
#define BLU 17
#define ARANCIO 102
#define GRIGIO 136
#define ROSA 204

void CaricaVettColori( int vett[]){
    vett[0]=ROSSO;
    vett[1]=VIOLA;
    vett[2]=VERDECHIARO;
    vett[3]=VERDESCURO;
    vett[4]=BLU;
    vett[5]=ARANCIO;
    vett[6]=GRIGIO;
    vett[7]=ROSA;
    return;
}

int tasti(){
    int a;
    int i;
    for(i=0;i<10;i++){
        if(kbhit()){
            a=getch();
            if(a==77){
                return 'd';
            }
            if(a==75){
                return 's';
            }
            if(a==99){
                return 'c';
            }
            return 'a';
        }
    }
    return 'a';
}

void macchina(int vett[]){
    int col[8];
    int color;
    int colonna=vett[1];
    int x;
    int y;
    int piu;
    int fine=0;
    char a='a';
    a=tasti();
    CaricaVettColori(col);
    if(a=='d'){
        colonna=colonna+1;
    }
    if(a=='s'){
        colonna=colonna-1;
    }
    if(a=='c'){
        vett[0]=vett[0]+1;
        if(vett[0]==8){
            vett[0]=1;
        }
    }
    if(a!='a'){
        if(colonna<1){
            colonna=1;
        }
        if(colonna>4){
            colonna=4;
        }
        if(colonna==1){
            piu=0;
        }
        if(colonna==2){
            piu=10;
        }
        if(colonna==3){
            piu=20;
        }
        if(colonna==4){
            piu=30;
        }
        color=col[vett[0]];
        textcolor(NERO);
        for(y=32;y<=39;y++){
            for(x=12+vett[2];x<=17+vett[2];x++){
                gotoxy(x,y);
                printf("%c", BLOCCO);
            }
        }
        vett[1]=colonna;
        vett[2]=piu;
        textcolor(color);
        for(y=32;y<=33;y++){
            for(x=12+piu;x<=17+piu;x++){
                gotoxy(x,y);
                printf("%c", BLOCCO);
            }
        }
        textcolor(VETRO);
        for(y=34;y<=35;y++){
            for(x=12+piu;x<=17+piu;x++){
                gotoxy(x,y);
                printf("%c", BLOCCO);
            }
        }
        textcolor(color);
        for(y=36;y<=39;y++){
            for(x=12+piu;x<=17+piu;x++){
                gotoxy(x,y);
                printf("%c", BLOCCO);
            }
        }
        textcolor(NORMALE);
    }
    return;
}

