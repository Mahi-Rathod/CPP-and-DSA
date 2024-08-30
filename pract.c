#include<stdio.h>

int main(){
    char str1[] = {'a','b','c','d','\0'};
    char str2[] = {'e','f','g','h','\0'};
    char concat[10];
    
    int i;
    int j;
    for(i=0; str1[i] != '\0'; i++){
        concat[i] = str1[i];
    }
    
    j=i;
    for(i=0; str2[i] != '\0'; i++){
        concat[j++] = str2[i];
    }

    concat[j] = '\0';

    for(int i=0;concat[i] != '\0';i++){
        printf("%c ", concat[i]);
    }
    return 0;
}