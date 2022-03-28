//create a vector of 100 random numbers, encrypt them, print them, decrypt them, print them
#include <iostream>
#include <random>
#include <vector>
#include <printf.h>

int main()
{
    std::vector<int> v(100);

    //generate random numbers
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 100);


    for(int i = 0; i < 100; i++)
    {
        v[i] = dis(gen);
    }

    printf("random numbers:\n");
    for(int i = 0; i < 100; i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    //create encryption key
    std::string key = "aluhrflka3euhr5gl5kjhlkj5htlkgjhwqlkjhg5lkjh";

    //encrypt the numbers
    printf("encrypting with key: %s\n", key.c_str());
    for(int i = 0; i < 100; i++)
    {
        v[i] = v[i] * key[i % key.size()];
    }

    //print the numbers
    printf("encrypted numbers:\n");
    for(int i = 0; i < 100; i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    //decrypt the numbers
    printf("decrypting with key: %s\n", key.c_str());
    for(int i = 0; i < 100; i++)
    {
        v[i] = v[i] / key[i % key.size()];
    }

    //print the numbers
    printf("decrypted numbers:\n");
    for(int i = 0; i < 100; i++)
    {
        std::cout << v[i] << " ";
    }    
    std::cout << std::endl;
}

/*
int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 100);
    //encrypt the following line with the key:
    std::string key = "hello world";
    
    for (int i = 0; i < 100; i++) {
        std::cout << dis(gen) << std::endl;
    }
    return 0;
}
*/