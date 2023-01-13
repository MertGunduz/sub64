/**
 * @file secondArgumentMissingMessage.c
 * 
 * @brief prints information about missing second argument
 *
 * @author Mehmet Mert Gunduz
 * 
 * @date 13/01/2023
 * @bug no known bugs
*/

#include "praiselanglib.h"

/// @brief prints information about missing second argument
void secondArgumentMissingMessage()
{
    fprintf(stdout, "praiselang: second argument missing, please enter the data\n");
    fprintf(stdout, "praiselang: try \'praiselang --help\' for more information\n");
}