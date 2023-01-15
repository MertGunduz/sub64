/**
 * @file praiseDecrypt.c
 * 
 * @brief decrypts the given praiselang string 
 *
 * @author Mehmet Mert Gunduz
 * 
 * @date 15/01/2023
 * @bug no known bugs
*/

#include "praiselanglib.h"

/// @brief decrypts the given string with praiselang algorithm
/// @paragraph data
void praiseDecrypt(char *data)
{
    /* STRING */
    char *praiseDecryptedData = (char*)malloc(sizeof(char) * strlen(data) * 25); 
    char *readerString = (char*)malloc(sizeof(char) * 25);
    bool firstRead = true;
    int rCt = 0;

    /* DECRYPTING BASE64 */
    base64_decode(data, strlen(data), praiseDecryptedData);

    praiseDecryptedData[strlen(praiseDecryptedData)] = '\0';

    /* WRITING DATA */
    for (int i = 0; i < strlen(praiseDecryptedData); i++)
    {
        if (firstRead)
        {
            readerString[rCt] = praiseDecryptedData[i];
            rCt++;
            firstRead = false;
            continue;
        }

        if (!isupper(praiseDecryptedData[i]) && praiseDecryptedData[i + 1] != '\0')
        {
            readerString[rCt] = praiseDecryptedData[i];
            rCt++;
        }
        else if (isupper(praiseDecryptedData[i]) || praiseDecryptedData[i + 1] == '\0')
        {
            if (praiseDecryptedData[i + 1] == '\0')
            {
                readerString[rCt++] = praiseDecryptedData[strlen(praiseDecryptedData) - 1];
            }

            readerString[rCt++] = '\0';

            for (int j = 0; j <= 127; j++)
            {
                if (strcmp(readerString, praiseArray[j]) == 0)
                {
                    fprintf(stdout, "%c", j + 1);
                }
            }

            /* UNSET DATA */
            free(readerString);
            rCt = 0;
            firstRead = true;

            /* REALLOC */
            readerString = (char*)malloc(sizeof(char) * 25);

            /* DECREASE I BY 1 */
            i--;
        }
    }

    /* ADDING SPACE */
    fprintf(stdout, "\n");

    /* FREEING DATA */
    free(praiseDecryptedData);
}