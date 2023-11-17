/**
 * @file github_menu.c
 * 
 * @brief This file is used to show project github URL, current issues to the user.
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 17/11/2023
*/

#include "sub64_menus.h"

/**
 * @brief Shows the project github URL, current issues to user.
*/
void github_menu()
{
    fprintf(stdout, "<https://github.com/MertGunduz/sub64>\n\n");

    fprintf(stdout, "contribution and issue creating links\n");
    fprintf(stdout, "-------------------------------------\n");
    fprintf(stdout, "go to <https://github.com/MertGunduz/sub64/issues/new> to open an issue.\n");
    fprintf(stdout, "go to <https://github.com/MertGunduz/sub64/issues> to view issues.\n");
}