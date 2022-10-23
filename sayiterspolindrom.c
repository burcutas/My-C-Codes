#include <stdio.h>

int main(){
    int num,n,sum=0;
    
    printf("enter a value:");
    scanf("%d",&num);
    
    n=num;
    while(num>0){
        sum=(num%10)+(sum*10);
        num/=10;   
        
    }
    printf("%d",sum);
    if(sum==n){
        printf("\npolindrom");
    }
    else printf("\npolindrom degil");
    
    return 0;
    
}
