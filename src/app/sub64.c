/**
 * @file sub64.c
 * 
 * @brief This file is the main application file, provides command option check and validity.
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 17/11/2023
*/

#include <unistd.h>
#include <stdbool.h>

#include "../msg/sub64_msg.h"

bool verify_args(int total_args, char *argument);

char *two_arg_commands[] = {"--encrypt", "--decrypt", "--generate-key"};
char *one_arg_commands[] = {"--export-key", "--import-key", "--help", "--website", "--github", "--version", "--config"};

int main(int argc, char *argv[])
{
    if (verify_args(argc, argv[1]))
    {
        char *option = argv[1];

        fprintf(stdout, "%s\n", option);
    }
}

/**
 * @brief This function is used to verify wanted argument count and argument.
 *
 * First it checks how many commands prompted by the user (argc). It can only process two or three argument count commands.
 * If it has got more than 3, less than 2 argc, it will show some error message to user. 
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
            if (strcmp(one_arg_commands[i], argument) == 0)
            {                
                return true; 
            }
        }

        for (size_t i = 0; i < sizeof(two_arg_commands) / sizeof(two_arg_commands[0]); i++)
        {
            if (strcmp(two_arg_commands[i], argument) == 0)
            {
                vall_err_msg(argument);
                return false;
            }
        }

        not_valid_arg(argument);
        return false;
    }
    else if (total_args == 3)
    {
        for (size_t i = 0; i < sizeof(one_arg_commands) / sizeof(one_arg_commands[0]); i++)
        {
            if (strcmp(one_arg_commands[i], argument) == 0)
            {
                one_arg_err_msg(argument);
                return false;
            }
        }

        for (size_t i = 0; i < sizeof(two_arg_commands) / sizeof(two_arg_commands[0]); i++)
        {
            if (strcmp(two_arg_commands[i], argument) == 0)
            {                
                return true; 
            }
        }

        not_valid_arg(argument);
        return false;
    }
    else
    {
        argc_err_msg();
    }
    
    return false;
}