#include <stdio.h>
int main()
{
    int year;
    printf("Enter value of year:");
    scanf("%d" ,&year);

    if((year%4==0)&&(year%100!=0)) {
        printf("year is leap");
    }
    if(year%400==0) {
        printf("year is leap");
    }
return 0;
}