#include <iostream>
#include <string>
using namespace std;

int main(void) {
  cout << "Welcome to Car game. Type \"help\" to get instructions.\n";

  bool started = false;
  string command;
  string message[] = {"",

                      "Miscellaneous:",
                      "help        - to get this message",
                      "",

                      "Game controls:",
                      "start       - to start the car",
                      "stop        - to stop the car",
                      "quit        - to quit from the game",
                      ""};

  while (true) {
    cout << ">> "; // Prompt
    cin >> command;

    if (command == "start") {
      if (started) {
        cout << "Hey! The car is already started.\n";
      } else {
        cout << "Car is started...\n";
        started = true;
      }
    } else if (command == "stop") {
      if (started) {
        cout << "Car is stopped.\n";
        started = false;
      } else {
        cout << "Hey! Car is already stopped.\n";
      }
    } else if (command == "quit") {
      cout << "Thanks for playing! :)\n";
      break;
    } else if (command == "help") {
      for (int i = 0; i < (sizeof(message) / sizeof(string)); i++) {
        cout << message[i] << '\n';
      }
    } else {
      cout << "Sorry, I didn't understand it :(\n";
    }
  }

  return 0;
}
