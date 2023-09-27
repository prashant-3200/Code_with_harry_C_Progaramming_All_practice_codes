// Develop a C program to create student structure, read two student details
// ( Student roll number, name, section, department, fees, and results i.e., total marks obtained)
// and print the student details who has scored the highest

#include<stdio.h>



int main(){
    struct student{
    int roll_no;
    char name[20];
    char section[20];
    char department[20];
    int fees;
    int total_marks;
}st1,st2;

printf("Enter the details of students respectively: roll number, name, section, department, fees, total marks obtained\n ");
printf("Student[1]:\n");
scanf("%d%s%s%s%d%d",&st1.roll_no,st1.name,st1.section,st1.department,&st1.fees,&st1.total_marks);
printf("Student[2]:\n");
scanf("%d%s%s%s%d%d",&st2.roll_no,st2.name,st2.section,st2.department,&st2.fees,&st2.total_marks);
printf("Students details who has scored the highest maeks\n");

if(st1.total_marks > st2.total_marks){
    printf("Roll number: %d\nName: %s\nSection: %s\nDepartment: %s\nFees: %d\nResults: %d\n",st1.roll_no,st1.name,st1.section,st1.department,st1.fees,st1.total_marks);

}
else{
    printf("Roll number: %d\nName: %s\nSection: %s\nDepartment: %s\nFees: %d\nResults: %d\n",st2.roll_no,st2.name,st2.section,st2.department,st2.fees,st2.total_marks);

}
    return 0;
}