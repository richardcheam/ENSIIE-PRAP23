#include <iostream>
#include <numeric>
#include "rat.h"

namespace ensiie{

//2.a

Rat::Rat(int num, int den){
    if (num == 0){
        num_ = num;
        den_ = 1;
    }
    if (den == 0){
        throw "dénominateur est 0";
    }
    if (den < 0){
        den_ = -den;
        num_ = -num;
    }
    // if (std::gcd(num, den) > 1){
    //     num_ = num / std::gcd(num, den);
    //     den_ = den / std::gcd(num, den);
    // }
    else{
        num_ = num;
        den_ = den;
    }
}

//2.b
int Rat::get_num(){
    return num_;
}

int Rat::get_den(){
    return den_;
}

void Rat::to_string(){
    std::cout << get_num() << "/" << get_den() << std::endl;
}

//2.c
//// operator interne
Rat& Rat::operator+=(const Rat rat){
    num_ = (num_ * rat.den_) + (rat.num_ * den_);
    den_ = (den_ * rat.den_); 
    return *this;
}
Rat& Rat::operator+=(int entier){
    Rat r(entier);
    //num_ = num_ + (r.num_ * den_);
    *this += r;
    return *this;
}
Rat& Rat::operator-=(Rat rat){
    num_ = (num_ * rat.den_) - (rat.num_ * den_);
    den_ = den_ * rat.den_;
    return *this;
}
Rat& Rat::operator-=(int entier){
    Rat r(entier);
    *this -= r;
    return *this;
}
Rat& Rat::operator*=(Rat rat){
    num_ = (num_ * rat.num_);
    den_ = (den_ * rat.den_);
    return *this;
}
Rat& Rat::operator*=(int entier){
    num_ = num_ * entier;
    return *this;
}
Rat& Rat::operator/=(Rat rat){
    num_ = num_ * rat.den_;
    den_ = den_ * rat.num_;
    return *this;
}
Rat& Rat::operator/=(int entier){
    den_ = den_ * entier;
    return *this;
}

}

//2.d
////operator externe

std::ostream& operator<<(std::ostream & st, ensiie::Rat & r){
    st << r.get_num();
    if (r.get_den() == 1){
        return st;
    }
    st << "/" << r.get_den();
    return st;
}

ensiie::Rat operator+(const ensiie::Rat& r1, const ensiie::Rat& r2){
    return ensiie::Rat(r1) += r2 ;
}
ensiie::Rat operator-(const ensiie::Rat& r1, const ensiie::Rat& r2){
    return ensiie::Rat(r1) -= r2;
}
ensiie::Rat operator*(const ensiie::Rat& r1, const ensiie::Rat& r2){
    return ensiie::Rat(r1) *= r2;
}
ensiie::Rat operator/(const ensiie::Rat& r1, const ensiie::Rat& r2){
    return ensiie::Rat(r1) /= r2;
}

ensiie::Rat operator+(const ensiie::Rat& r, const int i){
    return ensiie::Rat(r) += i;
}
ensiie::Rat operator-(const ensiie::Rat& r, const int i){
    return ensiie::Rat(r) -= i;
}
ensiie::Rat operator*(const ensiie::Rat& r, const int i){
    return ensiie::Rat(r) *= i;
}
ensiie::Rat operator/(const ensiie::Rat& r, const int i){
    return ensiie::Rat(r) /= i;
}

ensiie::Rat operator+(const int i, const ensiie::Rat& r){
    return ensiie::Rat(r) += i;
}
ensiie::Rat operator-(const int i, const ensiie::Rat& r){
    return ensiie::Rat(r) -= i;
}
ensiie::Rat operator*(const int i, const ensiie::Rat& r){
    return ensiie::Rat(r) *= i;
}
ensiie::Rat operator/(const int i, const ensiie::Rat& r){
    return ensiie::Rat(r) /= i;
}

//vi.

bool operator==(ensiie::Rat& r1, ensiie::Rat& r2){
    return(r1.get_num()/r1.get_den() == r2.get_num()/r2.get_den());
}
bool operator==(ensiie::Rat& r, int i){
    return ((r.get_num()/r.get_den()) == i);
}
bool operator==(int i, ensiie::Rat& r){
    return (r == i);
}

//vii.

bool operator!=(ensiie::Rat& r1, ensiie::Rat& r2){
    return(r1.get_num()/r1.get_den() != r2.get_num()/r2.get_den());
}
bool operator!=(ensiie::Rat& r, int i){
    return ((r.get_num()/r.get_den()) != i);
}
bool operator!=(int i, ensiie::Rat& r){
    return (r != i);
}

//viii.

bool operator<(ensiie::Rat & r1, ensiie::Rat & r2){
    // return(r1.get_num()/r1.get_den() < r2.get_num()/r2.get_den()); // fractional truncated for example, 5/2 is 2, not 2.5, so wrong
    return (r1.get_num() * r2.get_den() < r2.get_num() * r1.get_den());
}
bool operator<(ensiie::Rat & r, int i){
    return(r.get_num() < i * r.get_den());
}
bool operator<(int i, ensiie::Rat & r){
    return(i * r.get_den() < r.get_num());
}

//ix. 

bool operator<=(ensiie::Rat & r1, ensiie::Rat & r2){
    return (r1.get_num() * r2.get_den() <= r2.get_num() * r1.get_den());
}
bool operator<=(ensiie::Rat & r, int i){
    return(r.get_num() <= i * r.get_den());
}
bool operator<=(int i, ensiie::Rat & r){
    return(i * r.get_den() <= r.get_num());
}


//x.

bool operator>(ensiie::Rat & r1, ensiie::Rat & r2){
    return (r1.get_num() * r2.get_den() > r2.get_num() * r1.get_den());
}
bool operator>(ensiie::Rat & r, int i){
    return(r.get_num() > i * r.get_den());
}
bool operator>(int i, ensiie::Rat & r){
    return(i * r.get_den() > r.get_num());
}

//xi.


bool operator>=(ensiie::Rat & r1, ensiie::Rat & r2){
    return (r1.get_num() * r2.get_den() >= r2.get_num() * r1.get_den());
}
bool operator>=(ensiie::Rat & r, int i){
    return(r.get_num() >= i * r.get_den());
}
bool operator>=(int i, ensiie::Rat & r){
    return(i * r.get_den() >= r.get_num());
}