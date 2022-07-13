#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "textbox.h"
#include "view_command.h"
#include "main.h"
#include "file.h"
#define maxsize 200
char name_file[maxsize] ;
int flag = 0 ;

typedef struct Text{
    int x , y , width , height ;
    char name[maxsize] , note[maxsize] , namefile[maxsize];
}text;

typedef struct Label{
    int x , y , width , height ;
    char name[maxsize] , note[maxsize] , namefile[maxsize] ;
}label;


void get_string(char str[])
{
    char c;
    int i = 0;
    char ignore_new_line = getchar() ;
    while ((c = getchar()) != '\n' && c != EOF)
    {
        str[i++] = c;
    }
    str[i] = '\0';
}

int len_s(char s[])
{
    int number ;
    for (int i = 0; i < maxsize + 1; ++i)
    {
        if(s[i] == '\0')
        {
            number = i ;
            break ;
        }
    }
    return number ;
}



void create_text()
{
    text detail ;
    int flag_exit = 0 ;
    if(flag == 0)
    {
        printf("Enter your Form name :") ;
        scanf("%s" , &detail.namefile) ;
        strcpy(name_file , detail.namefile) ;
        flag = 1 ;
    }

    printf("Enter name of TextBox :") ;
    scanf("%s" , &detail.name) ;
    int len = strlen(detail.name) ;


    printf("Enter width{%d_118} and height{2_15} :\n" , len+1) ;
    do {
        printf("width :") ;
        scanf("%d" ,&detail.width) ;
    } while (detail.width <= len+1 || detail.width >= 119) ;
    do {
        printf("height :") ;
        scanf("%d" ,&detail.height) ;
    } while (detail.height <= 1 || detail.height >= 16) ;


    printf("Enter distance of left{2_%d} and up{2_%d}\n" ,(118 - detail.width) ,(15 - detail.height)) ;
    do {
        printf("X :") ;
        scanf("%d" , &detail.x) ;
    } while (detail.x <= 1 || detail.x >= (119 - detail.width)) ;
    do {
        printf("Y :") ;
        scanf("%d" , &detail.y) ;
    } while (detail.y <= 1 || detail.y >= (16 - detail.height)) ;


    printf("Do you want to write something on this?\nY?N?\n") ;
    char solve ;
    do {
        scanf("%c" , &solve) ;
    } while (!(solve == 'Y') && !(solve == 'N') && !(solve == 'n') && !(solve == 'y')) ;
    if(solve == 'y' || solve == 'Y')
    {
        get_string(detail.note) ;
        int len_note = len_s(detail.note) ;
        while(len_note > ((detail.height-2)*(detail.width)))
        {
            get_string(detail.note) ;
            len_note = len_s(detail.note) ;
        }
        create_text_view_note(detail.height , detail.width , detail.x , detail.y , detail.name ,detail.note) ;
        create_text_com_note() ;
        int select ;
        do {
            printf("1-Edit\n2-Remove\n3-Add\n4-Exit\n") ;
            scanf("%d" , &select) ;
        } while (!(select == 1) && !(select == 2) && !(select == 3) && !(select == 4)) ;
        switch (select)
        {
            case 1:
            {
                create_text() ;
                break ;
            }
            case 2:
            {
                main() ;
                flag = 0 ;
                break ;
            }
            case 3:
            {
                text_file_note(name_file , detail.x ,detail.y , detail.width ,detail.height ,detail.name, detail.note) ;
                create_text_view_note(detail.height , detail.width , detail.x , detail.y , detail.name, detail.note) ;
                save_text_com() ;

                int elect ;
                do {
                    printf("1-TextBox\n2-Label\n3-New file\n4-Exit\n") ;
                    scanf("%d" , &elect) ;
                } while (!(elect == 1) && !(elect == 2) && !(elect == 3)) ;
                switch (elect)
                {
                    case 1:
                    {
                        create_text() ;
                    }
                    case 2:
                    {
                        create_label() ;
                        break ;
                    }
                    case 3:
                    {
                        flag = 0 ;
                        main() ;
                    }
                    case 4:
                    {
                        printf("See you soon\n") ;
                        exit(0) ;
                    }
                }
            }
            case 4:
            {
                printf("See You soon\n") ;
                exit(0) ;
            }
        }
    }

    create_text_view(detail.height , detail.width , detail.x , detail.y , detail.name) ;
    create_text_com() ;

    int option ;
    do {
        printf("1-Edit\n2-Remove\n3-Add\n4-Exit\n") ;
        scanf("%d" , &option) ;
    } while (!(option == 1) && !(option == 2) && !(option == 3) && !(option == 4)) ;
    switch (option)
    {
        case 1:
        {
            create_text() ;
            break ;
        }
        case 2:
        {
            main() ;
            flag = 0 ;
            break ;
        }
        case 3:
        {
            text_file(name_file , detail.x ,detail.y , detail.width ,detail.height ,detail.name) ;
            create_text_view(detail.height , detail.width , detail.x , detail.y , detail.name) ;
            save_text_com() ;

            int choose ;
            do {
                printf("1-TextBox\n2-Label\n3-New file\n4-Exit\n") ;
                scanf("%d" , &choose) ;
            } while (!(choose == 1) && !(choose == 2) && !(choose == 3) && !(choose == 4)) ;
            switch (choose)
            {
                case 1:
                {
                    create_text() ;
                }
                case 2:
                {
                    create_label() ;
                    break ;
                }
                case 3:
                {
                    flag = 0 ;
                    main() ;
                }
                case 4:
                {
                    printf("See you soon\n") ;
                    exit(0) ;
                }
            }
        }
        case 4:
        {
            printf("See you soon\n") ;
            exit(0) ;
        }
    }
}

