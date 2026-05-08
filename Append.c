#include <stdio.h>
//gyyvvvhhgvghvh 
//
void main()
{
    FILE *fp1;
    FILE *fp2;
    int ch;
    char filename1[] = "n.txt";
    char filename2[] = "p.txt";

    fp1 = fopen(filename1,"r");
    fp2 = fopen(filename2,"a");

    ch = fgetc(fp1);
    while(ch != EOF)
    {
        fputc(ch, fp2);
        ch = fgetc(fp1);
    }
}