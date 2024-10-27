#include<stdio.h>
int main (){

    char s[70];
    fgets(s,sizeof(s),stdin);
    printf("%s",s);
    return 0;

}