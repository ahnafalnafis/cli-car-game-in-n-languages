#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void help(); // Prints a help message.

int main(void) {
  printf("Welcome to Car game. Type \"help\" to get instructions.\n");

  bool started = false; // Checks whether car is started or not.
  char *command = malloc(100);

  while (true) {
    printf(">> "); // Prompt
    scanf("%[^\n]%*c", command);

    // Getting rid of case sensitivity.
    for (int i = 0; i < strlen(command); i++) {
      command[i] = tolower(command[i]);
    }

    if (strcmp(command, "start") == 0) { // `start` block
      if (started) {
        printf("Hey! Car is already started.\n");
      } else {
        printf("Car is started...\n");
        started = true;
      }
    } else if (strcmp(command, "stop") == 0) { // `stop` block
      if (started) {
        printf("Car is stopped.\n");
        started = false;
      } else {
        printf("Hey! Car is already stopped.\n");
      }
    } else if (strcmp(command, "quit") == 0) { // `quit` block
      printf("Thanks for playing! :)\n");
      free(command);
      break;
    } else if (strcmp(command, "help") == 0) { // `help` block
      help();
    } else {
      printf("Sorry, I didn't understand it :(\n");
    }
  }

  return 0;
}

void help() {
  char *messages[] = {"", // gets added with a new line and puts a blank line

                      "Miscellaneous:",
                      "help        - to get this message",
                      "",

                      "Game controls:",
                      "start       - to start the car",
                      "stop        - to stop the car",
                      "quit        - to quit from the game",
                      ""};

  int array_size = sizeof(messages) / sizeof(messages[0]);

  for (int i = 0; i < array_size; i++) {
    printf("%s\n", messages[i]);
  }
}
