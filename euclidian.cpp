#include <stdio.h>
#include <math.h>
#include "euclidian.h"

//Eukliduv algoritmus:
//Platí, že pokud a a b jsou kladná celá čísla a a>b, potom ​
//gcd(a,b)=gcd(b, a mod b).

//Rozsireny Eukliduv algoritmus
//lze nalézt Bézoutovu rovnost, neboli vyjádření největšího společného dělitele dvou čísel jejich lineární kombinací.

//add user input function

int main(int argc, char **argv){
    //vlozte cisla do num1 a num2 pro jejich vypocet pomoci Eukliduv algoritmu
    int x,y,res1,res2,res3 = 0;
    int num1 = 6, num2 = 12;

    printf("Nejvetsi spolecny delitel: \n");
    res1 = gcd(num1,num2); //working
    printf("Vysledek: %d\n",res1);

    printf("Rozsireny Eukliduv algoritmus: \n");
    res2 = extended_ecl(num1,num2,&x,&y);
    printf("Vysledek: %d\n",res2);

    printf("Nejmensi spolecny nasobek: \n");
    res3 = lcm(num1,num2);
    printf("Vysledek: %d\n",res3);
    return 0;
}