void create_label()
{
    label detail ;
    if(flag == 0)
    {
        printf("Enter your Form name :") ;
        scanf("%s" , &detail.namefile) ;
        strcpy(name_file , detail.namefile) ;
        flag = 1 ;
    }

    printf("Enter name of Label :") ;
    scanf("%s" , &detail.name) ;
    int len = strlen(detail.name) ;


    printf("Enter width{%d_118} and height{2_15} :\n" , len+1) ;
    do {
        printf("width :") ;
        scanf("%d" ,&detail.width) ;
    } while (detail.width <= len+1 || detail.width >= 119) ;
    do {
        printf("height :") ;
        scanf("%d" ,&detail.height) ;
    } while (detail.height <= 1 || detail.height >= 16) ;


    printf("Enter distance of left{2_%d} and up{2_%d}\n" ,(118 - detail.width) ,(15 - detail.height)) ;
    do {
        printf("X :") ;
        scanf("%d" , &detail.x) ;
    } while (detail.x <= 1 || detail.x >= (119 - detail.width)) ;
    do {
        printf("Y :") ;
        scanf("%d" , &detail.y) ;
    } while (detail.y <= 1 || detail.y >= (16 - detail.height)) ;


    printf("Do you want to write something on this?\nY?N?\n") ;
    char solve ;
    do {
        scanf("%c" , &solve) ;
    } while (!(solve == 'Y') && !(solve == 'N') && !(solve == 'n') && !(solve == 'y')) ;
    if(solve == 'y' || solve == 'Y')
    {
        get_string(detail.note) ;
        int len_note = len_s(detail.note) ;
        while(len_note > ((detail.height-2)*(detail.width)))
        {
            get_string(detail.note) ;
            len_note = len_s(detail.note) ;
        }
        create_text_view_note(detail.height , detail.width , detail.x , detail.y , detail.name ,detail.note) ;
        create_text_com_note() ;
        int select ;
        do {
            printf("1-Edit\n2-Remove\n3-Add\n4-Exit\n") ;
            scanf("%d" , &select) ;
        } while (!(select == 1) && !(select == 2) && !(select == 3) && !(select == 4)) ;
        switch (select)
        {
            case 1:
            {
                create_text() ;
                break ;
            }
            case 2:
            {
                main() ;
                flag = 0 ;
                break ;
            }
            case 3:
            {
                label_file_note(name_file , detail.x ,detail.y , detail.width ,detail.height ,detail.name, detail.note) ;
                create_label_view_note(detail.height , detail.width , detail.x , detail.y , detail.name, detail.note) ;
                save_text_com() ;

                int elect ;
                do {
                    printf("1-TextBox\n2-Label\n3-New file\n4-Exit\n") ;
                    scanf("%d" , &elect) ;
                } while (!(elect == 1) && !(elect == 2) && !(elect == 3) && !(elect == 4)) ;
                switch (elect)
                {
                    case 1:
                    {
                        create_text() ;
                    }
                    case 2:
                    {
                        create_label() ;
                        break ;
                    }
                    case 3:
                    {
                        flag = 0 ;
                        main() ;
                    }
                    case 4:
                    {
                        printf("See you soon\n") ;
                        exit(0) ;
                    }
                }
            }
            case 4:
            {
                printf("See you soon\n") ;
                exit(0) ;
            }
        }
    }


    create_label_view(detail.height , detail.width , detail.x , detail.y , detail.name) ;
    create_label_com() ;

    int option ;
    do {
        printf("1-Edit\n2-Remove\n3-Add\n4-Exit\n") ;
        scanf("%d" , &option) ;
    } while (!(option == 1) && !(option == 2) && !(option == 3) && !(option == 4)) ;
    switch (option)
    {
        case 1:
        {
            create_label() ;
            break ;
        }
        case 2:
        {
            main() ;
            flag = 0 ;
            break ;
        }
        case 3:
        {
            label_file(name_file , detail.x ,detail.y , detail.width ,detail.height  ,detail.name) ;
            create_label_view(detail.height , detail.width , detail.x , detail.y , detail.name) ;
            save_label_com() ;

            int choose ;
            do {
                printf("1-TextBox\n2-Label\n3-New file\n4-Exit\n") ;
                scanf("%d" , &choose) ;
            } while (!(option == 1) && !(option == 2) && !(option == 3) && !(option == 4)) ;
            switch (choose)
            {
                case 1:
                {
                    create_text() ;
                }
                case 2:
                {
                    create_label() ;
                    break ;
                }
                case 3:
                {
                    name_form(name_file) ;
                    flag = 0 ;
                    main() ;
                }
                case 4:
                {
                    printf("See you soon\n") ;
                    exit(0) ;
                }
            }
        }
        case 4:
        {
            printf("See you soon\n") ;
            exit(0) ;
        }
    }
}

void previous()
{
    FILE* fp ;
    fopen("namefile.txt" ,"a") ;
    int i = 1 ;
    while (1)
    {
        char name[maxsize] ;
        fscanf(fp ,"%s" ,name);
        if(feof(fp))
        {
            break ;
        }
        printf("%d-%s" ,i , name) ;
        i++ ;
    }
    fclose(fp) ;
    printf("Which form do you want?\n") ;
    char choose[maxsize] ;

}

