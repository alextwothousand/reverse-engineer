#include "main.hpp"

// Just to try and increase program difficulty, I've sectioned things into subroutines.
void crackMeText() {
    std::cout << "You need to try and crack me... but you may find this very difficult." << std::endl;
    std::cout << "Try using a guide from https://www.retroreversing.com/intro-decompiling-with-ghidra to achieve this." << std::endl;

    std::cout << "You'll get there... one day. So long, warrior." << std::endl;
}

// Literarlly pointless. But it makes reverse engineering more difficult- maybe?
int crackMeResult() {
    return 0;
}

int main() {
    // Run subroutines.
    crackMeText();
    // Return value of crackMeResult.
    return crackMeResult();
}