/**
 * @file praiselanhlib.h
 * 
 * @brief the header fikle for praiselang
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 13/01/2023
 * @bug no known bugs
*/

/* INCLUDED LIBRARIES */
#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#include "../base64/base64.h"

/* FUNCTIONS */
bool argVerify(int argc, char *firstArgument);

/* MESSAGE FUNCTIONS */
void wrongArgumentsMessage();
void secondArgumentMissingMessage();
void badArgcMessage(int argc);