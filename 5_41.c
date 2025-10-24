#include<stdio.h>
int i = 2;
void isprime(int n){
    if(n%i==0){
        printf("%d is not a prime number\n", n);
    }
    else{
        i++;
        if(i==n){
            printf("%d is a prime number\n", n);
        }
        else{
            isprime(n);
        }
    }
}

int main(){
    isprime(67);
    return 0;
}