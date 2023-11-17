/**
 * @file argc_err_msg.c
 * 
 * @brief Gives information when user enters more or less parameters than the requested format. 
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 11/17/2023
*/

#include "sub64_msg.h"

void argc_err_msg()
{
    fprintf(stderr, "sub64: please enter the commands in the requested format.\n");
    fprintf(stderr, "sub64: prompt \"man sub64\" or \"sub64 --help\" to read the user manual.\n");
}