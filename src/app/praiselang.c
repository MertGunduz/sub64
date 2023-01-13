/**
 * @file praiselang.c
 * 
 * @brief the main application file of praiselang
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 13/01/2023
 * @bug no known bugs
*/

#include "../praiselanglib/praiselanglib.h"

void main(int argc, char *argv[])
{
	if (argVerify(argc, argv[1]))
    {
        if (strcmp(argv[1], "-e") == 0 || strcmp(argv[1], "--encrypt") == 0)
        {
            fprintf(stdout, "encrypt menu");
        }
        else if (strcmp(argv[1], "-d") == 0 || strcmp(argv[1], "--decrypt") == 0)
        {
            fprintf(stdout, "decrypt menu");
        }
        else if (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0)
        {
            fprintf(stdout, "version menu");
        }
        else if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
        {
            fprintf(stdout, "help menu");
        }
        else if (strcmp(argv[1], "-g") == 0 || strcmp(argv[1], "--github") == 0)
        {
            fprintf(stdout, "github menu");
        }
    }
}