#include<stdio.h>

int main(){
    int num;
    printf("Enter any num: \n");
    scanf("%d",&num);

    FILE *prashant;
    prashant = fopen("table2.txt","w");

    for(int i = 0;i<10;i++){
        fprintf(prashant,"%d X %d = %d\n",num,i+1,num*(i+1));
    }
    fclose(prashant);
    printf("Succesfully generated table of %d\n",num);
    return 0;
}