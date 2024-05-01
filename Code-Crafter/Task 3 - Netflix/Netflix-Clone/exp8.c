#include<stdio.h>
#include<conio.h>
#include<string.h>

struct three{
    char data[10];
}s[30];

void main(){
    char ch;
    int i = 0, len = 0;
    FILE *fp1, *fp2;
    fp1 = fopen("input.txt","r");
    fp2 = fopen("output.txt","w");
    
    while(fscanf(fp1,"%s",s[len].data)!=EOF){
        len++;
    }
    
    for(i=0;i<len;i++){
        if(strcmp(s[i].data,"=")==0){
            fprintf(fp2,"\n LDA \t %s",s[i+1].data);
            fprintf(fp2,"\n STO \t %s",s[i-1].data);
            if(strcmp(s[i+2].data,"+")==0){
                fprintf(fp2,"\n ADD \t %s",s[i+3].data);
            }
            if(strcmp(s[i+2].data,"-")==0){
                fprintf(fp2,"\n SUB \t %s",s[i+3].data);
            }
        }
    }
    fclose(fp1);
    fclose(fp2);
    getch();
}




























