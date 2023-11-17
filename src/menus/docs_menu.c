/**
 * @file docs_menu.c
 * 
 * @brief This file is used to show docs URL.
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 17/11/2023
*/

#include "sub64_menus.h"

/**
 * @brief This function is used to show docs URL
*/
void docs_menu()
{
    fprintf(stdout, "<https://mertgunduz.github.io/sub64/>\n\n");
    
    fprintf(stdout, "docs and all code structure\n");
    fprintf(stdout, "---------------------------\n");
    fprintf(stdout, "you can find functions, code pages, structs and all code related information.\n");
    fprintf(stdout, "also before downloading you can check the general guidelines.\n");
}