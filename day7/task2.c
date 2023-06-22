#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void convertToUpper(FILE *source, FILE *destination);
void convertToLower(FILE *source, FILE *destination);
void convertToSentenceCase(FILE *source, FILE *destination);

int main(int argc, char *argv[])
 {
    if (argc < 3)
	 {
        printf("Insufficient arguments. Usage: ./cp <option> <source-file> <destination-file>\n");
        return 1;
    }

    char *option = argv[1];
    char *sourceFileName = argv[2];
    char *destinationFileName = argv[3];

    FILE *sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL)
	 {
        printf("Unable to open the source file.\n");
        return 1;
    }

    FILE *destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) 
	{
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    if (strcmp(option, "-u") == 0)
	 {
        convertToUpper(sourceFile, destinationFile);
    } else if (strcmp(option, "-l") == 0) 
	{
        convertToLower(sourceFile, destinationFile);
    } else if (strcmp(option, "-s") == 0)
	 {
        convertToSentenceCase(sourceFile, destinationFile);
    } else 
	{
        char ch;
        while ((ch = fgetc(sourceFile)) != EOF)
		 {
            fputc(ch, destinationFile);
        }
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}

void convertToUpper(FILE *source, FILE *destination)
 {
    char ch;
    while ((ch = fgetc(source)) != EOF)
	 {
        fputc(toupper(ch), destination);
    }
}

void convertToLower(FILE *source, FILE *destination)
 {
    char ch;
    while ((ch = fgetc(source)) != EOF)
	 {
        fputc(tolower(ch), destination);
    }
}

void convertToSentenceCase(FILE *source, FILE *destination)
 {
    char ch;
    int firstCharInSentence = 1;
    while ((ch = fgetc(source)) != EOF) 
	{
        if (firstCharInSentence && isalpha(ch))
		 {
            fputc(toupper(ch), destination);
            firstCharInSentence = 0;
        } else {
            fputc(tolower(ch), destination);
        }

        if (ch == '.' || ch == '?' || ch == '!') 
		{
            firstCharInSentence = 1;
        }
    }
}

