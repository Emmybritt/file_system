#include <iostream>
#include <csignal>

// Signal handler function
void signalHandler(int signalNumber) {
    std::cout << "Received signal: " << signalNumber << std::endl;
    // Handle the signal here
}

int main() {
    // Register signal handler for SIGINT (Ctrl+C)
    signal(SIGINT, signalHandler);

    std::cout << "Running program. Press Ctrl+C to trigger the signal." << std::endl;

    // Infinite loop to keep the program running
    while (true) {
        // Perform program logic
    }

    return 0;
}
