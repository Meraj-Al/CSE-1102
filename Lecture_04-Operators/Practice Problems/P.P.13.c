/*
A simple way to encrypt data is to use the ˄ operator with a secret key. Write a program
that reads an integer that corresponds to the secret key and another one that will be
encrypted. The encryption is performed by applying the ˄ operator on them. Then, the
program should use once more the ˄ operator to decrypt the encrypted result.
*/
#include <stdio.h>

int main() {
    int key, num, encrypted, decrypted;

    // Input the secret key
    printf("Enter the secret key: ");
    scanf("%d", &key);

    // Input the number to encrypt
    printf("Enter the number to encrypt: ");
    scanf("%d", &num);

    // Encrypt the number using XOR
    encrypted = num ^ key;
    printf("Encrypted number: %d\n", encrypted);

    // Decrypt the number using XOR again
    decrypted = encrypted ^ key;
    printf("Decrypted number: %d\n", decrypted);

    return 0;
}
/*
The user inputs a secret key and a number to encrypt.
The program encrypts the number using encrypted = num ^ key.
To decrypt, it applies XOR again: decrypted = encrypted ^ key, which restores the original number.
Finally, it prints the encrypted and decrypted values.
*/