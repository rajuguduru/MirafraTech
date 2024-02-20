#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
int globalVar = 0;

void* modifyGlobal(void* arg) {
    while (1) {
        globalVar++; // Increment the global variable
        sleep(1);    // Sleep for 1 second
    }
    return NULL;
}

int main() {
    pthread_t thread;

    pthread_create(&thread, NULL, modifyGlobal, NULL);

    while (1) {
        int localVar = globalVar;

        printf("Value of global variable: %d\n", globalVar);
        sleep(1);
    }

    return 0;
}

