/**
 * @file sub64_msg.h
 * 
 * @brief This header file is used to output help/error messages to user.
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 17/11/2023
*/

#ifndef SUB64_MSG_H
#define SUB64_MSG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void argc_err_msg();
void vall_err_msg(char *option);
void not_valid_arg(char *option);
void one_arg_err_msg(char *option);

#endif /* SUB64_MSG_H */