#include <stdio.h>


void fahrenheitToCel();
void main (){
    float var = 99.09;
   // printf("%0.4f\n",var); // output -> 99.0900
    int a=47;
    printf(" OCTAL value of %d  : %o\n",a,a); //converting it into octal 
    printf("Hexadecimal value of %d : %X \n",a,a);
    int n;
    // printf("Enter the octal num :");
    // scanf("%o",&n);
    // printf("%d\n",n);
    
    //logical operators
      //AND
    (var>90 && 0)? printf("True\n"):printf("False\n"); // ternary operator
    // Bitwise Operators
       //AND
    int s=10 & 3 ;// 2 
    s= 17 & 9; // 1 binary multiplication
    //printf("%d",s);
   fahrenheitToCel();
    
}
void fahrenheitToCel(){
        int f=0;
        float c;
         while(f<140){
            c= 5*((f-32)/9);
            printf(" Fahrenheit :%d \t Celsius:%.2f\n",f,c);
            f+=12;
         }
    }
