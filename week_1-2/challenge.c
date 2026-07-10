#include <stdio.h>

int main(){
    printf("+----------------+--------+--------+\n");
    printf("|");
    printf("%5s","Name");
    printf("%12s","|");
    printf("%7s","Score1");
    printf("%2s","|");
    printf("%7s","Score2");
    printf("%2s","|");
    printf("\n+----------------+--------+--------+\n");
    printf("|");
    printf("%6s","Alice");
    printf("%11s","|");
    printf("%3s","85");
    printf("%6s","|");
    printf("%3s","90");
    printf("%6s","|");
    printf("\n|");
    printf("%4s","Bob");
    printf("%13s","|");
    printf("%3s","78");
    printf("%6s","|");
    printf("%3s","82");
    printf("%6s","|");
    printf("\n|");
    printf("%8s","Charlie");
    printf("%9s","|");
    printf("%3s","92");
    printf("%6s","|");
    printf("%3s","88");
    printf("%6s","|");
    printf("\n+----------------+--------+--------+\n");

    return 0;
}