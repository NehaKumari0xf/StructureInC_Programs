/*
C program to write a character to file
*/
#include<stdio.h>
int main()
{
    char ch;
    FILE *file;

    /* open/create a file */
    file=fopen("neha.txt","w");
    /*check file is opened or not*/
    if(file==NULL)
    {
        printf("Unable to create file!\n");
        system("pause");
        return 0;
    }

    //write data to file
    ch='N';
    fputc(ch,file);
    printf("\n Data written to file successfully");
    //close file
    fclose(file);
    return 0;
}