/**
 * @file vall_err_msg.c
 * 
 * @brief Gives error information when user didn't enter the second value of two_argument_command. 
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 11/17/2023
*/

#include "sub64_msg.h"

void vall_err_msg(char *option)
{
    fprintf(stderr, "sub64: \"%s\" is a two parameter command, please use command in the requested format.\n", option);
    fprintf(stderr, "sub64: prompt \"man sub64\" or \"sub64 --help\" to read the user manual.\n");
}