/**
 * @file praiseEncrypt.c
 * 
 * @brief encrypts the given string with praiselang algorithm
 *
 * @author Mehmet Mert Gunduz
 * 
 * @date 15/01/2023
 * @bug no known bugs
*/

#include "praiselanglib.h"

/// @brief encrypts the given string with praiselang algorithm
/// @paragraph data
void praiseEncrypt(char *data)
{
    /* STRING */
    char *praiseEncryptedData = (char*)malloc(sizeof(char) * strlen(data) * 25); 
    char *praiseB64EncryptedData = (char*)malloc(sizeof(char) * strlen(data) * 25); 

    /* ENCRYPTING DATA WITH PRAISELANG */
    for (int i = 0; i < strlen(data); i++)
    {
        strcat(praiseEncryptedData, praiseArray[data[i] - 1]);    
    } strcat(praiseEncryptedData, "\0");

    /* ENCRYPTING DATA WITH BASE64 */
    base64_encode(praiseEncryptedData, strlen(praiseEncryptedData), praiseB64EncryptedData);

    /* WRITING DATA */
    fprintf(stdout, "%s\n", praiseB64EncryptedData);

    /* FREEING DATA */
    free(praiseEncryptedData);
    free(praiseB64EncryptedData);
}