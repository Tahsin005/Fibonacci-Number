#include<stdio.h>
//factorial usings recursion 
int factorial(int n){
    if(n==1 || n==0) return 1;//Base case
    int recAns= n*factorial(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("Factorial of %d is %d", n , fact);
    return 0;
}