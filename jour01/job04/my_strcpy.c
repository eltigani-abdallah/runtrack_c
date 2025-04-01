// #include <stdio.h>

char *my_strcpy(char *dest, char *src){
    int i;
    for (i=0;src[i]!='\0'; i++){
        dest[i]=src[i];

    };
    dest[i]='\0';

    return dest;

}

// int main(){
//     char destination[10];
//     printf(my_strcpy(destination , "boop"));

//     return 0;
// }
