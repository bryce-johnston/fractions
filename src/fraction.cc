#include <iostream>
#include "fraction.h"

int32_t Fraction::getNumerator() const {
    return numerator;
}

int32_t Fraction::getDenominator() const {
    return denominator;
}

void Fraction::setNumerator(int32_t numerator) {
    this->numerator = numerator;
}

void Fraction::setDenominator(int32_t denominator) {
    this->denominator = denominator;
}

void Fraction::output() {
    std::cout << numerator << " / " << denominator << std::endl;
}