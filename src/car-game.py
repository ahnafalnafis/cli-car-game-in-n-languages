print('Welcome to Car game. Type "help" to get instructions.')


class Car:
    def __init__(self):
        self.started = False
        self.messages = [
            "",
            "Miscellaneous:",
            "help        - to get this message",
            "",
            "Game controls:",
            "start       - to start the car",
            "stop        - to stop the car",
            "exit        - to exit from the game",
            "",
        ]

    def start(self):
        if self.started:
            print("Hey! Car is already started.")
        else:
            print("Car is started...")
            self.started = True

    def stop(self):
        if self.started:
            print("Car is stopped.")
            self.started = False
        else:
            print("Hey! Car is already stopped.")

    def printHelp(self):
        for self.message in self.messages:
            print(self.message)

    def exitCar(self):
        if self.started:
            print("Hey! You cannot exit while car is running!")
            print("First stop the car, then exit.")

        else:
            print("Thanks for playing :)")
            exit(0)


car = Car()

while True:
    command = input(">> ").lower()

    if command == "start":
        car.start()

    elif command == "stop":
        car.stop()

    elif command == "help":
        car.printHelp()

    elif command == "exit":
        car.exitCar()

    else:
        print("Sorry, I didn't understand it :(")
