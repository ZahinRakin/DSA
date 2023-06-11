#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_LENGTH 100

void checkTypingSpeed();

int main() {
    printf("Welcome to Typing Speed Test!\n");
    printf("Type the given sentence and press enter:\n");

    checkTypingSpeed();

    return 0;
}

void checkTypingSpeed() {
    char sentence[MAX_LENGTH];
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character from the input
    sentence[strcspn(sentence, "\n")] = '\0';

    printf("Type the sentence:\n");

    // Measure the time taken to type the sentence
    clock_t start = clock();

    char typedSentence[MAX_LENGTH];
    fgets(typedSentence, sizeof(typedSentence), stdin);

    clock_t end = clock();
    double timeTaken = (double)(end - start) / CLOCKS_PER_SEC;

    // Remove the newline character from the typed sentence
    typedSentence[strcspn(typedSentence, "\n")] = '\0';

    // Compare the typed sentence with the original sentence
    if (strcmp(typedSentence, sentence) == 0) {
        printf("Congratulations! You typed the sentence correctly.\n");
        printf("Time taken: %.2f seconds\n", timeTaken);
        double typingSpeed = (strlen(sentence) / 5) / timeTaken; // Assuming an average word length of 5 characters
        printf("Typing speed: %.2f words per minute\n", typingSpeed * 60);
    } else {
        printf("Oops! You made a mistake while typing.\n");
        printf("The correct sentence was: %s\n", sentence);
    }
}
