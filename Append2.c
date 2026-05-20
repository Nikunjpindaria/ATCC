#include<stdio.h>
void main(){
    FILE *fp1,*fp2;
    fp1 = fopen("./n.txt","r");
    fp2 = fopen("./p.txt","a");
    char c;
    while (fscanf(fp1, "%c", &c)!=EOF) {
        fprintf(fp2, "%c",c);
    }
    fclose(fp1);
    fclose(fp2);
} //this is intial code
