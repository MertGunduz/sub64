/**
 * @file helpMenu.c
 * 
 * @brief prints a help menu for praiselang
 *
 * @author Mehmet Mert Gunduz
 * 
 * @date 13/01/2023
 * @bug no known bugs
*/

#include "praiselanglib.h"

/// @brief prints a help menu for praiselang
void helpMenu()
{
    fprintf(stdout, "usage: praiselang [OPTION]\n");
    fprintf(stdout, "a secure text encryption/decryption tool\n\n");
    fprintf(stdout, "options with arguments\n");
    fprintf(stdout, "-e, --encrypt [TEXT]   encrypts the text\n");
    fprintf(stdout, "-d, --decrypt [TEXT]   decrypts the text\n\n");
    fprintf(stdout, "options without arguments\n");
    fprintf(stdout, "-h, --help             outputs a help menu\n");
    fprintf(stdout, "-g, --github           outputs github url\n");
    fprintf(stdout, "-v, --version          outputs the version\n\n");
    fprintf(stdout, "issues and bugs related to praiselang\n");
    fprintf(stdout, "open an issue: https://github.com/MertGunduz/praiselang/issues/new\n");
}