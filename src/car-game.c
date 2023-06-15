#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void help();

int main(void) {
  printf("Welcome to Car game. Type \"help\" to get instructions.\n");

  bool started = false;
  char *command = malloc(100);

  while (true) {
    printf(">> ");
    scanf("%[^\n]%*c", command);

    // `start` block
    if (strcmp(command, "start") == 0) {
      if (started) {
        printf("Hey! Car is already started.\n");
      } else {
        printf("Car is started...\n");
        started = true;
      }
    }

    // `stop` block
    else if (strcmp(command, "stop") == 0) {
      if (started) {
        printf("Car is stopped.\n");
        started = false;
      } else {
        printf("Hey! Car is already stopped.\n");
      }
    }

    // `quit` block
    else if (strcmp(command, "quit") == 0) {
      printf("Thanks for playing! :)\n");
      free(command);
      break;
    }

    // `help` block
    else if (strcmp(command, "help") == 0) {
      help();
    }

    // error block
    else {
      printf("Sorry, I didn't understand it :(\n");
    }
  }

  return 0;
}

void help() {
  char *messages[] = {"",

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
