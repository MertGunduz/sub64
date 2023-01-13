/**
 * @file githubMenu.c
 * 
 * @brief prints github source code related information
 *
 * @author Mehmet Mert Gunduz
 * 
 * @date 13/01/2023
 * @bug no known bugs
*/

#include "praiselanglib.h"

/// @brief prints github source code related information
void githubMenu()
{
    fprintf(stdout, "https://github.com/MertGunduz/praiselang\n\n");
    fprintf(stdout, "contributing to praiselang:\n");
    fprintf(stdout, "open issues: https://github.com/MertGunduz/praiselang/issues/new\n");
    fprintf(stdout, "solve issues and pull request: https://github.com/MertGunduz/praiselang/issues\n");
}