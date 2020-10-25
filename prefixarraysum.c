# include <stdio.h>

int main(){
    int arr[]={-7,1,5,2,-4,3,0};
    int count = sizeof(arr) / sizeof(arr[0]); 

    int prefix[7];

    prefix[0]=arr[0];
    for (int i = 1; i < count+1; i++) 
    {
        prefix[i] = prefix[i - 1] + arr[i];
        
    } 
    int *ptr = prefix;
    for (int i = 1; i < count+1; i++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }
    
    return 0 ;
}