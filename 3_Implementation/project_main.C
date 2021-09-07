/**
 * @file MAIN.C
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "src/panel.c"

int main()
{
    while (1)
    {
        printf("\n\t\t\t   1.Student panel \n\t\t\t   2.Admin panel \n\t\t\t   3.Exit \n\t\t\t   Option:");
        char input;
        scanf(" %c", &input);

        switch (input)
        {
        case '1':
            studentPanel();
            break;
        case '2':
            adminPanel();
            break;
        case '3':
            return 0;
        default:
            printf("\nInvalid option");
        }
    }
    return 0;
}
