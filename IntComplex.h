#ifndef INTCOMPLEX_H                                                //defination
#define INTCOMPLEX_H

class IntComplex {                                                   //int complex c;ass
private:                                                            //privates variables
    int real;
    int imaginary;

public:                                                             //function to perform operations
    IntComplex(int realPart, int imaginaryPart);
    IntComplex operator+(const IntComplex& other) const;
    IntComplex operator-(const IntComplex& other) const;
    IntComplex operator*(const IntComplex& other) const;
    IntComplex operator/(const IntComplex& other) const;
    int getReal() const;                                            //getters for private variables
    int getImaginary() const;
};

#endif
