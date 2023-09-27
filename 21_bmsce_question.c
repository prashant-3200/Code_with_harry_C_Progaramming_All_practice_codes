// Develop a C program to interchange the largest and smallest number in the given array 
// Find the error!!!
#include<stdio.h>

int main(){
    int n,min,max,temp,pos_max,pos_min;

    printf("Enter the number of elements in array: \n");
    scanf("%d",&n);
    int sample[n];
    
    

    printf("Enter the numbers :\n");
    for(int i =0;i<n;i++){
        scanf("%d",&sample[i]);}
    
    for(int i =0;i<n;i++){
        if(i==0){
            min = sample[0];
        }
        else if(sample[i] < min){
            min = sample[i];
        }
        else if(sample[i] > max){
            max = sample[i];
        }
    }
    
    printf("Maximum and minimum value in this array is: %d, %d\n",max,min);
    for(int i =0;i<n;i++){
        if(max = sample[i]){
            pos_max = i;
            break;

        }
        else if(min = sample[i]){
            pos_min = i;
            break;
        }
    }

temp = sample[pos_max];
sample[pos_max] = sample[pos_min];
sample[pos_min] = temp;

printf("Elements in array after getting exchanged is: \n");

for(int i =0;i<n;i++)
printf("%d\n",sample[i]);

    
    
    return 0;
}