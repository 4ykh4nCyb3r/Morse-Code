#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Here I wrote introductory information about my program
    printf("Latin<->Morse converter\n");
    printf("This program is designed to convert normal text written with Latin characters to Morse code and vica-versa!\n");
    printf("Here is the menu:\n");
    printf("'e' ---> Encode(Latin to Morse)\n'd' ---> Decode(Morse to Latin)\n's' ---> Statistics(number of Morse and Latin characters at the given instance)\n' ' ---> EXIT\n");
    //************
    //here I declare a variable to assess whether user want to use the program or not
    int ch;
   printf("Do you want to start? (yes --> 1, no --> 0)\n");
    scanf("%d", &ch);

// Consume the newline character left in the input buffer
    while (getchar() != '\n');

    if (ch == 0) {
        printf("Program terminates...");
        exit(0);
    }
    printf("Great! Let's start:)!\n");
    //from this point I learned that user want to proceed

    while(1)
    {
        char choice;
        printf("Please enter your choice:");
        scanf(" %c", &choice);
        while (getchar() != '\n');
        if(choice == ' ')
        {
        printf("Program terminates... See you soon!");
        exit(0);
        }
        if(choice == 'e')
        {
            char* text = (char*)malloc(10000);
            if(text == NULL)
            {
                printf("Error occured!");
                exit(0);
            }

            printf("Enter text:");
            // Use fgets to read a line of input and prevent buffer overflow
            if (fgets(text, 10000, stdin) == NULL) {
                printf("Error reading input!");
                free(text);
                exit(0);
            }

        // Remove the newline character if it exists
        size_t len = strlen(text);
        if (len > 0 && text[len - 1] == '\n') {
            text[len - 1] = '\0';
        }
            for(int i = 0; i<len; i++)
            {
                switch(text[i])
                {
                case 'A':
                case 'a':
                    printf(".- ");
                    break;
                case 'B':
                case 'b':
                    printf("-... ");
                    break;
                case 'C':
                case 'c':
                    printf("-.-. ");
                    break;
                case 'D':
                case 'd':
                    printf("-.. ");
                    break;
                case 'E':
                case 'e':
                    printf(". ");
                    break;
                case 'F':
                case 'f':
                    printf("..-. ");
                    break;
                case 'G':
                case 'g':
                    printf("--. ");
                    break;
                case 'H':
                case 'h':
                    printf(".... ");
                    break;
                case 'I':
                case 'i':
                    printf(".. ");
                    break;
                case 'J':
                case 'j':
                    printf(".--- ");
                    break;
                case 'K':
                case 'k':
                    printf("-.- ");
                    break;
                case 'L':
                case 'l':
                    printf(".-.. ");
                    break;
                case 'M':
                case 'm':
                    printf("-- ");
                    break;
                case 'N':
                case 'n':
                    printf("-. ");
                    break;
                case 'O':
                case 'o':
                    printf("--- ");
                    break;
                case 'P':
                case 'p':
                    printf(".--. ");
                    break;
                case 'Q':
                case 'q':
                    printf("--.- ");
                    break;
                case 'R':
                case 'r':
                    printf(".-. ");
                    break;
                case 'S':
                case 's':
                    printf("... ");
                    break;
                case 'T':
                case 't':
                    printf("- ");
                    break;
                case 'U':
                case 'u':
                    printf("..- ");
                    break;
                case 'V':
                case 'v':
                    printf("...- ");
                    break;
                case 'W':
                case 'w':
                    printf(".-- ");
                    break;
                case 'X':
                case 'x':
                    printf("-..- ");
                    break;
                case 'Y':
                case 'y':
                    printf("-.-- ");
                    break;
                case 'Z':
                case 'z':
                    printf("--.. ");
                    break;
                case '1':
                    printf(".---- ");
                    break;
                case '2':
                    printf("..--- ");
                    break;
                case '3':
                    printf("...-- ");
                    break;
                case '4':
                    printf("....- ");
                    break;
                case '5':
                    printf("..... ");
                    break;
                case '6':
                    printf("-.... ");
                    break;
                case '7':
                    printf("--... ");
                    break;
                case '8':
                    printf("---.. ");
                    break;
                case '9':
                    printf("----. ");
                    break;
                case '0':
                    printf("----- ");
                    break;
                case ' ':
                    printf(" ");
                    break;

                }
            }
            printf("\n");
            free(text);




        }




    }


    return 0;
}
