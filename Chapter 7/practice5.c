#include<stdio.h>

int swap(int *mum, int n){
    for(int i = 0; i < (n/2); i++){
        int temp;
        temp =  mum[i];
        mum[i] = mum[n-i-1];
        mum[n-i-1] = temp;

    }

}

int main(){
    int mum[] = {1,2,3,4,5,6,7};
    for(int i = 0 ; i < 7; i ++){
        printf("The value of %d element is %d\n",i, mum[i]);
    }
    swap(mum,7);
    for(int i = 0 ; i < 7; i ++){
        printf("The value of %d element is %d\n",i, mum[i]);
    }
    return 0;
}