# include<stdio.h>
# include<string.h>
int main(){
    char a[30];
    printf("enter string:");
    gets(a);
    int l=strlen(a);
    printf("length of actual string is %d\n",l);
    //to find and print substrings in given strings
    for(int sublength=1;sublength<=l;sublength++){
        for(int start=0;start<=l-sublength;start++){
           int end=start+sublength-1;
           for(int substr=start;substr<=end;substr++){
            printf("%c",a[substr]);

           }  
           printf("\n");
              }
    }
    return 0;

}