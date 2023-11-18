/**
 * @file export_data.c
 * 
 * @brief This file is used to handle the exportion system.
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 18/11/2023 
*/

#include "sub64_appdata.h"

#define FILE_PATH 256

/**
 * @brief This function is used to handle the exportion system.
*/
#define MAX_FILE_PATH 256
#define MAX_BUFFER_SIZE 512

#include "sub64_appdata.h"

/**
 * @brief Shows the yiffy configurations to user.
*/
void export_data()
{
    char file_path[MAX_FILE_PATH];

    /* Get the home directory of the current user. */
    char *home_directory = getenv("HOME");

    if (home_directory == NULL) 
    {
        //msg
        exit(EXIT_FAILURE);
    }

    /* Create the file path. */
    sprintf(file_path, "%s/.sub64/sub64_data.txt", home_directory);

    FILE *config_file = fopen(file_path, "r");

    if (config_file == NULL)
    {
        //msg
        exit(EXIT_FAILURE);
    }

    char buffer[MAX_BUFFER_SIZE];

    /* Read and print each line of the file. */
    while (fgets(buffer, MAX_BUFFER_SIZE, config_file) != NULL)
    {
        fprintf(stdout, "%s\n", buffer);
    }

    fclose(config_file);
}