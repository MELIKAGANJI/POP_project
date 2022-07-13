#include <stdio.h>
#include <string.h>
#include "view_command.h"


void view()
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }

    for (int j = 0; j < 16; ++j)
    {
        if(j == 1)
        {
            for (int p = 0; p < 95; ++p)
            {
                if(p == 0)
                {
                    printf("-") ;
                }
                else if(p == 2)
                {
                    printf("which option do you want?") ;
                }
                else if(p == 94)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }

            }
        }
        else if(j == 3)
        {
            for (int k = 0; k < 119; ++k) {
                if(k == 0)
                {
                    printf("-") ;
                }
                else if(k >= 4 && k <= 16)
                {
                    printf("-") ;
                }
                else if(k >= 25 && k <= 35)
                {
                    printf("-") ;
                }
                else if(k >= 41 && k <= 55)
                {
                    printf("-") ;
                }
                else if( k == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }

            }
        }
        else if(j == 4)
        {
            for (int a = 0; a < 77; ++a)
            {
                if(a == 0)
                {
                    printf("-") ;
                }
                else if(a == 3)
                {
                    printf("| New TextBox |") ;
                }
                else if (a == 10)
                {
                    printf("| New Label |") ;
                }
                else if(a == 14)
                {
                    printf("| Previous Form |") ;
                }
                else if(a == 76)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }
            }

        }
        else if(j == 5)
        {
            for (int t = 0; t < 119; ++t) {
                if (t == 0)
                {
                    printf("-");
                }
                else if (t >= 4 && t <= 16)
                {
                    printf("-");
                }
                else if (t >= 25 && t <= 35)
                {
                    printf("-");
                }
                else if (t >= 41 && t <= 55)
                {
                    printf("-");
                }
                else if (t == 118)
                {
                    printf("-\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            for (int q = 0; q < 119; ++q)
            {
                if(q == 0)
                {
                    printf("-") ;
                }
                else if(q == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }

            }
        }
    }
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
}

void command()
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    for (int j = 0; j < 6; ++j)
    {
        if(j == 1)
        {
            for (int k = 0; k < 106; ++k)
            {
                if(k == 0)
                {
                    printf("-") ;
                }
                else if(k == 1)
                {
                    printf(" 1-New TextBox") ;
                }
                else if(k == 105)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }
            }
        }
        else if(j == 2)
        {
            for (int t = 0; t < 108; ++t)
            {
                if(t == 0)
                {
                    printf("-") ;
                }
                else if(t == 1)
                {
                    printf(" 2-New Label") ;
                }
                else if(t == 107)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }
            }
        }
        else if(j == 3)
        {
            for (int a = 0; a < 104; ++a)
            {
                if(a == 0)
                {
                    printf("-") ;
                }
                else if(a == 1)
                {
                    printf(" 3-Previous Form") ;
                }
                else if(a == 103)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }
            }
        }
        else
        {
            for (int q = 0; q < 119; ++q)
            {
                if(q == 0)
                {
                    printf("-") ;
                }
                else if(q == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }
            }
        }
    }
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
}

