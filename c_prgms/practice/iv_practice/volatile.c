#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
// Global variable without 'volatile'
int globalVar = 0;

// Function to modify the global variable in an infinite loop
void* modifyGlobal(void* arg) {
    while (1) {
        globalVar++; // Increment the global variable
        sleep(1);    // Sleep for 1 second
    }
    return NULL;
}

int main() {
    pthread_t thread;

    // Create a thread to modify the global variable
    pthread_create(&thread, NULL, modifyGlobal, NULL);

    // Main loop to read the global variable
    while (1) {
        // Read the global variable
        int localVar = globalVar;

        // Print the value of the global variable
        printf("Value of global variable: %d\n", globalVar);

        // Sleep for 2 seconds
        sleep(1);
    }

    return 0;
}

