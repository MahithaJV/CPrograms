# include <stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("2.c","r");
    if(fptr==NULL)
    printf("not avaliable");
    char ch;
    while(1){
        ch=fgetc(fptr);
        if(ch==EOF)
        break;
        printf("%c",ch);
    }
    fclose(fptr);
    return 0;

}