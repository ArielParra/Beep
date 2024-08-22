#include "Beep.h"
// code from: https://github.com/raymag/zeldab/blob/main/src/zelda.c
//#include <windows.h>

#define C5 522
#define D5 588
#define E5 658
#define F5 698
#define G5 784
#define A5 880
#define B5 988

#define C6 1046
#define D6 1174
#define E6 1318
#define F6 1396
#define G6 1568
#define A6 1760
#define B6 1976

#define C7 2092


#define T 500

void songOfTime()
{
    Beep(A5, T*1.5);
    Beep(D5, T*3);
    Beep(F5, T*1.5);

    Beep(A5, T*1.5);
    Beep(D5, T*3);
    Beep(F5, T*1.5);

    Beep(A5, T*.75);
    Beep(C6, T*.75);
    Beep(B5, T*1.5);
    Beep(G5, T*1.5);
    Beep(F5, T*.75);
    Beep(G5, T*.75);

    Beep(A5, T*1.5);
    Beep(D5, T*1.5);
    Beep(C5, T*.75);
    Beep(E5, T*.75);
    Beep(D5, T*5.5);

    // GO BACK 

    Beep(A5, T*1.5);
    Beep(D5, T*3);
    Beep(F5, T*1.5);

    Beep(A5, T*1.5);
    Beep(D5, T*3);
    Beep(F5, T*1.5);

    Beep(A5, T*.75);
    Beep(C6, T*.75);
    Beep(B5, T*1.5);
    Beep(G5, T*1.5);
    Beep(F5, T*.75);
    Beep(G5, T*.75);

    Beep(A5, T*1.5);
    Beep(D5, T*1.5);
    Beep(C5, T*.75);
    Beep(E5, T*.75);
    Beep(D5, T*5.5);

    // ..

    Beep(D5, T*.75);
    Beep(C5, T*.75);
    Beep(E5, T*1.5);
    Beep(C5, T*1.5);
    Beep(E5, T*.75);
    Beep(F5, T*.75);

    Beep(D5, T*4);

    Beep(D5, T*.75);
    Beep(C5, T*.75);
    Beep(E5, T*1.5);
    Beep(C5, T*1.5);
    Beep(F5, T*.75);
    Beep(G5, T*.75);

    Beep(D5, T*4);

    Beep(A5, T*.75);
    Beep(C6, T*.75);
    Beep(B5, T*1.5);
    Beep(C6, T*1.5);
    Beep(A5, T*1.5);

    Beep(C6, T*1.5);
    Beep(G5, T*1.5);
    Beep(A5, T*1.5);
    Beep(D5, T*.75);
    Beep(C5, T*.75);


    Beep(E5, T*1.5);
    Beep(D5, T*4.5);

    Beep(F5, T*.75);
    Beep(G5, T*.75);
    Beep(F5, T*1.5);
    Beep(G5, T*1.5);
    Beep(E5, T*.75);    
    Beep(C5, T*.75);

    Beep(F5, T*.75);
    Beep(E5, T*.75);
    Beep(D5, T*4.5);

    // GO BACK!

    Beep(D5, T*.75);
    Beep(C5, T*.75);
    Beep(E5, T*1.5);
    Beep(C5, T*1.5);
    Beep(E5, T*.75);
    Beep(F5, T*.75);

    Beep(D5, T*4);

    Beep(D5, T*.75);
    Beep(C5, T*.75);
    Beep(E5, T*1.5);
    Beep(C5, T*1.5);
    Beep(F5, T*.75);
    Beep(G5, T*.75);

    Beep(D5, T*4);

    Beep(A5, T*.75);
    Beep(C6, T*.75);
    Beep(B5, T*1.5);
    Beep(C6, T*1.5);
    Beep(A5, T*1.5);

    Beep(C6, T*1.5);
    Beep(G5, T*1.5);
    Beep(A5, T*1.5);
    Beep(D5, T*.75);
    Beep(C5, T*.75);


    Beep(E5, T*1.5);
    Beep(D5, T*4.5);

    Beep(F5, T*.75);
    Beep(G5, T*.75);
    Beep(F5, T*1.5);
    Beep(G5, T*1.5);
    Beep(E5, T*.75);    
    Beep(C5, T*.75);

    Beep(F5, T*.75);
    Beep(E5, T*.75);
    Beep(D5, T*4.5);

    // ..

    Beep(A6, T*1.5);
    Beep(D6, T*3);
    Beep(F6, T*1.5);

    Beep(A6, T*1.5);
    Beep(D6, T*3);
    Beep(F6, T*1.5);

    Beep(A6, T*.75);
    Beep(C7, T*.75);
    Beep(B6, T*1.5);
    Beep(G6, T*1.5);
    Beep(F6, T*.75);
    Beep(G6, T*.75);

    Beep(A6, T*1.5);
    Beep(D6, T*1.5);
    Beep(C6, T*.75);
    Beep(E6, T*.75);
    Beep(D6, T*5.5);
}

int main(){
    songOfTime();
    return 0;
}