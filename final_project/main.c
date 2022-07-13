#include <stdio.h>
#include "view_command.h"
#include "textbox.h"
#include "main.h"
#define maxsize 200



int main()
{
    int option ;
    do
    {
        view() ;
        command() ;
        scanf("%d" , &option) ;

    }while(!(option == 1) && !(option == 2) && !(option == 3)) ;
    switch (option)
    {
        case 1:
        {
            click_text_view() ;
            click_text_com() ;
            create_text() ;
            break ;
        }
        case 2:
        {
            click_label_view() ;
            click_label_com() ;
            create_label() ;
            break ;
        }
        case 3:
        {
            click_previous_view() ;
            click_previous_com() ;
            previous() ;
            break ;
        }

    }

    return 0;
}