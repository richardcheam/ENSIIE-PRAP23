#ifndef VECT_H
#define VECT_H
#include <iostream>

namespace ensiie{

class Vect {
    private:
        double *data_;
        size_t size_;
    public: 
        //(a),(b),(c) //structors
        Vect(size_t size);
        ~Vect();
        Vect(const Vect & v);

        //(d) //getter
        size_t get_size() const;

        //(e) opérateur internes
        //i.
        double & operator[](size_t idx);
        const double & operator[](size_t idx) const;
        //ii.
        Vect & operator=(const Vect & v);
        //(g)
        double norm(double p = 2);
};

//(f) opérateur externes
//i.
std::ostream & operator<<(std::ostream & st, const Vect & v);
//ii.
Vect operator+(const Vect & v1, const Vect & v2);
//iii.
Vect operator-(const Vect & v1, const Vect & v2);
//iv.
double operator*(const Vect & v1, const Vect & v2);
//v.
Vect operator*(const Vect & v, double val);
Vect operator*(double val, const Vect & v);
//vi.
Vect operator/(const Vect & v, double val);

}

#endif