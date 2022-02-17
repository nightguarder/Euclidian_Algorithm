#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include "euclidian.h"

//Eukliduv algoritmus:
//Platí, že pokud a a b jsou kladná celá čísla a a>b, potom ​
//gcd(a,b)=gcd(b, a mod b).

//Rozsireny Eukliduv algoritmus
//lze nalézt Bézoutovu rovnost, neboli vyjádření největšího společného dělitele dvou čísel jejich lineární kombinací.

//gcd() == Greatest Common Divisor
//lcm() == Least Common Multiple

void user_input(int x,int y, int *save1,int *save2){
    printf ("Input 2 numbers (with space between): ");

    while (scanf("%d%d",&x,&y)!=2)
    {
        if (!isdigit(x))
            while (getchar()!= '\n'); //until new line is entered
        //not a number? return
        else
            printf("Failed. Expected a number or new line\n");
            return ;

    }
        *save1 = x;
        *save2 = y;
    printf ("You entered %d and %d\n", x, y);
}

int main(int argc, char **argv){
    //insert numbers to number1 or number2 to calculate or use user_input()
    //or use user_input()
    int x,y,res1,res2,res3 = 0;
    int number1,number2 = 0;
    //int num1 = 64, num2 = 6;
    user_input(x,y,&number1,&number2);

    printf("Greatest common Divisor: \n");
    res1 = gcd(number1,number2); //working
    printf("Answer: %d\n",res1);

    printf("Extended Euclidian algorithm: \n");
    res2 = extended_ecl(number1,number2,&x,&y);
    printf("Answer: %d\n",res2);

    printf("Least common Multiplier: \n");
    res3 = lcm(number1,number2);
    printf("Answer: %d\n",res3);
    return 0;
}
