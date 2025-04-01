#include <stdio.h>
#include <stdlib.h>


char *my_strcpy(char *dest, char *src){
    int i;
    for (i=0;src[i]!='\0'; i++){
        dest[i]=src[i];

    };
    dest[i]='\0';

    return dest;
}


char *my_strdup(char *src){
    int length=0;
    char *result;
    while (src[length]!='\0'){
        length++;
    }

    char *new_arr=(char *)malloc(length+1);

    if(new_arr == NULL){
        printf("failed to allocate space");
        return NULL;
    }
    result=my_strcpy(new_arr, src);
    return result;
}


int main(){
    printf(my_strdup("bing bong\n"));

    return 0;
}
