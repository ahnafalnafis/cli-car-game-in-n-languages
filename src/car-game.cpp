#include <iostream>
#include <string>
using namespace std;

class Car {
 private:
  bool started = false;
  string helpMessages[9] = {"",

                            "Miscellaneous:",
                            "help        - to get this message",
                            "",

                            "Car controls:",
                            "start       - to start the car",
                            "stop        - to stop the car",
                            "exit        - to exit from the car",
                            ""};

 public:
  void start() {
    if (started) {
      cout << "Hey, car is already started!\n";
    } else {
      started = true;
      cout << "Car is started...\n";
    }
  }

  void stop() {
    if (started) {
      started = false;
      cout << "Car is stopped.\n";
    } else {
      cout << "Hey, car is already stopped!\n";
    }
  }

  void exitCar() {
    if (started) {
      cout << "Hey! You cannot exit while car is running!\n"
           << "First stop the car, then exit.\n";
    } else {
      cout << "Thanks for playing :)\n";
      exit(0);
    }
  }

  void printHelp() {
    for (int i = 0; i < (sizeof(helpMessages) / sizeof(string)); i++) {
      cout << helpMessages[i] << '\n';
    }
  }
};

int main() {
  Car car;
  string command;

  cout << "Welcome to Car game. Type \"help\" to get instructions.\n";

  while (true) {
    cout << ">> ";
    cin >> command;

    if (command == "start")
      car.start();

    else if (command == "stop")
      car.stop();

    else if (command == "help")
      car.printHelp();

    else if (command == "exit")
      car.exitCar();

    else
      cout << "Sorry, I didn't understand it :(\n";
  }

  return 0;
}
