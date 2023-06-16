#include "IntComplex.h"
//constructor
IntComplex::IntComplex(int realPart, int imaginaryPart) : real(realPart), imaginary(imaginaryPart) {}

IntComplex IntComplex::operator+(const IntComplex& other) const {        //fucntion to perform addition
    return IntComplex(real + other.real, imaginary + other.imaginary);   //a new int complex object is returned
}

IntComplex IntComplex::operator-(const IntComplex& other) const {        //function to perform subtraction
    return IntComplex(real - other.real, imaginary - other.imaginary);   //a new int complex object is returned
}

IntComplex IntComplex::operator*(const IntComplex& other) const {       //function to perform multiplication
    int nR = (real * other.real) - (imaginary * other.imaginary);       //formula of multiplication of complex numbers is being used, first product of both reals is being subtracted from product of both imiginary parts to find the new real part
    int nI = (real * other.imaginary) + (imaginary * other.real);        //then product of one real and other's imiginary is being added to the product of other real and first one's imaginary to find resultant imaginary pary
    return IntComplex(nR, nI);                                           //a new int complex object is returned
}

IntComplex IntComplex::operator/(const IntComplex& other) const {        //function to perform division, formula of division is being used
    int denominator = (other.real * other.real) + (other.imaginary * other.imaginary);      //first denimonator is being calculated by adding product of reals to product od imaginarys
    int nR = ((real * other.real) + (imaginary * other.imaginary)) / denominator;           //then new real is calculated by adding product of reals to product od imaginarys and dividing this sum by denominator calculated earlier
    int nI = ((imaginary * other.real) - (real * other.imaginary)) / denominator;           //then new imaginary part is calculated by subtracting product of fist's real and second imaginary and second's real and first's imaginary and dividing this product by denominator calculated earlier
    return IntComplex(nR, nI);                                           //a new int complex object is returned
}

int IntComplex::getReal() const {                                         // function to get and return real part of complex number
    return real;
}

int IntComplex::getImaginary() const {                                   // function to get and return imaginary part of complex number
    return imaginary;
}
