#include<stdio.h>
int mystery( int a,  int b); // function prototype

int main(void)
{
    printf("%s", "Enter two integers: ");
     int x; // first integer
     int y; // second integer
    scanf("%d%d", &x, &y);

    printf("The result is %d\n", mystery(x, y));
}

// Parameter b must be a positive integer
// to prevent infinite recursion
 int mystery( int a,  int b)
{
    if(b==0){
        return 0;
    }   
    else if (1 == b)
    {
        return a;
    }
    else if (-1 == b)
    {
        return -a;
    }
    else
    {   if(b<0){
         
        return -a + mystery(a, b + 1);
        }
        else{
        return a + mystery(a, b - 1);}
    }
}