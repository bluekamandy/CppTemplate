#include "common.hpp"
#include <cstdlib>

using namespace masood;

int randInt(int l, int h)
{
    int r = rand() % (h - l) + h;
    return r;
}

float masood::randFloat(float l, float h)
{
    float r = rand() / (float)RAND_MAX;
    return (1.0f - r) * l + r * h;
}