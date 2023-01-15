/** 
 * @file praiselanglib.h
 * 
 * @brief the general praiselang library for encrypting and decrypting data
 * 
 * @author Mehmet Mert Gunduz
 * 
 * @date 13/01/2023
 * @version 1.0.0
 * @bug No known bugs.
*/

/* INCLUDED LIBRARIES */
#include "stdio.h"
#include "string.h"
#include "stdbool.h"
#include "stdlib.h"
#include "ctype.h"
#include "../base64/base64.h"

/* CONTROL FUNCTIONS */
bool argVerify(int argc, char *firstArgument);

/* MENU FUNCTIONS */
void praiseEncrypt(char *data);
void praiseDecrypt(char *data);
void githubMenu();
void versionMenu();
void helpMenu();

/* MESSAGE FUNCTIONS */
void wrongArgumentsMessage();
void secondArgumentMissingMessage();
void badArgcMessage(int argc);

/* ASCII-PRAISELANG */
static char *praiseArray[] = 
{
    /*   1  */  /*   2   */  /* 3 */  /*  4 */  /* 5 */  /* 6  */  /*7*/  /*   8   */  /*    9   */
    "Velvello", "Engelbert", "Lieke", "Arella", "Mitra", "Siofra", "Qio", "Baduhenna", "Nehalennia",

    /*  10  */  /* 11 */  /*   12   */  /*13 */  /*  14 */  /* 15  */  /* 16 */  /*  17  */  /*  18 */
    "Burorina", "Exomna", "Garmangabi", "Haeva", "Hariasa", "Hludana", "Hruoda", "Hurstrga", "Nerthus",

    /* 19  */  /* 20 */  /* 21 */  /*   22    */  /* 23  */  /* 24 */  /* 25*/  /*         26       */
    "Tacitus", "Nornes", "Rekwaz", "Sandraudigr", "Tanfana", "Thunar", "Tiwaz", "Vagdavercustisexosen",

    /*      27      */  /*    28    */  /*       29      */  /*        30       */  /*      31      */
    "Vercanaloresoron", "Viradecdisex", "Warnsuloxolaresin", "Alateiviaesioesseon", "Sunucsalliosomus", 

    /*  32  */   /* 33 */   /* 34 */   /* 35 */   /*  36  */  /* 37 */  /* 38 */ /* 39 */  /*  40  */
    "Beelzebub", "Lucifer", "Abbadon", "Accuser", "Apollyon", "Belial", "Satan", "Mammon", "Belphegor",

    /*  41  */  /*  42  */  /*  43  */  /*   44  */  /* 45 */  /* 46 */  /*  47  */   /* 48 */ /* 49 */
    "Asmodeus", "Succubus", "Behemoth", "Leviathan", "Alecto", "Megera", "Ctesiphon", "Minos", "Aeacus",

    /*  50 */  /* 51 */  /* 52 */  /* 53 */  /*  54  */  /* 55 */  /* 56 */  /*57*/  /* 58 */   /*59*/
    "Kafziel", "Samael", "Azazel", "Azrael", "Mahazael", "Oriens", "Paymon", "Egyn", "Amaymon", "Yael",

    /*    60    */  /* 61 */  /* 62 */  /*63*/   /* 64 */  /* 65 */   /* 66 */   /* 67 */  /* 68  */
    "Rhadamanthus", "Ramiel", "Samuel", "Uriel", "Malach", "Raphael", "Michael", "Haniel", "Castiel",

    /* 69*/  /* 70 */   /*  71  */   /* 72 */  /* 73 */  /* 74 */  /*  75  */   /*    76    */  /*77*/
    "Engel", "Orifiel", "Zerachiel", "Kemuel", "Hariel", "Raguel", "Evangelos", "Michelangelo", "Jevo",

    /* 78*/  /* 79 */   /*80*/  /*  81  */   /*   82   */  /*83*/  /* 84 */  /*85*/  /*  86 */  /*  87  */
    "Javan", "Gabriel", "Cael", "Charmeine", "Evangelina", "Dara", "Aniela", "Tien", "Gotzone", "Angelisa",

    /* 88 */  /*  89  */  /*  90  */  /* 91 */  /*  92  */   /* 93 */  /* 94 */  /*  95  */   /*96*/  /*97*/
    "Angela", "Angelina", "Angelica", "Eariel", "Seraphina", "Parisa", "Erelah", "Angelique", "Dina", "Xul",

    /*   98   */  /*99 */  /*  100 */  /*  101   */  /* 102 */  /*103*/  /*104*/  /*105*/  /*106*/   /*  107 */
    "Mariangela", "Laila", "Rosangel", "Megalesius", "Ormenus", "Lycus", "Nicon", "Mimon", "Ariuka", "Ochirone",

    /* 108  */  /*  109  */  /* 110 */  /*  111  */  /* 112 */  /*  113  */  /* 114 */  /* 115*/  /*116 */
    "Astaroth", "Maligenii", "Gressil", "Soneillon", "Carreau", "Carnivale", "Oeillet", "Rosier", "Belias",

    /* 117 */  /* 118 */  /* 119*/  /*   120  */  /*  121  */  /*  122  */  /*123 */  /* 124  */  /*125 */
    "Verrier", "Olivier", "Luvart", "Archangelo", "Michaelis", "Abramelin", "Goetia", "Belfegor", "Tammuz",

    /* 126  */  /*   127   */
    "Infernus", "Arreliarius" 
};