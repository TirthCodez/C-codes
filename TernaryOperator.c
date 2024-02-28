#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    printf("Enter first number and second number:"); //asks user to give input
    scanf("%d %d",&a,&b); //takes input from user
    //using ternary operator bcz there is only single line if..else result we want
    /*
    Syntax of Ternary operator
    (Condition) ? DoProcess if true : Do process if false;
    */
    a>b ? printf("First number is larger than second") : printf("Second number is larger than first");
}