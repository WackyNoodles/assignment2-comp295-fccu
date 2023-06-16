#ifndef FLOATCOMPLEX_H                      //defination
#define FLOATCOMPLEX_H

#include "IntComplex.h"                    //importing the int complex file

class FloatComplex : public IntComplex {
private:                                  //private variables
    float real;
    float imaginary;

public:                                  //function to perform operations
    FloatComplex(float realPart, float imaginaryPart);
    FloatComplex operator+(const FloatComplex& other) const;
    FloatComplex operator-(const FloatComplex& other) const;
    FloatComplex operator*(const FloatComplex& other) const;
    FloatComplex operator/(const FloatComplex& other) const;
    float getReal() const;              //functions to return real and imaginary variables
    float getImaginary() const;
};

#endif
