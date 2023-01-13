/**
 * @file argVerify.c
 * 
 * @brief tests the arguments, argument count and returns true (bool) if prompted arguments are true
 *
 * @author Mehmet Mert Gunduz
 * 
 * @date 13/01/2023
 * @bug no known bugs
*/

#include "praiselanglib.h"

bool checkArguments(char *argumentPrompt, int argumentCt, char *arguments[]);

/// @brief checks the argument count and the arguments. returns true if everything is correct, if not returns false
/// @param argc 
/// @param firstArgument 
/// @return true or false
bool argVerify(int argc, char *firstArgument)
{
    /* initializing the arguments and size for =two= argument command */
    char *twoArguments[] = {"-d", "--decrypt", "-e", "--encrypt"};

    /* initializing the arguments and size for =one= argument command */
    char *oneArguments[] = {"-v", "--version", "-g", "--github", "-h", "--help"};
    
    if (argc == 2)
    {
        for (int i = 0; i < 4; i++)
        {
            if (strcmp(firstArgument, twoArguments[i]) == 0)
            {
                secondArgumentMissingMessage();
                return false;
            }
        }

        checkArguments(firstArgument, 6, oneArguments);
    }
    else if (argc == 3)
    {
        checkArguments(firstArgument, 4, twoArguments);
    }
    else
    {
        badArgcMessage(argc);
        return false;
    }
}

/// @brief checks arguments and compares the prompted argument
/// @param argumentPrompt 
/// @param argumentCt 
/// @param arguments 
/// @return true or false
bool checkArguments(char *argumentPrompt, int argumentCt, char *arguments[])
{
    bool isArgumentCorrect;

    for (int i = 0; i < argumentCt; i++)
    {
        if (strcmp(argumentPrompt, arguments[i]) == 0)
        {
            isArgumentCorrect = true;
            break;
        }
    } 

    if (isArgumentCorrect)
    {
        return true;
    }
    else
    {
        wrongArgumentsMessage();
        return false;
    }
}