/**
 * @file wrongArgumentsMessage.c
 * 
 * @brief prints information about wrong arguments
 *
 * @author Mehmet Mert Gunduz
 * 
 * @date 13/01/2023
 * @bug no known bugs
*/

#include "praiselanglib.h"

/// @brief prints information about wrong arguments
void wrongArgumentsMessage()
{
    fprintf(stdout, "praiselang: invalid argument, please enter valid arguments\n");
    fprintf(stdout, "praiselang: try \'praiselang --help\' for more information\n");
}