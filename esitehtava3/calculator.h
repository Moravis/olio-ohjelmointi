#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
using namespace std;

class Calculator
{
public:
    Calculator();
    ~Calculator();
    void inputOperands(void);
    void calculateResult(void);
    void showResults(void);

    void public_Calculator();

protected:
    void protected_Calculator();
private:
    double op1;
    double op2;
    double result;
    char operation;
    void private_Calculator();
};



class BasicALU
{
public:
    BasicALU();
    double sum(double a,double b);
    double sub(double a,double b);
    double mul(double a,double b);
    double div(double a,double b);
    double result;

};
BasicALU::BasicALU()
{
    cout << "BasicALU konstruktori" << endl;
}
double BasicALU::sum(double a,double b)
{
    return a+b;
}
double BasicALU::sub(double a,double b)
{
    return a-b;
}
double BasicALU::mul(double,double)
{
    return a*b;
}
double BasicALU::div(double,double)
{
    return a/b;
}

};
#endif // CALCULATOR_H
