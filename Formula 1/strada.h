#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "funzioni.h"

#define BLOCCO 219
#define BIANCO 255
#define NORMALE 15
#define NERO 0

void StampaStrada(){
    textcolor(BIANCO);
    int x=9;
    int y=0;
    for(x=9;x<=10;x++){
        for(y=0;y<40;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    for(x=49;x<=50;x++){
        for(y=0;y<40;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    for(x=19;x<=20;x++){
        for(y=0;y<4;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
        for(y=8;y<12;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
        for(y=16;y<20;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
        for(y=24;y<28;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
        for(y=32;y<36;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    for(x=29;x<=30;x++){
        for(y=0;y<4;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
        for(y=8;y<12;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
        for(y=16;y<20;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
        for(y=24;y<28;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
        for(y=32;y<36;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    for(x=39;x<=40;x++){
        for(y=0;y<4;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
        for(y=8;y<12;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
        for(y=16;y<20;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
        for(y=24;y<28;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
        for(y=32;y<36;y++){
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    textcolor(NORMALE);
    return;
}

void MuoviStrada(int mov){
    mov=mov%8;
    int x=0;
    int y=0;
    bool stop1;
    bool stop2;
    textcolor(NERO);
    for(x=19;x<=20;x++){
        stop1=false;
        for(y=4+mov;y<44&&stop1==false;y=y+8){
            if(y>=40){
                if(y==40){
                    y=0;
                }
                if(y==41){
                    y=1;
                }
                if(y==42){
                    y=2;
                }
                if(y==43){
                    y=3;
                }
                stop1=true;
            }
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    textcolor(BIANCO);
    for(x=19;x<=20;x++){
        stop2=false;
        for(y=0+mov;y<44&&stop2==false;y=y+8){
            if(y>=40){
                if(y==40){
                    y=0;
                }
                if(y==41){
                    y=1;
                }
                if(y==42){
                    y=2;
                }
                if(y==43){
                    y=3;
                }
                stop2=true;
            }
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    textcolor(NERO);
    for(x=29;x<=30;x++){
        stop1=false;
        for(y=4+mov;y<44&&stop1==false;y=y+8){
            if(y>=40){
                if(y==40){
                    y=0;
                }
                if(y==41){
                    y=1;
                }
                if(y==42){
                    y=2;
                }
                if(y==43){
                    y=3;
                }
                stop1=true;
            }
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    textcolor(BIANCO);
    for(x=29;x<=30;x++){
        stop2=false;
        for(y=0+mov;y<44&&stop2==false;y=y+8){
            if(y>=40){
                if(y==40){
                    y=0;
                }
                if(y==41){
                    y=1;
                }
                if(y==42){
                    y=2;
                }
                if(y==43){
                    y=3;
                }
                stop2=true;
            }
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    textcolor(NERO);
    for(x=39;x<=40;x++){
        stop1=false;
        for(y=4+mov;y<44&&stop1==false;y=y+8){
            if(y>=40){
                if(y==40){
                    y=0;
                }
                if(y==41){
                    y=1;
                }
                if(y==42){
                    y=2;
                }
                if(y==43){
                    y=3;
                }
                stop1=true;
            }
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    textcolor(BIANCO);
    for(x=39;x<=40;x++){
        stop2=false;
        for(y=0+mov;y<44&&stop2==false;y=y+8){
            if(y>=40){
                if(y==40){
                    y=0;
                }
                if(y==41){
                    y=1;
                }
                if(y==42){
                    y=2;
                }
                if(y==43){
                    y=3;
                }
                stop2=true;
            }
            gotoxy(x,y);
            printf("%c", BLOCCO);
        }
    }
    textcolor(NORMALE);
    return;
}
