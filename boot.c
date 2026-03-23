// ARM Kernel Initialization with Boot Messages

#include <stdio.h>

void kernel_init() {
    printf("Booting ARM Kernel...\n");
    // Initialization code goes here
    // Set up memory, CPUs, devices, etc.
    printf("ARM Kernel Initialized successfully!\n");
}

int main() {
    kernel_init();
    return 0;
}