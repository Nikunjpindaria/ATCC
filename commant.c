#include <stdio.h>

void main()
{
    FILE *fp1,*fp2;
    char filename[] = "f1.txt";
    char filename[] = "f2.txt";
    char ch;
    int chars = 0;
    fp1 = fopen(filename, "r");
    fp1 = fopen(filename, "r");
    ch = fgetc(fp1);
    int count = 0;
    while (ch != EOF)
    {
        if(ch=='/'){
            ch = fgetc(fp1);
             if(ch=='/'){
             while (ch=='/'){
                ch = fgetc(fp1);


                 

            }
            elif(ch=='*'){

                while (ch=='*'){
                ch = fgetc(fp1);



            }

            else{
                fputc('/',fp2);
            }

             }
        }
         
        
    }
    
    printf("chars = %d\n", count);
   
}