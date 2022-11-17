//
// Created by fenris on 11/16/22.
//
#include <fenc.h>
#include <iostream>

int main() {

    printf("String we are going to encrypt: \"hello\"\n");
    printf("I'm gonna use a 8 bit key to keep things simple. The key will be \"53a267df\"\n");

    int key = 0x53a267df;
    std::string string = "hello";
    std::string result = "=";

    unsigned int stringSize = string.length();
    for (int i = 0; i < stringSize; i++) {

    }




    printf("Encryption results in: %s", "4");



    printf("Decryption results in: %s", "4");

    return 0;
}
