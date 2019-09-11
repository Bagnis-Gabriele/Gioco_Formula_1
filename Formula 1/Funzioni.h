#ifndef __funzioni_h
#define __funzioni_h

  /*
|===========================================================================================|
|                                                                                           |
|                                   Libreria FUNZIONI                                       |
|                                                                                           |
|                                       Ver. 2.1                                            |
|                                                                                           |
|                              Ult.Agg. 06 Dicembre 2016                                    |
|                                                                                           |
|  Elenco funzioni:                                                                         |
|                                                                                           |
|  - clrscr():             pulisce lo schermo di lavoro;                                    |
|  - gotoxy(x,y):          posiziona il cursore in una specifica posizione sullo schermo;   |
|  - randomize():          inizializza la casualità;                                        |
|  - random(numero):       genera un numero casuale € [0 .. numero);                        |
|  - textcolor(Colore):    modifica colore del testo (256 colori);                          |
|  - delay(MilliSecondi):  crea un attesa di tot millisecondi;                                         |
|  - cursor_hide():        nasconde il cursore;                                             |
|  - cursor_show():        rende visibile il cursore;                                       |
|                                                                                           |
|===========================================================================================|
*/

#include <time.h>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

//pulisce lo schermo di lavoro;
void clrscr() {
     system("cls");
}

//posiziona il cursore in una specifica posizione sullo schermo;
int gotoxy(short X, short Y){
	 HANDLE hStdout;
	 CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	 hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	 if (! GetConsoleScreenBufferInfo(hStdout, &csbiInfo))    {
		 MessageBox(NULL, "GetConsoleScreenBufferInfo", "Console Error", MB_OK);
		 return 1;
    }
	 csbiInfo.dwCursorPosition.X = X;
	 csbiInfo.dwCursorPosition.Y = Y;
	 if (! SetConsoleCursorPosition(hStdout, csbiInfo.dwCursorPosition))	    {
		 MessageBox(NULL, "SetConsoleCursorPosition", "Console Error", MB_OK);
		 return 1;
    }
     return 0;
}

//inizializza la casualità;
void randomize()    {
     srand(time(NULL));
}

//genera un numero casuale € [0 .. numero);
int random(int NumMax){
    int NumGenerato;

    NumGenerato = rand() % NumMax;
    return NumGenerato;
}

//modifica colore del testo (256 colori);
void textcolor(unsigned short color)    {
     HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(hCon,color);
}

//crea un attesa di tot millisecondi;
void delay( int MilliSecondi)    {
     double Secondi = 0;
     if (MilliSecondi > 0)
        Secondi = MilliSecondi / 1000.0;
     clock_t endwait;
     endwait = clock () + Secondi * CLOCKS_PER_SEC;
     while (clock() < endwait) {}
}



/*funzione che nasconde il cursore*/
void cursor_hide(){
    HANDLE hOut;
    CONSOLE_CURSOR_INFO ConCurInf;

    hOut=GetStdHandle(STD_OUTPUT_HANDLE);

    ConCurInf.dwSize=10; //imposto la dimensione del cursore alla dimensione standart di 10(valore massimo 100)
    ConCurInf.bVisible=FALSE;

    SetConsoleCursorInfo(hOut, &ConCurInf);
}

/*funzione che rende visibile un cursore di dimensione standart 10 */
void cursor_show(){
    HANDLE hOut;
    CONSOLE_CURSOR_INFO ConCurInf;
    hOut=GetStdHandle(STD_OUTPUT_HANDLE);

    ConCurInf.dwSize=10; //imposto la dimensione del cursore alla dimensione standart di 10(valore massimo 100)
    ConCurInf.bVisible=TRUE;

    SetConsoleCursorInfo(hOut, &ConCurInf);
}

#endif
