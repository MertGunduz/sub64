/**
 * @file one_arg_err_msg.c
 * 
 * @brief Gives error information when user enters two command by using no-value taking command. 
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 11/17/2023
*/

#include "sub64_msg.h"

void one_arg_err_msg(char *option)
{
    fprintf(stderr, "sub64: \"%s\" is a one parameter/argument using command in sub64. Please delete the second value and try again.\n", option);
    fprintf(stderr, "sub64: prompt \"man sub64\" or \"sub64 --help\" to read the user manual.\n");
}