#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
char reverse(char str[50], int uzunluk){
    char *tmp;
    int i;
    for(i=0;i<uzunluk/2;i++){
        tmp=str[i];
        str[i]=str[uzunluk-1-i];
        str[uzunluk-i-1]=tmp;
    }
    return *str;
    
}
int main(){
    char str[50];
    int uzunluk=0;
    gets(str);
    
    for(int i=0;str[i]!='\0';i++){
        uzunluk++;
    }
    
    printf("%s\n",str);
    
    *str=reverse(str,uzunluk);
    printf("%s",str);
    
    return 0;
}   