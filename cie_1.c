#include<stdio.h>

float area_circle(int diameter);
float circumference_circle(int diameter);

int main(){
    int diameter;
    printf("Enter the value of diameter of circle:\n");
    scanf("%d",&diameter);

    printf("The area of the circle is %f \n",area_circle(diameter));
    printf("The circumference of circle is %f \n",circumference_circle(diameter));


    

    return 0;
}

float area_circle(diameter){
    float area;
    area = 3.14*(diameter/2)*(diameter/2);
    return area;

}
float circumference_circle(diameter){
    float circumference;
    circumference = 2*3.14*(diameter/2);
    
    return circumference;

}
