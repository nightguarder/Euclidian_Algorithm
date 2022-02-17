#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int n, int m){
    int r = 0;
    //number is negative
    if (n<0)
    return 0;
    
    if (m ==0)
    return n;

    return gcd(m, (n%m));
}

int lcm(int x,int y){
    int tmp = 0;
    tmp = (x /gcd(x,y)*y);
    //printf("Answer is: %d\n",tmp);
    return tmp;
}

int extended_ecl(int n, int m, int *x, int *y){
int tmp = 0;

//check for negative numbers
 if ((n || m) < 0){
    printf("Numbers must be positive! \n");
    return 0;
} 

if (n == 0)
{
    *x = 0;
    *y = 1;
    return m;
}

//recursive function
int x1,y1;
int res = extended_ecl(m%n,n,&x1,&y1);
*x = y1 - (m/n) * x1;
*y = x1;

return res;
}