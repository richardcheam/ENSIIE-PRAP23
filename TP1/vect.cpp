#include "vect.h"
#include <cmath>

namespace ensiie{

Vect::Vect(size_t size) : size_(size){
    data_ = new double[size_];
}

Vect::~Vect(){
    delete[] data_;
}

Vect::Vect(const Vect & v){
    size_ = v.size_;
    data_ = new double[size_];
    for (size_t i = 0; i < size_; i++){
        data_[i] = v.data_[i];
    }
}

size_t Vect::get_size() const{
    return size_;
}

double & Vect::operator[](size_t idx){
    if ((idx < 0) || (idx >= size_)){
        throw "bad index";
    }
    return data_[idx];
}

const double & Vect::operator[](size_t idx) const{
    if ((idx < 0) || (idx >= size_)){
        throw "bad index";
    }
    return data_[idx];
}

Vect & Vect::operator=(const Vect & v){
    if (this != &v){
        Vect tmp = v;
        double *p = data_;
        data_ = tmp.data_;
        tmp.data_ = p;
        size_ = tmp.size_; // = v.size_
    }
    return *this;
}

std::ostream & operator<<(std::ostream & st, const Vect & v){
    st << '(';
    size_t i;
    for (i = 0; i < (v.get_size() - 1); i++){
        st << v[i] << ',';
    }
    st << v[i] << ')';
    return st;
}

Vect operator+(const Vect & v1, const Vect & v2){
    if (v1.get_size() != v2.get_size()){
        throw "different size";
    }
    Vect tmp(v1.get_size());
    for (size_t i = 0; i < v1.get_size(); i++){
        tmp[i] = v1[i] + v2[i];
    }
    return tmp;
}

Vect operator-(const Vect & v1, const Vect & v2){
    if (v1.get_size() != v2.get_size()){
        throw "different size";
    }
    Vect tmp(v1.get_size());
    for (size_t i = 0; i < v1.get_size(); i++){
        tmp[i] = v1[i] - v2[i];
    }
    return tmp;
}

double operator*(const Vect & v1, const Vect & v2){
    if (v1.get_size() != v2.get_size()){
        throw "different size";
    }
    double res = 0;
    for (size_t i = 0; i < v1.get_size(); i++){
        res += v1[i] * v2[i];
    }
    return res;
}

Vect operator*(const Vect & v, double val){
    Vect tmp(v.get_size());
    for (size_t i = 0; i < v.get_size(); i++){
        tmp[i] = v[i] * val;
    }
    return tmp;
}

Vect operator*(double val, const Vect & v){
    return v * val;
}

Vect operator/(const Vect & v, double val){
    Vect tmp(v.get_size());
    for (size_t i = 0; i < v.get_size(); i++){
        tmp[i] = v[i] / val;
    }
    return tmp;
}

double Vect::norm(double p){
    double res;
    for (size_t i = 0; i < size_; i++){
        res += pow(fabs(data_[i]), p);
    }
    res = pow(res, 1.0/p);
    return res;
}

}