#pragma once

#include <iostream>


namespace ariel{

    class Fraction
    {
    private:
        int numerator; //the upper number
        int denominator; // the number below fraction line
    public:

        // constructor
        Fraction(int numer, int denomi);
        
        // numerator getter
        int getNumer() const;
        // numerator setter
        void setNumer(int n);
        // denominator getter
        int getDenomi() const;
        // denominator setter
        void setDenomi(int n);

        // overloading of << operator
        // using const where there is reference to Fraction object
        // to ensure that the object passed to the func isnt modified
        // by the func.
        friend std::ostream& operator<<(std::ostream& _os, const Fraction& fraction);
        
        // overloading the + opertor
        // using const where there is reference to Fraction object
        // because i don't want to modify the original frac1 and frac2
        // i need only to create a new Fraction object that represents their sum.
        friend Fraction operator+(const Fraction& frac1, const Fraction& frac2);
        // Fraction + float
        friend Fraction operator+(const Fraction& frac, const float& flo);
        // float + Fraction 
        friend Fraction operator+(const float& flo, const Fraction& frac);
        
        // overloading the - operator
        friend Fraction operator-(const Fraction& frac1, const Fraction& frac2);
        // Fraction - float
        friend Fraction operator-(const Fraction& frac, const float& flo);
        // float - Fraction
        friend Fraction operator-(const float& flo, const Fraction& frac);

        // overloading the / operator
        friend Fraction operator/(const Fraction& frac1, const Fraction& frac2);
        // Fraction / float
        friend Fraction operator/(const Fraction& frac, const float& flo);
        // float / Fraction
        friend Fraction operator/(const float& flo, const Fraction& frac);

        // overloading the * operator
        friend Fraction operator*(const Fraction& frac1, const Fraction& frac2);
        // float * Fraction
        friend Fraction operator*(const float& flo, const Fraction& frac);
        // Fraction * float 
        friend Fraction operator*(const Fraction& frac, const float& flo);    

        // overloading the ++ operator
        // pre-increment, example: ++n
        Fraction& operator++();
        // post-increment, example: n++
        Fraction operator++(int);

        // overloading the -- operator
        // pre-decrement operator, example: --n
        Fraction& operator--();
        //post-decrement operator, example: n--
        Fraction operator--(int);

        // overloading the >= operator
        bool operator>=(const Fraction& frac);

        // overloading the > operator
        bool operator>(const float& flo);

        // overloading the == operator
        bool operator==(const Fraction& frac);

    };
} 