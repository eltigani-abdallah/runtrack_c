int my_strlen(char *str){
    int strlength=0;
    for (int i=0;str[i]!='\0';i++){
        strlength++;
    };
    return strlength;
}