void click_text_view()
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    for (int j = 0; j < 16; ++j)
    {
        if(j == 2)
        {
            for (int k = 0; k < 119; ++k)
            {
                if (k == 0)
                {
                    printf("-");
                }
                else if (k >= 4 && k <= 16)
                {
                    printf("-");
                }
                else if (k == 118)
                {
                    printf("-\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else if(j == 3)
        {
            for (int k = 0; k < 119; ++k) {
                if(k == 0)
                {
                    printf("-") ;
                }
                else if(k >= 4 && k <= 16)
                {
                    printf("-") ;
                }
                else if(k >= 25 && k <= 35)
                {
                    printf("-") ;
                }
                else if(k >= 41 && k <= 55)
                {
                    printf("-") ;
                }
                else if( k == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }

            }
        }
        else if(j == 4)
        {
            for (int a = 0; a < 75; ++a)
            {
                if(a == 0)
                {
                    printf("-") ;
                }
                else if(a == 3)
                {
                    printf("|| New TextBox ||") ;
                }
                else if (a == 8)
                {
                    printf("| New Label |") ;
                }
                else if(a == 12)
                {
                    printf("| Previous Form |") ;
                }
                else if(a == 74)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }
            }

        }
        else if(j == 5)
        {
            for (int t = 0; t < 119; ++t) {
                if (t == 0)
                {
                    printf("-");
                }
                else if (t >= 4 && t <= 16)
                {
                    printf("-");
                }
                else if (t >= 25 && t <= 35)
                {
                    printf("-");
                }
                else if (t >= 41 && t <= 55)
                {
                    printf("-");
                }
                else if (t == 118)
                {
                    printf("-\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else if(j == 6)
        {
            for (int k = 0; k < 119; ++k)
            {
                if (k == 0)
                {
                    printf("-");
                }
                else if (k >= 4 && k <= 16)
                {
                    printf("-");
                }
                else if (k == 118)
                {
                    printf("-\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            for (int q = 0; q < 119; ++q)
            {
                if(q == 0)
                {
                    printf("-") ;
                }
                else if(q == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }

            }
        }
    }
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
}

void click_text_com()
{

    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    for (int j = 0; j < 6; ++j)
    {
        for (int t = 0; t < 119; ++t)
        {
            if(t == 0)
            {
                printf("-") ;
            }
            else if(t == 118)
            {
                printf("-\n") ;
            }
            else
            {
                printf(" ") ;
            }
        }
    }
    for (int k = 0; k < 60; ++k)
    {
        printf("- ") ;
    }
}

void click_label_view()
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    for (int j = 0; j < 16; ++j)
    {
        if(j == 2)
        {
            for (int k = 0; k < 119; ++k)
            {
                if (k == 0)
                {
                    printf("-");
                }
                else if (k >= 25 && k <= 35)
                {
                    printf("-");
                }
                else if (k == 118)
                {
                    printf("-\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else if(j == 3)
        {
            for (int k = 0; k < 119; ++k) {
                if(k == 0)
                {
                    printf("-") ;
                }
                else if(k >= 4 && k <= 16)
                {
                    printf("-") ;
                }
                else if(k >= 25 && k <= 35)
                {
                    printf("-") ;
                }
                else if(k >= 41 && k <= 55)
                {
                    printf("-") ;
                }
                else if( k == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }

            }
        }
        else if(j == 4)
        {
            for (int a = 0; a < 75; ++a)
            {
                if(a == 0)
                {
                    printf("-") ;
                }
                else if(a == 3)
                {
                    printf("| New TextBox |") ;
                }
                else if (a == 9)
                {
                    printf("|| New Label ||") ;
                }
                else if(a == 12)
                {
                    printf("| Previous Form |") ;
                }
                else if(a == 74)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }
            }

        }
        else if(j == 5)
        {
            for (int t = 0; t < 119; ++t) {
                if (t == 0)
                {
                    printf("-");
                }
                else if (t >= 4 && t <= 16)
                {
                    printf("-");
                }
                else if (t >= 25 && t <= 35)
                {
                    printf("-");
                }
                else if (t >= 41 && t <= 55)
                {
                    printf("-");
                }
                else if (t == 118)
                {
                    printf("-\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else if(j == 6)
        {
            for (int k = 0; k < 119; ++k)
            {
                if (k == 0)
                {
                    printf("-");
                }
                else if (k >= 25 && k <= 35)
                {
                    printf("-");
                }
                else if (k == 118)
                {
                    printf("-\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            for (int q = 0; q < 119; ++q)
            {
                if(q == 0)
                {
                    printf("-") ;
                }
                else if(q == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }

            }
        }
    }
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
}

void click_label_com()
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    for (int j = 0; j < 6; ++j)
    {
        for (int t = 0; t < 119; ++t)
        {
            if(t == 0)
            {
                printf("-") ;
            }
            else if(t == 118)
            {
                printf("-\n") ;
            }
            else
            {
                printf(" ") ;
            }

        }

    }
    for (int k = 0; k < 60; ++k)
    {
        printf("- ") ;
    }
}

void click_previous_view()
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    for (int j = 0; j < 16; ++j)
    {
        if(j == 2)
        {
            for (int k = 0; k < 119; ++k)
            {
                if (k == 0)
                {
                    printf("-");
                }
                else if (k >= 41 && k <= 55)
                {
                    printf("-");
                }
                else if (k == 118)
                {
                    printf("-\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else if(j == 3)
        {
            for (int k = 0; k < 119; ++k) {
                if(k == 0)
                {
                    printf("-") ;
                }
                else if(k >= 4 && k <= 16)
                {
                    printf("-") ;
                }
                else if(k >= 24 && k <= 34)
                {
                    printf("-") ;
                }
                else if(k >= 41 && k <= 55)
                {
                    printf("-") ;
                }
                else if( k == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }

            }
        }
        else if(j == 4)
        {
            for (int a = 0; a < 75; ++a)
            {
                if(a == 0)
                {
                    printf("-") ;
                }
                else if(a == 3)
                {
                    printf("| New TextBox |") ;
                }
                else if (a == 9)
                {
                    printf("| New Label |") ;
                }
                else if(a == 13)
                {
                    printf("|| Previous Form ||") ;
                }
                else if(a == 74)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }
            }

        }
        else if(j == 5)
        {
            for (int t = 0; t < 119; ++t) {
                if (t == 0)
                {
                    printf("-");
                }
                else if (t >= 4 && t <= 16)
                {
                    printf("-");
                }
                else if (t >= 24 && t <= 34)
                {
                    printf("-");
                }
                else if (t >= 41 && t <= 55)
                {
                    printf("-");
                }
                else if (t == 118)
                {
                    printf("-\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else if(j == 6)
        {
            for (int k = 0; k < 119; ++k)
            {
                if (k == 0)
                {
                    printf("-");
                }
                else if (k >= 41 && k <= 55)
                {
                    printf("-");
                }
                else if (k == 118)
                {
                    printf("-\n");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            for (int q = 0; q < 119; ++q)
            {
                if(q == 0)
                {
                    printf("-") ;
                }
                else if(q == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }

            }
        }
    }
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
}

void click_previous_com()
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    for (int j = 0; j < 6; ++j)
    {
        for (int t = 0; t < 119; ++t)
        {
            if(t == 0)
            {
                printf("-") ;
            }
            else if(t == 118)
            {
                printf("-\n") ;
            }
            else
            {
                printf(" ") ;
            }

        }

    }
    for (int k = 0; k < 60; ++k)
    {
        printf("- ") ;
    }
}

void create_text_view(int height , int width , int x , int y , char name[])
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    int end_horizontal = x + width+1 , end_vertical = y + height ;
    for (int j = 0; j < 16; ++j)
    {
        if(j >= y && j <= end_vertical)
        {
            if(j == y || j == end_vertical)
            {
                for (int k = 0; k < (119 - (width+1)); ++k)
                {
                    if(k == 0)
                    {
                        printf("-") ;
                    }
                    else if(k == x)
                    {
                        for (int t = 0; t < width+2; ++t)
                        {
                            printf("#") ;
                        }
                    }
                    else if(k == (119 - (width+2)))
                    {
                        printf("-\n") ;
                    }
                    else
                    {
                        printf(" ") ;
                    }
                }
            }
            else if(j == y+1)
            {
                int len = strlen(name) ;
                for (int k = 0; k < (119 - len-1); ++k)
                {
                    if(k == 0)
                    {
                        printf("-") ;
                    }
                    else if(k == x)
                    {
                        printf("#%s:" , name) ;
                    }
                    else if(k == end_horizontal - len - 1)
                    {
                        printf("#") ;
                    }
                    else if(k == (119 - (len+2)))
                    {
                        printf("-\n") ;
                    }
                    else
                    {
                        printf(" ") ;
                    }
                }
            }
            else
            {
                for (int k = 0; k < 119; ++k)
                {
                    if(k == 0)
                    {
                        printf("-") ;
                    }
                    else if(k == x || k == end_horizontal)
                    {
                        printf("#") ;
                    }
                    else if(k == 118)
                    {
                        printf("-\n") ;
                    }
                    else
                    {
                        printf(" ") ;
                    }
                }
            }
        }
        else
        {
            for (int k = 0; k < 119; ++k)
            {
                if(k == 0)
                {
                    printf("-") ;
                }
                else if(k == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }
            }
        }
    }
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
}

void create_text_com()
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    for (int j = 0; j < 6; ++j) {
        if (j == 1) {
            for (int k = 0; k < 96; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 2) {
                    for (int t = 0; t < 6; ++t) {
                        printf("-");
                    }
                } else if (k == 14) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 30) {
                    for (int t = 0; t < 5; ++t) {
                        printf("-");
                    }
                } else if (k == 36) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 95) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        } else if (j == 2) {
            for (int k = 0; k < 90; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 1) {
                    printf("| Edit |");
                } else if (k == 11) {
                    printf("| Remove |");
                } else if (k == 25) {
                    printf("| Add |");
                } else if (k == 30) {
                    printf("| Exit |");
                } else if (k == 89) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        } else if (j == 3) {
            for (int k = 0; k < 96; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 2) {
                    for (int t = 0; t < 6; ++t) {
                        printf("-");
                    }
                } else if (k == 14) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 30) {
                    for (int t = 0; t < 5; ++t) {
                        printf("-");
                    }
                } else if (k == 36) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 95) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        }
    }
    for (int k = 0; k < 60; ++k)
    {
        printf("- ") ;
    }
}

void save_text_com()
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    for (int j = 0; j < 6; ++j) {
        if (j == 1) {
            for (int k = 0; k < 96; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 2) {
                    for (int t = 0; t < 6; ++t) {
                        printf("-");
                    }
                } else if (k == 14) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 30) {
                    for (int t = 0; t < 5; ++t) {
                        printf("-");
                    }
                } else if (k == 36) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 95) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        } else if (j == 2) {
            for (int k = 0; k < 90; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 1) {
                    printf("| Edit |");
                } else if (k == 11) {
                    printf("| Remove |");
                } else if (k == 25) {
                    printf("| Add |");
                } else if (k == 30) {
                    printf("| Exit |");
                } else if (k == 89) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        } else if (j == 3) {
            for (int k = 0; k < 96; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 2) {
                    for (int t = 0; t < 6; ++t) {
                        printf("-");
                    }
                } else if (k == 14) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 30) {
                    for (int t = 0; t < 5; ++t) {
                        printf("-");
                    }
                } else if (k == 36) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 95) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        }
    }
    for (int k = 0; k < 60; ++k)
    {
        printf("- ") ;
    }
}

void create_label_view(int height , int width , int x , int y , char name[])
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    int end_horizontal = x + width+1 , end_vertical = y + height ;
    for (int j = 0; j < 16; ++j)
    {
        if(j >= y && j <= end_vertical)
        {
            if(j == y || j == end_vertical)
            {
                for (int k = 0; k < (119 - (width+1)); ++k)
                {
                    if(k == 0)
                    {
                        printf("-") ;
                    }
                    else if(k == x)
                    {
                        for (int t = 0; t < width+2; ++t)
                        {
                            printf("*") ;
                        }
                    }
                    else if(k == (119 - (width+2)))
                    {
                        printf("-\n") ;
                    }
                    else
                    {
                        printf(" ") ;
                    }
                }
            }
            else if(j == y+1)
            {
                int len = strlen(name) ;
                for (int k = 0; k < (119 - (len+1) ); ++k)
                {
                    if(k == 0)
                    {
                        printf("-") ;
                    }
                    else if(k == x)
                    {
                        printf("*%s:" , name) ;
                    }
                    else if(k == end_horizontal - len - 1)
                    {
                        printf("*") ;
                    }
                    else if(k == (119 - (len+2)))
                    {
                        printf("-\n") ;
                    }
                    else
                    {
                        printf(" ") ;
                    }
                }
            }
            else
            {
                for (int k = 0; k < 119; ++k)
                {
                    if(k == 0)
                    {
                        printf("-") ;
                    }
                    else if(k == x || k == end_horizontal)
                    {
                        printf("*") ;
                    }
                    else if(k == 118)
                    {
                        printf("-\n") ;
                    }
                    else
                    {
                        printf(" ") ;
                    }
                }
            }
        }
        else
        {
            for (int k = 0; k < 119; ++k)
            {
                if(k == 0)
                {
                    printf("-") ;
                }
                else if(k == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }
            }
        }
    }
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
}

void create_label_com()
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    for (int j = 0; j < 6; ++j) {
        if (j == 1) {
            for (int k = 0; k < 96; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 2) {
                    for (int t = 0; t < 6; ++t) {
                        printf("-");
                    }
                } else if (k == 14) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 30) {
                    for (int t = 0; t < 5; ++t) {
                        printf("-");
                    }
                } else if (k == 36) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 95) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        } else if (j == 2) {
            for (int k = 0; k < 90; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 1) {
                    printf("| Edit |");
                } else if (k == 11) {
                    printf("| Remove |");
                } else if (k == 25) {
                    printf("| Add |");
                } else if (k == 30) {
                    printf("| Exit |");
                } else if (k == 89) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        } else if (j == 3) {
            for (int k = 0; k < 96; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 2) {
                    for (int t = 0; t < 6; ++t) {
                        printf("-");
                    }
                } else if (k == 14) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 30) {
                    for (int t = 0; t < 5; ++t) {
                        printf("-");
                    }
                } else if (k == 36) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 95) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        }
    }
    for (int k = 0; k < 60; ++k)
    {
        printf("- ") ;
    }
}

void save_label_com()
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    for (int j = 0; j < 6; ++j) {
        if (j == 1) {
            for (int k = 0; k < 96; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 2) {
                    for (int t = 0; t < 6; ++t) {
                        printf("-");
                    }
                } else if (k == 14) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 30) {
                    for (int t = 0; t < 5; ++t) {
                        printf("-");
                    }
                } else if (k == 36) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 95) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        } else if (j == 2) {
            for (int k = 0; k < 90; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 1) {
                    printf("| Edit |");
                } else if (k == 11) {
                    printf("| Remove |");
                } else if (k == 25) {
                    printf("| Add |");
                } else if (k == 30) {
                    printf("| Exit |");
                } else if (k == 89) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        } else if (j == 3) {
            for (int k = 0; k < 96; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 2) {
                    for (int t = 0; t < 6; ++t) {
                        printf("-");
                    }
                } else if (k == 14) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 30) {
                    for (int t = 0; t < 5; ++t) {
                        printf("-");
                    }
                } else if (k == 36) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 95) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        }
    }
    for (int k = 0; k < 60; ++k)
    {
        printf("- ") ;
    }
}

void create_text_view_note(int height ,int width ,int x,int y,char name[] ,char note[])
{
    int len_note = strlen(note) ,a = 0 ;
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    int end_horizontal = x + width+1 , end_vertical = y + height ;
    for (int j = 0; j < 16; ++j)
    {
        if(j >= y && j <= end_vertical)
        {
            if(j == y || j == end_vertical)
            {
                for (int k = 0; k < (119 - (width+1)); ++k)
                {
                    if(k == 0)
                    {
                        printf("-") ;
                    }
                    else if(k == x)
                    {
                        for (int t = 0; t < width+2; ++t)
                        {
                            printf("#") ;
                        }
                    }
                    else if(k == (119 - (width+2)))
                    {
                        printf("-\n") ;
                    }
                    else
                    {
                        printf(" ") ;
                    }
                }
            }
            else if(j == y+1)
            {
                int len_name = strlen(name) ;
                for (int k = 0; k < (119 - (len_name+1) ); ++k)
                {
                    if(k == 0)
                    {
                        printf("-") ;
                    }
                    else if(k == x)
                    {
                        printf("#%s:" , name) ;
                    }
                    else if(k == end_horizontal - len_name - 1)
                    {
                        printf("#") ;
                    }
                    else if(k == (119 - (len_name+2)))
                    {
                        printf("-\n") ;
                    }
                    else
                    {
                        printf(" ") ;
                    }
                }
            }
            else
            {
                for (int k = 0; k < 119; ++k)
                {
                    if(k == 0)
                    {
                        printf("-") ;
                    }
                    else if(k == x || k == end_horizontal)
                    {
                        printf("#");
                    }
                    else if(k > x && k < end_horizontal)
                    {
                        if(a < len_note)
                        {
                            printf("%c" ,note[a++]) ;
                        }
                        else
                        {
                            printf(" ") ;
                        }
                    }
                    else if(k == 118)
                    {
                        printf("-\n") ;
                    }
                    else
                    {
                        printf(" ") ;
                    }
                }
            }
        }
        else
        {
            for (int k = 0; k < 119; ++k)
            {
                if(k == 0)
                {
                    printf("-") ;
                }
                else if(k == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }
            }
        }
    }
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
}

void create_text_com_note()
{
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    for (int j = 0; j < 6; ++j) {
        if (j == 1) {
            for (int k = 0; k < 96; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 2) {
                    for (int t = 0; t < 6; ++t) {
                        printf("-");
                    }
                } else if (k == 14) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 30) {
                    for (int t = 0; t < 5; ++t) {
                        printf("-");
                    }
                } else if (k == 36) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 95) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        } else if (j == 2) {
            for (int k = 0; k < 90; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 1) {
                    printf("| Edit |");
                } else if (k == 11) {
                    printf("| Remove |");
                } else if (k == 25) {
                    printf("| Add |");
                } else if (k == 30) {
                    printf("| Exit |");
                } else if (k == 89) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        } else if (j == 3) {
            for (int k = 0; k < 96; ++k) {
                if (k == 0) {
                    printf("-");
                } else if (k == 2) {
                    for (int t = 0; t < 6; ++t) {
                        printf("-");
                    }
                } else if (k == 14) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 30) {
                    for (int t = 0; t < 5; ++t) {
                        printf("-");
                    }
                } else if (k == 36) {
                    for (int t = 0; t < 8; ++t) {
                        printf("-");
                    }
                } else if (k == 95) {
                    printf("-\n");
                } else {
                    printf(" ");
                }

            }
        }
    }
    for (int k = 0; k < 60; ++k)
    {
        printf("- ") ;
    }
}

