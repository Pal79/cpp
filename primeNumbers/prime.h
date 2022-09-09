#include <iostream>
#include <string>
#include <cmath>
#pragma once

static bool prime = true;

const std::string MESSAGE_FRONT = "Az adott szám \"";
const std::string PRIME = " prímszám!";
const std::string NOT_PRIME = " nem prímszám!";


void isPrime(int num);
void primesWriteOut(int num);
