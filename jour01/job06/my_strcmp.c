// #include <stdio.h>

int my_strcmp(char *s1, char *s2){
    int i=0;
    int j=0;
    int tots1=0;
    int tots2=0;
    for (i=0;s1[i]!='\0';i++){
        tots1+=s1[i];
    }
    for (j=0;s2[j]!='\0';j++){
        tots2+=s2[j];
    }

    if (tots1==tots2){
        return 0;
    }else if (tots1<tots2){
        return -1;
    }
    else{
        return 1;
    }
}

// int main(){
//     printf("%d", my_strcmp("abd", "abc"));
// }