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
					default:
						break;
				}	
				
				textArray++;		
			}
			printf("\n");
		}
		else if (strcmp(processType, "-d") == 0)
		{
			
		}
	}
	else 
	{
		printf("|----------------------------|\n");
		printf("| Please Enter CLI Arguments |\n");
		printf("|----------------------------|\n");
	}
}
