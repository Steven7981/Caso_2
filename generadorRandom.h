#ifndef generadorRandom_h
#define generadorRandom_h
#include <iostream>
#include <random>

class RandomNumberGenerator {
public:
    RandomNumberGenerator(int min, int max) : distribution(min, max), generator(std::random_device()()) {}

    int generateRandomNumber() {
        return distribution(generator);
    }

private:
    std::uniform_int_distribution<int> distribution;
    std::mt19937 generator;
};

#endif