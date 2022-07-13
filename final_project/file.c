#include <stdio.h>
#include "file.h"




void text_file(char namefile[] , int width , int height , int x , int y , char name[])
{
    FILE* fp ;
    fp = fopen("Formes.txt" ,"a") ;
    fprintf(fp ,"textbox\n") ;
    fprintf(fp , "%s\n" ,namefile) ;
    fprintf(fp , "%s\n" ,name) ;
    fprintf(fp ,"%d\n" , x) ;
    fprintf(fp , "%d\n" , y) ;
    fprintf(fp ,"%d\n" , width) ;
    fprintf(fp ,"%d\n" , height) ;
    fprintf(fp ,"%s\n" ,"------------------------------------------------------------------") ;
    fclose(fp) ;
}

void label_file(char namefile[] , int width , int height , int x , int y , char name[])
{
    FILE* fp ;
    fp = fopen("Formes.txt" ,"a") ;
    fprintf(fp ,"label\n") ;
    fprintf(fp , "%s\n" ,namefile) ;
    fprintf(fp , "%s\n" ,name) ;
    fprintf(fp ,"%d\n" , x) ;
    fprintf(fp , "%d\n" , y) ;
    fprintf(fp ,"%d\n" , width) ;
    fprintf(fp ,"%d\n" , height) ;
    fprintf(fp ,"%s\n" ,"------------------------------------------------------------------") ;
    fclose(fp) ;
}

void text_file_note(char namefile[] , int width , int height , int x , int y , char name[] , char note[])
{
    FILE* fp ;
    fp = fopen("Formes.txt" ,"a") ;
    fprintf(fp ,"textbox\n") ;
    fprintf(fp , "%s\n" ,namefile) ;
    fprintf(fp , "%s\n" ,name) ;
    fprintf(fp , "%s\n" ,note) ;
    fprintf(fp ,"%d\n" , x) ;
    fprintf(fp , "%d\n" , y) ;
    fprintf(fp ,"%d\n" , width) ;
    fprintf(fp ,"%d\n" , height) ;
    fprintf(fp ,"%s\n" ,"------------------------------------------------------------------") ;
    fclose(fp) ;
}


void label_file_note(char namefile[] , int width , int height , int x , int y , char name[] , char note[])
{
    FILE* fp ;
    fp = fopen("Formes.txt" ,"a") ;
    fprintf(fp ,"label\n") ;
    fprintf(fp , "%s\n" ,namefile) ;
    fprintf(fp , "%s\n" ,name) ;
    fprintf(fp , "%s\n" ,note) ;
    fprintf(fp ,"%d\n" , x) ;
    fprintf(fp , "%d\n" , y) ;
    fprintf(fp ,"%d\n" , width) ;
    fprintf(fp ,"%d\n" , height) ;
    fprintf(fp ,"%s\n" ,"------------------------------------------------------------------") ;
    fclose(fp) ;
}

void name_form(char namefile[])
{
    FILE* fp ;
    fp = fopen("namefile.txt" ,"a") ;
    fprintf(fp ,"%s\n" ,namefile) ;
    fclose(fp) ;
}