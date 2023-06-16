#include <iostream>
#include "IntComplex.h"
#include "FloatComplex.h"
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 9) {                                       //if less arguments code will close cuz we need 8 arguments for calculation and 1 for file
        cout << "Insufficient arguments." << endl;
        return 1;
    }

    int intReal = stoi(argv[1]);                          //first 2 arguments are first int complex's real and imaginarty part
    int intImaginary = stoi(argv[2]);
    IntComplex intComplex1(intReal, intImaginary);       //seconf int cokmplex object
    
    intReal = stoi(argv[3]);                               //next 2 arguments represent second int complex's real and imaginarty part
    intImaginary = stoi(argv[4]);
    IntComplex intComplex2(intReal, intImaginary);         //secont int complex object


    float floatReal = stof(argv[5]);                     //the next 2 arguments(5th and 6th ones) represent first float complex's real and imaginarty part
    float floatImaginary = stof(argv[6]);
    FloatComplex floatComplex1(floatReal, floatImaginary);//first float object
    
    floatReal = stof(argv[7]);                              //the next 2 arguments(7th and 8th ones) represent second float complex's real and imaginarty part
    floatImaginary = stof(argv[8]);
    FloatComplex floatComplex2(floatReal, floatImaginary);  //second float complex object is created


    IntComplex intAddResult = intComplex1 + intComplex2;           //all operations are being performed on int complex objects
    IntComplex intSubResult = intComplex1 - intComplex2;
    IntComplex intMulResult = intComplex1 * intComplex2;
    IntComplex intDivResult = intComplex1 / intComplex2;

    FloatComplex floatAddResult = floatComplex1 + floatComplex2;          //all operations are being performed on float complex objects
    FloatComplex floatSubResult = floatComplex1 - floatComplex2;
    FloatComplex floatMulResult = floatComplex1 * floatComplex2;
    FloatComplex floatDivResult = floatComplex1 / floatComplex2;
//displaying the output, getters are being used since all variables are private
    cout << "Complex integer addition: " << intAddResult.getReal() << " + " << intAddResult.getImaginary() << "i" << endl;         
    cout << "Complex integer subtraction: " << intSubResult.getReal() << " + " << intSubResult.getImaginary() << "i" << endl;
    cout << "Complex integer multiplication: " << intMulResult.getReal() << " + " << intMulResult.getImaginary() << "i" << endl;
    cout << "Complex integer division: " << intDivResult.getReal() << " + " << intDivResult.getImaginary() << "i" << endl;

    cout << "float integer addition: " << floatAddResult.getReal() << " + " << floatAddResult.getImaginary() << "i" << endl;
    cout << "float integer subtraction: " << floatSubResult.getReal() << " + " << floatSubResult.getImaginary() << "i" << endl;
    cout << "float integer multiplication: " << floatMulResult.getReal() << " + " << floatMulResult.getImaginary() << "i" << endl;
    cout << "float integer division: " << floatDivResult.getReal() << " + " << floatDivResult.getImaginary() << "i" << endl;

    return 0;
}
