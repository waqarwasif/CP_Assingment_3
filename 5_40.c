int main(){
    static int count = 0;
    count++;
    printf("Function called %d times\n", count);
    main();
    return 0;
}