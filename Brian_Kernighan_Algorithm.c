# include <stdio.h>

unsigned int countsetbits(int n){

    int setbits= 0;
    while (n)
    {
        n = n & n-1;
        setbits++;
    }
    return setbits;
}

int main(){
    
    int num;
    scanf("%d",&num);

    printf("The set bits in %d is %d",num,countsetbits(num));

    return 0 ;
}