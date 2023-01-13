/**
 * @file praiselanhlib.h
 * 
 * @brief the header file for praiselang
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

/* CONTROL FUNCTIONS */
bool argVerify(int argc, char *firstArgument);

/* MENU FUNCTIONS */
void githubMenu();
void versionMenu();

/* MESSAGE FUNCTIONS */
void wrongArgumentsMessage();
void secondArgumentMissingMessage();
void badArgcMessage(int argc);