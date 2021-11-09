#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if (argc == 4)
	{
		// CLI Argument Data Def
		int textLength = atoi(argv[1]);
		char *textArray = (char*)malloc(sizeof(char) * textLength + 1);
		char processType[10];
		strcpy(textArray, (char*)argv[2]);
		strcpy(processType, argv[3]);

		// Upper Characters (Encryption System)
		char aBigENC[] = "chemosh";
		char bBigENC[] = "haborym";
		char cBigENC[] = "mastema";
		char dBigENC[] = "midgard";
		char eBigENC[] = "shaitan";
		char fBigENC[] = "sekhmet";
		char gBigENC[] = "abaddon";
		char hBigENC[] = "alastor";
		char iBigENC[] = "halphas";
		char jBigENC[] = "incubus";
		char kBigENC[] = "gramory";
		char lBigENC[] = "krampus";
		char mBigENC[] = "kukuduh";
		char nBigENC[] = "leviath";
		char oBigENC[] = "malphas";
		char pBigENC[] = "maricha";
		char qBigENC[] = "lucifer";
		char rBigENC[] = "astarte";
		char sBigENC[] = "olelbis";
		char tBigENC[] = "mazdean";
		char uBigENC[] = "apolyon";
		char vBigENC[] = "ahriman";
		char wBigENC[] = "metztli";
		char xBigENC[] = "hiblish";
		char yBigENC[] = "hecates";
		char zBigENC[] = "korpuso";

		// Lower Characters (Encryption System)
		char aENC[] = "abraham";
		char bENC[] = "ishmael";
		char cENC[] = "manahen";
		char dENC[] = "deborah";
		char eENC[] = "gabriel";
		char fENC[] = "ezekiel";
		char gENC[] = "micaiah";
		char hENC[] = "norbert";
		char iENC[] = "richard";
		char jENC[] = "michael";
		char kENC[] = "vincent";
		char lENC[] = "allegra";
		char mENC[] = "tabitha";
		char nENC[] = "roxanne";
		char oENC[] = "bethany";
		char pENC[] = "abigail";
		char qENC[] = "bernice";
		char rENC[] = "juliana";
		char sENC[] = "bridget";
		char tENC[] = "aaliyah";
		char uENC[] = "aayushi";
		char vENC[] = "abishek";
		char wENC[] = "abrasha";
		char xENC[] = "absolom";
		char yENC[] = "adalynn";
		char zENC[] = "aldrich";

		// Space & Numbers (Encryption System)
		char spcENC[] = "zachary"; // Space
		char zroENC[] = "jehovah"; // 0 Char
		char oneENC[] = "shaddai"; // 1 Char
		char twoENC[] = "buddhas"; // 2 Char
		char thrENC[] = "oktavie"; // 3 Char
		char furENC[] = "exploit"; // 4 Char
		char fveENC[] = "praiser"; // 5 Char
		char sixENC[] = "prelude"; // 6 Char
		char svnENC[] = "theorbo"; // 7 Char
		char egtENC[] = "lutican"; // 8 Char
		char nneENC[] = "vihuela"; // 9 Char
		
		// Characters (Encryption System)
		char apsENC[] = "artemis"; // Apostrophe (')
		char dotENC[] = "firdaws"; // Dot (.)
		char cmmENC[] = "arcduke"; // Comma (,)
		char colENC[] = "mokosha"; // Colon (:)
		char sclENC[] = "nirvana"; // Semicolon (;)
		char qstENC[] = "galilee"; // Question Mark (?)
		char excENC[] = "edicule"; // Exclamation Mark (!)
		char qtsENC[] = "baptist"; // Quoatation Mark (")
		
		// Analysis
		char word[9];
		int repeater = 0;
		int plusPermission; // 1 (Increase), 0 (Don't Increase)
		
		// UI Design
		printf(" ██████╗ ██████╗  █████╗ ██╗███████╗███████╗██╗      █████╗ ███╗   ██╗ ██████╗  \n");
		printf(" ██╔══██╗██╔══██╗██╔══██╗██║██╔════╝██╔════╝██║     ██╔══██╗████╗  ██║██╔════╝  \n");
		printf(" ██████╔╝██████╔╝███████║██║███████╗█████╗  ██║     ███████║██╔██╗ ██║██║  ███╗ \n");
		printf(" ██╔═══╝ ██╔══██╗██╔══██║██║╚════██║██╔══╝  ██║     ██╔══██║██║╚██╗██║██║   ██║ \n");
		printf(" ██║     ██║  ██║██║  ██║██║███████║███████╗███████╗██║  ██║██║ ╚████║╚██████╔╝ \n");
		printf(" ╚═╝     ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚══════╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝ ╚═════╝  \n");

		printf("█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗\n");
		printf("╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝\n\n");
	
		if (strcmp(processType, "-e") == 0)
		{	
			printf("Encrypted Text --> ");	
			
			for(int i = 0; i < textLength; i++)
			{
				char analysisCharacter = *textArray;
				
				switch (analysisCharacter)
				{
					case 'a':
						printf("%s", aENC);
						break;
					case 'b':
						printf("%s", bENC);
						break;
					case 'c':
						printf("%s", cENC);
						break;
					case 'd':
						printf("%s", dENC);
						break;
					case 'e':
						printf("%s", eENC);
						break;
					case 'f':
						printf("%s", fENC);
						break;
					case 'g':
						printf("%s", gENC);
						break;
					case 'h':
						printf("%s", hENC);
						break;
					case 'i':
						printf("%s", iENC);
						break;
					case 'j':
						printf("%s", jENC);
						break;
					case 'k':
						printf("%s", kENC);
						break;
					case 'l':
						printf("%s", lENC);
						break;
					case 'm':
						printf("%s", mENC);
						break;
					case 'n':
						printf("%s", nENC);
						break;
					case 'o':
						printf("%s", oENC);
						break;
					case 'p':
						printf("%s", pENC);
						break;
					case 'q':
						printf("%s", qENC);
						break;
					case 'r':
						printf("%s", rENC);
						break;
					case 's':
						printf("%s", sENC);
						break;
					case 't':
						printf("%s", tENC);
						break;
					case 'u':
						printf("%s", uENC);
						break;
					case 'v':
						printf("%s", vENC);
						break;
					case 'w':
						printf("%s", wENC);
						break;
					case 'x':
						printf("%s", xENC);
						break;
					case 'y': 
						printf("%s", yENC);
						break;
					case 'z':
						printf("%s", zENC);
						break;
					case 'A': 
						printf("%s", aBigENC);
						break;
					case 'B':
						printf("%s", bBigENC);
						break;
					case 'C':
						printf("%s", cBigENC);
						break;
					case 'D':
						printf("%s", dBigENC);
						break;
					case 'E':
						printf("%s", eBigENC);
						break;
					case 'F':
						printf("%s", fBigENC);
						break;
					case 'G':
						printf("%s", gBigENC);
						break;
					case 'H':
						printf("%s", hBigENC);
						break;
					case 'I':
						printf("%s", iBigENC);
						break;
					case 'J':
						printf("%s", jBigENC);
						break;
					case 'K':
						printf("%s", kBigENC);
						break;
					case 'L':
						printf("%s", lBigENC);
						break;
					case 'M':
						printf("%s", mBigENC);
						break;
					case 'N':
						printf("%s", nBigENC);
						break;
					case 'O':
						printf("%s", oBigENC);
						break;
					case 'P':
						printf("%s", pBigENC);
						break;
					case 'Q':
						printf("%s", qBigENC);
						break;
					case 'R':
						printf("%s", rBigENC);
						break;
					case 'S':
						printf("%s", sBigENC);
						break;
					case 'T':
						printf("%s", tBigENC);
						break;
					case 'U':
						printf("%s", uBigENC);
						break;
					case 'V':
						printf("%s", vBigENC);
						break;
					case 'W':
						printf("%s", wBigENC);
						break;
					case 'X':
						printf("%s", xBigENC);
						break;
					case 'Y':
						printf("%s", yBigENC);
						break;
					case 'Z':
						printf("%s", zBigENC);
						break;
					case '0':
						printf("%s", zroENC);
						break;
					case '1':
						printf("%s", oneENC);
						break;
					case '2':
						printf("%s", twoENC);
						break;
					case '3':
						printf("%s", thrENC);
						break;
					case '4':
						printf("%s", furENC);
						break;
					case '5':
						printf("%s", fveENC);
						break;
					case '6':
						printf("%s", sixENC);
						break;
					case '7':
						printf("%s", svnENC);
						break;
					case '8':
						printf("%s", egtENC);
						break;
					case '9':
						printf("%s", nneENC);
						break;
					case ' ':
						printf("%s", spcENC);
						break;
					default:
						printf("00000000");
						break;
				}			
				
				textArray++;
			}
			
			printf("\n");
		}
		else if (strcmp(processType, "-d") == 0)
		{
			printf("Encrypted Text --> ");
			
			for (int i = 0; i < textLength; i++)
			{
				word[repeater] = textArray[i];
				plusPermission = 1;
				
				if (strlen(word) == 7 && word[0] != '0' && word[1] != '0' && word[2] != '0' && word[3] != '0' && word[4] != '0' && word[5] != '0' && word[6] != '0')
				{
					if (strcmp(word, aENC) == 0)
					{
						printf("a");
					}
					else if (strcmp(word, bENC) == 0)
					{
						printf("b");
					}
					else if (strcmp(word, cENC) == 0)
					{
						printf("c");
					}
					else if (strcmp(word, dENC) == 0)
					{
						printf("d");
					}
					else if (strcmp(word, eENC) == 0)
					{
						printf("e");
					}
					else if (strcmp(word, fENC) == 0)
					{
						printf("f");
					}
					else if (strcmp(word, gENC) == 0)
					{
						printf("g");
					}
					else if (strcmp(word, hENC) == 0)
					{
						printf("h");
					}
					else if (strcmp(word, iENC) == 0)
					{
						printf("i");
					}
					else if (strcmp(word, jENC) == 0)
					{
						printf("j");
					}
					else if (strcmp(word, kENC) == 0)
					{
						printf("k");
					}
					else if (strcmp(word, lENC) == 0)
					{
						printf("l");
					}
					else if (strcmp(word, mENC) == 0)
					{
						printf("m");
					}
					else if (strcmp(word, nENC) == 0)
					{
						printf("n");
					}
					else if (strcmp(word, oENC) == 0)
					{
						printf("o");
					}
					else if (strcmp(word, pENC) == 0)
					{
						printf("p");
					}
					else if (strcmp(word, qENC) == 0)
					{
						printf("q");
					}
					else if (strcmp(word, rENC) == 0)
					{
						printf("r");
					}
					else if (strcmp(word, sENC) == 0)
					{
						printf("s");
					}
					else if (strcmp(word, tENC) == 0)
					{
						printf("t");
					}
					else if (strcmp(word, uENC) == 0)
					{
						printf("u");
					}
					else if (strcmp(word, vENC) == 0)
					{
						printf("v");
					}
					else if (strcmp(word, wENC) == 0)
					{
						printf("w");
					}
					else if (strcmp(word, xENC) == 0)
					{
						printf("x");
					}
					else if (strcmp(word, yENC) == 0)
					{
						printf("y");
					}
					else if (strcmp(word, zENC) == 0)
					{
						printf("z");
					}
					else if (strcmp(word, aBigENC) == 0)
					{
						printf("A");
					}
					else if (strcmp(word, bBigENC) == 0)
					{
						printf("B");
					}
					else if (strcmp(word, cBigENC) == 0)
					{
						printf("C");
					}
					else if (strcmp(word, dBigENC) == 0)
					{
						printf("D");
					}
					else if (strcmp(word, eBigENC) == 0)
					{
						printf("E");
					}
					else if (strcmp(word, fBigENC) == 0)
					{
						printf("F");
					}
					else if (strcmp(word, gBigENC) == 0)
					{
						printf("G");
					}
					else if (strcmp(word, hBigENC) == 0)
					{
						printf("H");
					}
					else if (strcmp(word, iBigENC) == 0)
					{
						printf("I");
					}
					else if (strcmp(word, jBigENC) == 0)
					{
						printf("J");
					}
					else if (strcmp(word, kBigENC) == 0)
					{
						printf("K");
					}
					else if (strcmp(word, lBigENC) == 0)
					{
						printf("L");
					}
					else if (strcmp(word, mBigENC) == 0)
					{
						printf("M");
					}
					else if (strcmp(word, nBigENC) == 0)
					{
						printf("N");
					}
					else if (strcmp(word, oBigENC) == 0)
					{
						printf("O");
					}
					else if (strcmp(word, pBigENC) == 0)
					{
						printf("P");
					}
					else if (strcmp(word, qBigENC) == 0)
					{
						printf("Q");
					}
					else if (strcmp(word, rBigENC) == 0)
					{
						printf("R");
					}
					else if (strcmp(word, sBigENC) == 0)
					{
						printf("S");
					}
					else if (strcmp(word, tBigENC) == 0)
					{
						printf("T");
					}
					else if (strcmp(word, uBigENC) == 0)
					{
						printf("U");
					}
					else if (strcmp(word, vBigENC) == 0)
					{
						printf("V");
					}
					else if (strcmp(word, wBigENC) == 0)
					{
						printf("W");
					}
					else if (strcmp(word, xBigENC) == 0)
					{
						printf("X");
					}
					else if (strcmp(word, yBigENC) == 0)
					{
						printf("Y");
					}
					else if (strcmp(word, zBigENC) == 0)
					{
						printf("Z");
					}
					else if (strcmp(word, spcENC) == 0)
					{
						printf(" ");
					}
					else if (strcmp(word, zroENC) == 0)
					{
						printf("0");
					}
					else if (strcmp(word, oneENC) == 0)
					{
						printf("1");
					}
					else if (strcmp(word, twoENC) == 0)
					{
						printf("2");
					}
					else if (strcmp(word, thrENC) == 0)
					{
						printf("3");
					}
					else if (strcmp(word, furENC) == 0)
					{
						printf("4");
					}
					else if (strcmp(word, fveENC) == 0)
					{
						printf("5");
					}
					else if (strcmp(word, sixENC) == 0)
					{
						printf("6");
					}
					else if (strcmp(word, svnENC) == 0)
					{
						printf("7");
					}
					else if (strcmp(word, egtENC) == 0)
					{
						printf("8");
					}
					else if (strcmp(word, nneENC) == 0)
					{
						printf("9");
					}
					
					word[0] = '0';
					word[1] = '0';
					word[2] = '0';
					word[3] = '0';
					word[4] = '0';
					word[5] = '0';
					word[6] = '0';
					repeater = 0;
					plusPermission = 0;
				}
				if (plusPermission == 1)
				{
					repeater++;
				}
			}
			printf("\n");
		}
	}
	else if (argc == 2)
	{
		if (strcmp(argv[1], "help") == 0 || strcmp(argv[1], "?") == 0)
		{
			printf("|------------------|\n");
			printf("| PRAISELANG GUIDE |\n");
			printf("|------------------|\n\n");
			
			printf("1) TAKE LENGTH COMMAND\n\n");
			printf("How To Use --> ./praiselang.out <\"Text\">\n");
			printf("Example --> ./praiselang.out \"Hello World!\"\n\n");
			
			printf("2) ENCRYPT TEXT COMMAND\n\n");
			printf("Note: Take the length of the text you want to encrypt before the encryption!\n");
			printf("How To Use --> ./praiselang.out <Text Length> <\"Text\"> -e\n");
			printf("Example --> ./praiselang.out 27 \"C is a programming language\" -e\n\n");
			
			printf("3) DECRYPT TEXT COMMAND\n\n");
			printf("Note: Take the length of the text you want to decrypt before the decryption!\n");
			printf("How To Use --> ./praiselang.out <Text Length> <\"Text\"> -d\n");
			printf("Example --> ./praiselang.out 21 \"astartechemoshkukuduh\" -d\n");
		}
		else 
		{
			printf("Text Length --> %d\n", strlen(argv[1]));
		}
	}
	else 
	{
		printf("|----------------------------|\n");
		printf("| Please Enter CLI Arguments |\n");
		printf("|----------------------------|\n");
	}
}
