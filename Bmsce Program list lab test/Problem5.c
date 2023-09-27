// Develop a C program to interchange the largest and smallest number in the given array.
// Identify the problem in this program when we put input as 4 and 1,2,3,4

#include<stdio.h>

int main(){
    
    int n;
    printf("Enter the size of the given array : \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values present in given array: \n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    int maxpos = 0;
    int minpos = 0;
    int temp;

    for(int i = 1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        
            maxpos = i;
        }
    
    
        if(arr[i]<min){
            min = arr[i];
            
            minpos = i;

        }
    }
    
     temp = arr[maxpos];
     arr[maxpos] = arr[minpos];
     arr[minpos] = temp;
     

    printf("values of array after interchange of maximum and minimum value is : \n");
     for(int i = 0; i<n;i++){
         printf("%d\n",arr[i]);
     }


    

    return 0;
}