void create_label_view_note(int height ,int width ,int x,int y,char name[] ,char note[])
{
    int len_note = strlen(note) ,a = 0 ;
    for (int i = 0; i < 60; ++i)
    {
        printf("- ") ;
    }
    int end_horizontal = x + width+1 , end_vertical = y + height ;
    for (int j = 0; j < 16; ++j)
    {
        if(j >= y && j <= end_vertical)
        {
            if(j == y || j == end_vertical)
            {
                for (int k = 0; k < (119 - (width+1)); ++k)
                {
                    if(k == 0)
                    {
                        printf("-") ;
                    }
                    else if(k == x)
                    {
                        for (int t = 0; t < width+2; ++t)
                        {
                            printf("*") ;
                        }
                    }
                    else if(k == (119 - (width+2)))
                    {
                        printf("-\n") ;
                    }
                    else
                    {
                        printf(" ") ;
                    }
                }
            }
            else if(j == y+1)
            {
                int len_name = strlen(name) ;
                for (int k = 0; k < (119 - (len_name+1) ); ++k)
                {
                    if(k == 0)
                    {
                        printf("-") ;
                    }
                    else if(k == x)
                    {
                        printf("*%s:" , name) ;
                    }
                    else if(k == end_horizontal - len_name - 1)
                    {
                        printf("*") ;
                    }
                    else if(k == (119 - (len_name+2)))
                    {
                        printf("-\n") ;
                    }
                    else
                    {
                        printf(" ") ;
                    }
                }
            }
            else
            {
                for (int k = 0; k < 119; ++k)
                {
                    if(k == 0)
                    {
                        printf("-") ;
                    }
                    else if(k == x || k == end_horizontal)
                    {
                        printf("*") ;
                    }
                    else if(k == 118)
                    {
                        printf("-\n") ;
                    }
                    else if(k > x && k < end_horizontal)
                    {
                        if(a < len_note)
                        {
                            printf("%c" ,note[a++]) ;
                        }
                    }
                    else
                    {
                        printf(" ") ;
                    }
                }
            }
        }
        else
        {
            for (int k = 0; k < 119; ++k)
            {
                if(k == 0)
                {
                    printf("-") ;
                }
                else if(k == 118)
                {
                    printf("-\n") ;
                }
                else
                {
                    printf(" ") ;
                }
            }
        }
    }
    for (int i = 0; i < 60; ++i)
    {
        printf("- ");
    }
}



