#include<stdio.h>
typedef struct timestamp{
    
    int year;
    int month;
    int day;
    int hour;
    int min;
    int sec;
}timestamp;

void display(timestamp t){
    printf("The timestamp is %d/%d/%d %d:%d:%d\n", t.day,t.month,t.year,t.hour,t.min,t.sec);

}

int timecmp(timestamp t1, timestamp t2){
    if(t1.year > t2.year){
        return 1;
    }
    if(t1.year < t2.year){
        return -1;
    }
    if(t1.month > t2.month){
        return 1;
    }
    if(t1.month <t2.month){
        return -1;
    }
    if(t1.day>t2.day){
        return 1;
    }
    if(t1.day<t2.day){
        return -1;
    }
    if(t1.hour>t2.hour){
        return 1;
    }
    if(t1.hour<t2.hour){
        return -1;
    }
    if(t1.min>t2.min){
        return 1;
    }
    if(t1.min<t2.min){
        return -1;
    }
    if(t1.sec>t2.sec){
        return 1;
    }
    if(t1.sec<t2.sec){
        return -1;
    }

}

int main(){
    

timestamp t1 = { 2021,04,23,23,55,34};
timestamp t2 = { 2021,04,23,23,55,35};

display(t1);
display(t2);

int a = timecmp(t1,t2);
printf("Date comparison function returns: %d",a);

    return 0;
}