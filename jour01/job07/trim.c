// #include <stdio.h>
// #include <stdlib.h>




char *trim(char *src){
    int i=0;
    int length=0;
    int j=0;
    while (src[length]!='\0'){
        length++;
    }
    char *result=(char *)malloc(length+1);


    for (i=0;src[i]!='\0'; i++){
        if (src[i]==' '){
            continue;
        }else{
            result[j]=src[i];
            j++;
        }

    }
    result[j]='\0';
    return result;
}

// int main(){
//     char *text_to_trim="He Llo Wo Rld";
//     char *full_trim=trim(text_to_trim);
//     printf(full_trim);

//     free(full_trim);
//     return 0;
// }