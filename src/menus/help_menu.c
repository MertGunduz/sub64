/**
 * @file help_menu.c
 * 
 * @brief This file is used to show general information about sub64.
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 17/11/2023
*/

#include "sub64_menus.h"

/**
 * @brief This function shows general informatiuon about sub64.
*/
void help_menu()
{
    fprintf(stdout, "usage: sub64 [OPTION]\n");
    fprintf(stdout, "encrypt/decrypt text or files via base64/random substitution\n\n");

    fprintf(stdout, "sub64 encrypt/decrypt\n");
    fprintf(stdout, "---------------------\n");
    fprintf(stdout, "--encrypt \"[TEXT]\"  encrypts the given text\n");
    fprintf(stdout, "--decrypt \"[TEXT]\"  decrypts the given text\n\n");

    fprintf(stdout, "sub64 data import/export\n");
    fprintf(stdout, "------------------------\n");
    fprintf(stdout, "--import \"[DATA]\"   imports the data\n");
    fprintf(stdout, "--export            exports the data\n\n");

    fprintf(stdout, "yiffy information menu arguments\n");
    fprintf(stdout, "--------------------------------\n");
    fprintf(stdout, "--help              outputs the help menu\n"); 
    fprintf(stdout, "--version           outputs the version menu\n");
    fprintf(stdout, "--github            outputs the github menu\n");
    fprintf(stdout, "--docs              outputs the website menu\n\n");
}