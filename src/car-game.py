print('Welcome to Car game. Type \"help\" to get instructions.')

started = False
messages = [
    "",  # gets added with a new line and puts a blank line

    "Miscellaneous:",
    "help        - to get this message",
    "",

    "Game controls:",
    "start       - to start the car",
    "stop        - to stop the car",
    "quit        - to quit from the game",
    ""
]

while True:
    command = input(">> ").lower()

    if command == "start":
        if started:
            print("Hey! Car is already started.")
        else:
            print("Car is started...")
            started = True

    elif command == "stop":
        if started:
            print("Car is stopped.")
            started = False
        else:
            print("Hey! Car is already stopped.")

    elif command == "help":
        for message in messages:
            print(message)

    elif command == "quit":
        print("Thanks for playing! :)")
        break

    else:
        print("Sorry, I didn't understand it :(")
