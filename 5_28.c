//(Sum of Digits) Write a function that takes an integer and returns the sum of its digits. For
//example, given the number 7631, the function should return 17.
#include <stdio.h>
int sumofdigits(int num){
    int temp=num;
    int sum=0;
    while(temp>0){  // 5 4 2 1
        num=temp/10;
        sum=sum+temp%10;
        printf("%d ",temp%10);
        temp/=10;

    }
    return sum;
}
int main(){
   int z =  sumofdigits(123455);
    printf("\n%d",z);
}