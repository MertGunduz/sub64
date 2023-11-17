#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool verify_args(int total_args, char *argument);

char *two_arg_commands[] = {"--encrypt", "--decrypt", "--generate-key"};
char *one_arg_commands[] = {"--export-key", "--import-key", "--help", "--website", "--github", "--version", "--config"};

int main(int argc, char *argv[])
{
    if (verify_args(argc, argv[1]))
    {

    }
}

/**
 * @brief This function is used to verify wanted argument count and argument.
 * 
 * @param total_args The total arguments passed by user. 
 * @param argument The main option passed by user.
*/
bool verify_args(int total_args, char *argument)
{
    if (total_args == 2)
    {
        for (size_t i = 0; i < sizeof(one_arg_commands) / sizeof(one_arg_commands[0]); i++)
        {
            fprintf(stdout, "%s\n", one_arg_commands[i]);

            if (strcmp(one_arg_commands[i], argument) == 0)
            {
                fprintf(stdout, "nice :)");
            }
        }
    }
    else if (total_args == 3)
    {
        for (size_t i = 0; i < sizeof(two_arg_commands) / sizeof(two_arg_commands[0]); i++)
        {
            fprintf(stdout, "%s\n", two_arg_commands[i]);

            if (strcmp(two_arg_commands[i], argument) == 0)
            {
                fprintf(stdout, "nice :)");
            }
        }
    }
    else
    {
        //msg you prompted ... arguments
    }
    
    return EXIT_FAILURE;
}