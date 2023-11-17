/**
 * @file not_valid_arg.c
 * 
 * @brief Gives error information when user didn't enter a meaningful command. 
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 11/17/2023
*/

#include "sub64_msg.h"

void not_valid_arg(char *option)
{
    fprintf(stderr, "sub64: \"%s\" is not a defined parameter/argument in sub64. Check your parameter/argument and try again.\n", option);
    fprintf(stderr, "sub64: prompt \"man sub64\" or \"sub64 --help\" to read the user manual.\n");
}