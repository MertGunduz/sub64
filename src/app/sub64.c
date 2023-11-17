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
#include "../menus/sub64_menus.h"

bool verify_args(int total_args, char *argument);

typedef struct one_command
{
    char *command_text;
    void (*func)();
} sub64_one_command;

typedef struct two_command
{
    char *command_text;
    void (*func)(char *argument);
} sub64_two_command;

static sub64_one_command one_arg_structs[] = 
{
    {"--help", help_menu},
    {"--version", version_menu},
    {"--github", github_menu}
};

/*
static sub64_two_command two_arg_structs[] = 
{

};
*/

char *two_arg_commands[] = {"--encrypt", "--decrypt", "--generate-key"};
char *one_arg_commands[] = {"--export-key", "--import-key", "--help", "--website", "--github", "--version", "--config"};

int main(int argc, char *argv[])
{
    if (verify_args(argc, argv[1]))
    {
        for (size_t i = 0; i < sizeof(one_arg_structs) / sizeof(one_arg_structs[0]); i++)
        {
            if (strcmp(argv[1], one_arg_structs[i].command_text) == 0)
            {
                one_arg_structs[i].func();
            }
        }

        /*for (size_t i = 0; i < sizeof(two_arg_structs) / sizeof(two_arg_structs[0]); i++)
        {
            if (strcmp(argv[1], two_arg_structs[i].command_text) == 0)
            {
                two_arg_structs[i].func(argv[2]);
            }
        }*/
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