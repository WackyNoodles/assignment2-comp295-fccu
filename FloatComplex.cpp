#include "FloatComplex.h"                           //importing float complex
//constructor
FloatComplex::FloatComplex(float realPart, float imaginaryPart) : IntComplex(0, 0), real(realPart), imaginary(imaginaryPart) {}

FloatComplex FloatComplex::operator+(const FloatComplex& other) const {       //fucntion uses the formula of addition
    return FloatComplex(real + other.real, imaginary + other.imaginary);      //real part is added to real part and imaginary to imaginary part and a new float object is returned
}

FloatComplex FloatComplex::operator-(const FloatComplex& other) const {        //function uses the formula of subtraction
    return FloatComplex(real - other.real, imaginary - other.imaginary);       //real part is subtracted from real part and imaginary from imiginary part and a new float object is returned
}

FloatComplex FloatComplex::operator*(const FloatComplex& other) const {        //function uses the formusla of multiplication
    float nR = (real * other.real) - (imaginary * other.imaginary);       //real is multiplied with real and imaginary with imaginary part and subtracted
    float nI = (real * other.imaginary) + (imaginary * other.real);  //real is multiplied with other's imaginary part and other real is multiplied with first's real part and added
    return FloatComplex(nR, nI);                                //and a new float object is returned
}

FloatComplex FloatComplex::operator/(const FloatComplex& other) const {       //function uses the formula of subtraction
    float denominator = (other.real * other.real) + (other.imaginary * other.imaginary);        //reals and miiginary are multiplied and added to calculate deniminator
    float nR = ((real * other.real) + (imaginary * other.imaginary)) / denominator;        //real is multiplied with real and imaginary with imaginary part then summed and devided by denominator
    float nI = ((imaginary * other.real) - (real * other.imaginary)) / denominator;        //real is multiplied with other's imaginary part and other real is multiplied with first's real part, subtracted and devided by denominator
    return FloatComplex(nR, nI);                         //and a new float object is returned
}

float FloatComplex::getReal() const {                           //returns real part
    return real;
}

float FloatComplex::getImaginary() const {                       //returns imaginary part
    return imaginary;
}
