#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Find_letter(char str[50],char *n){
    int i=0,count=0;

    for(i=0;str[i]!=*n;i++){
            count++;
     if(str[i]=='\0'){
        printf("please press any letter.");
        exit(0);
    }
    }
    return count;
}
int main()
{
    int a;
    char str[50],n;
    gets(str);
    scanf("%c",&n);
    a=Find_letter(str,&n);
    printf("%d",a);

    return 0;
}
