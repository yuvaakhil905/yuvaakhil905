#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int points = 0;

    // Input the character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert to lowercase to handle both uppercase and lowercase vowels
    ch = tolower(ch);

    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        points = 5;
        printf("You entered a vowel. Points: 5\n");
    }
    // Check if the character is a digit (number)
    else if (ch >= '0' && ch <= '9') {
        points = 10;
        printf("You entered a number. Points: 10\n");
    }
    // Any other character
    else {
        points = 0;
        printf("You entered a consonant or special character. Points: 0\n");
    }

    // Display the total points
    printf("Total Points Scored: %d\n", points);

    return 0;
}
