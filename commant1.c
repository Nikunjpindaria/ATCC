#include<stdio.h>

void main(){

    FILE *in,*out;
    char infile[50], outfile[50];
    int c,next;
    printf("Enter input file name: ");
    scanf("%s", infile);    
    printf("Enter output file name: ");
    scanf("%s", outfile);

    if(!in || !out){
        printf("file Error");
        return;
    }
    in = fopen(infile, "r");
    out = fopen(outfile, "w");
    c = fgetc(in);
    while(c != EOF){
        if(c == '/'){
            next = fgetc(in);
            if(next == '/'){
                while(c != '\n' && c != EOF){
                    c = fgetc(in);
                }
            }
            else if(next == '*'){
                c = fgetc(in);
                next = fgetc(in);
                while(!(c == '*' && next == '/')){
                    c = next;
                    next = fgetc(in);
                }
                c = fgetc(in);
            }
            else{
                fputc(c, out);
                c = next;
            }
        }
        else{
            fputc(c, out);
            c = fgetc(in);
        }
    }
    
}