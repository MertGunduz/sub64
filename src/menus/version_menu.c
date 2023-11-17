/**
 * @file version_menu.c
 * 
 * @brief This file is used to show version info of sub64.
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 17/11/2023
*/

#include "sub64_menus.h"

/**
 * @brief This function shows the version of sub64.
*/
void version_menu()
{
    fprintf(stdout, "sub64 (cryptographic system) 1.0.0\n\n");
    
    fprintf(stdout, "technical details about sub64\n");
    fprintf(stdout, "-----------------------------\n");
    fprintf(stdout, "gnu gpl version 3 <https://gnu.org/licenses/gpl.html> licensed and free to use.\n");
    fprintf(stdout, "you are free to use, change and redistribute it.\n");
    fprintf(stdout, "there is no warranty, to the extent permitted by law.\n");
}