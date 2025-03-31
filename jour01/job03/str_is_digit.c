
int char_is_digit(char c){
    int result=0;
    if (c>='0' && c<='9'){
        result=1;
    } else{
        result=0;
    }
    return result;
}

int str_is_digit(char *str){
    int result=0;
    for (int i=0; str[i]!='\0'; i++){
        if (char_is_digit(str[i])==1){
            result=1;
        }else{
        result=0;
        return result;
    }
    return result;
}
}

