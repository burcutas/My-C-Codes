#include <stdio.h>
#include <string.h>

int main(){
    char str[30],ch,str1[30];
    int i,count=0,a;

    gets(str);
    scanf("%c",&ch);
    a=strlen(str);

    for(i=0;i<'\0';i++){
        if(str[i]==ch){
            count++;
        }
        str1[i]=str[a-count];
        printf("%s",str1);

    }
    return 0;
}