/**
 * @file badArgcMessage.c
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
void badArgcMessage(int argc)
{
    fprintf(stdout, "praiselang: please enter the arguments correctly\n");
    fprintf(stdout, "praiselang: prompted total arguments: %d\n", argc - 1);
    fprintf(stdout, "praiselang: try \'praiselang --help\' for more information\n");
}