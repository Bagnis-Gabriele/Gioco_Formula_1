#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funzioni.h"

#define BLOCCO 219
#define BIANCO 255
#define NORMALE 15
#define NERO 0
#define AZZURRO 51
#define VETRO 187

int ColoreMacchinaAvversaria(){
    int x;
    int z=7;
    srand(time(NULL));
    x=rand() %z;
    return x;
}

int Colonna(){
    int x;
    int z=4;
    srand(time(NULL));
    x=rand() %z +1;
    return x;
}

int MuoviMacchinaAvversaria(int color, int colonna, int mov){
    mov=mov%33;
    int x;
    int y;
    int piu;
    int fine=0;
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
    textcolor(color);
    for(y=1+mov;y<=4+mov;y++){
        for(x=12+piu;x<=17+piu;x++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    for(y=7+mov;y<=8+mov;y++){
        for(x=12+piu;x<=17+piu;x++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    textcolor(VETRO);
    for(y=5+mov;y<=6+mov;y++){
        for(x=12+piu;x<=17+piu;x++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    textcolor(NERO);
    for(y=0+mov;y<=0+mov;y++){
        for(x=12+piu;x<=17+piu;x++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    if(mov>=32){
        for(y=1+mov;y<=8+mov;y++){
            for(x=12+piu;x<=17+piu;x++){
                gotoxy(x,y);
                printf("%c", BLOCCO);
            }
        fine=1;
    }
    }
    textcolor(NORMALE);
    return fine;
}

int ControlloIncidente(int c_m, int c_a1, int c_a2, int mov){
    int mov1=mov%33;
    int mov2=(mov+15)%33;
    if(mov1>=25&&c_m==c_a1){
        return 1;
    }
    if(mov2>=25&&c_m==c_a2){
        return 1;
    }
    return 0;
}
