/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numbers[5], *point;
    
    point=numbers;
    *point = 10;
    
    point++;
    *point = 20;
    
    point = &numbers[2];
    *point = 30;
   
   
   point = numbers + 3;
    *point = 40;
    
    point = numbers;
    *(point+4) = 50;
    
    for(int n=0; n<5; n++)
    {
         printf("%d\n",numbers[n]);
    }   
         return 0;
}

 