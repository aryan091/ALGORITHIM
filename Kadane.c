# include <stdio.h>

int main(){

    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int count = sizeof(arr) / sizeof(arr[0]); 

    int max_so_far=0,max_ending_here=0,start=0,end=0,s=0;

    for (int i = 0; i < count; i++)
    {
        max_ending_here=max_ending_here+arr[i];

        if(max_ending_here<0){
            max_ending_here=0;
            s=1+i;
        }
        if (max_so_far<max_ending_here)
        {
            max_so_far=max_ending_here;
            start=s;
            end=i;
        }
        
    }
    printf("The Largest Sum Contiguous Subarray is %d having starting index %d and end at %d",max_so_far,start,end);
    
    
    return 0 ;
}

