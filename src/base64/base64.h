/**
 * @file base64.h
 * 
 * @brief base64 encryption/decryption library (code by Wei Zhicheng)
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 13/01/2023
 * @bug no known bugs
*/

#ifndef BASE64_H
#define BASE64_H

#define BASE64_ENCODE_OUT_SIZE(s) ((unsigned int)((((s) + 2) / 3) * 4 + 1))
#define BASE64_DECODE_OUT_SIZE(s) ((unsigned int)(((s) / 4) * 3))

/*
 * out is null-terminated encode string.
 * return values is out length, exclusive terminating `\0'
 */
unsigned int base64_encode(const unsigned char *in, unsigned int inlen, char *out);

/*
 * return values is out length
 */
unsigned int base64_decode(const char *in, unsigned int inlen, unsigned char *out);

#endif /* BASE64_H */

/*
* code is taken from Zhicheng Wei's base64 repository
*
* repository URL: https://github.com/zhicheng/base64
*/
