
#include <stdio.h>

void check_alphabet(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
	{
        printf("%c is an alphabet.\n", c);
        
        char result = c ^ 32;
        printf("XOR with 32: %c\n", result);

        if (c >= 'a' && c <= 'z') 
		{
            printf("Note: Toggling case from lowercase to uppercase.\n");
        } else {
            printf("Note: Toggling case from uppercase to lowercase.\n");
        }
    } 
   
    else {
        printf("%c is not an alphabet.\n", c);
    }
}

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    check_alphabet(c);
    return 0;
}









