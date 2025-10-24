#include<stdio.h>
int GCD(int a,int b){
    int rem;
    rem = a % b;
    if (rem==0){
        return b;
    }
    else{
        a = b;
        b = rem;
        GCD(a,b);
    }

}

int main(){
    int a = 18;
    int b = 48;
    printf("GCD of %d and %d is %d", a, b, GCD(a,b));
    return 0;
}