#include<stdio.h>
int factorial(int n){

    if(n==0 || n==1){
        printf("--> Base Case Reached!\n");
        return 1;
    }
    else{
        printf("-->Entering factorial of %d\n", n);
        printf("  -->Calling factorial of %d\n", n-1);
        printf("     ");
        return n * factorial(n-1);


    }
}

int main(){
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}