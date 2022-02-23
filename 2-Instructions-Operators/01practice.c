#include<stdio.h>
int main(){

//QUE1) Which of the following is invalid in c?
//   i) int a; b = a;           // b is not defined at beginning.!
//  ii) int v = 3 ^ 3;          // Valid because this is the logic gate -- you will this study laterr
// iii) char dt = '21 Dec 2020' // inValid - only single charcter is valid bcoz of single inverted comma.


//QUE2) What data type will 3.0/8 - 2 return?
// --> double


//QUE3) Write a program to check whether a number is divisible by 97 or not ?
int num;
printf("Enter the number \n");
scanf("%d", &num);
printf("Divisibilty test return : %d \n", num%97);


//QUE4) Explain step by step evaluation of 3*x/y-z+k , where x=2 y=3 z=3 k=1
// --> 0 (below is the program)

int x = 2, y = 3, z = 3, k = 1;
printf("The value of the equation is %d \n", 3 * x / y - z + k);

    return 0;
}
