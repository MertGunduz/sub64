/**
 * @file versionMenu.c
 * 
 * @brief prints praiselang version related information
 *
 * @author Mehmet Mert Gunduz
 * 
 * @date 13/01/2023
 * @bug no known bugs
*/

#include "praiselanglib.h"

/// @brief prints praiselang version related information
void versionMenu()
{
    fprintf(stdout, "praiselang version 1.0.0\n");
    fprintf(stdout, "license GPL 3.0: GNU GPL version 3 https://gnu.org/licenses/gpl.html\n");
    fprintf(stdout, "this is a free software: you are free to change and redistribute it.\n");
    fprintf(stdout, "there is no warranty, to the extent permitted by law.\n\n");
    fprintf(stdout, "developed by Mehmet Mert Gunduz.\n");
}