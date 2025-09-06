#include <stdio.h>

void main (){
    float var = 99.09;
    printf("%0.4f\n",var); // output -> 90.0900
    int a=47;
    printf(" OCTAL value of %d  : %o\n",a,a); //converting it into octal 
    printf("Hexadecimal value of %d : %X \n",a,a);
    int n;
    printf("Enter the octal num :");
    scanf("%o",&n);
    printf("%d\n",n);
    
    


    //logical operators
      //AND
    (var>90 && 0)? printf("True\n"):printf("False\n"); // ternary operator
    // Bitwise Operators
       //AND
    int s=10 & 3 ;// 2 
    s= 17 & 9; // 1 binary multiplication
    printf("%d",s);
}