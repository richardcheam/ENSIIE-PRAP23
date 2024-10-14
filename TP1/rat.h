#ifndef RAT_H
#define RAT_H

namespace ensiie{

class Rat{
    private:
        int num_;
        int den_;
    //constructor
    public:
        Rat(int num, int den = 1);
    //getters
        int get_num();
        int get_den();
    //operator interne
        Rat& operator+=(const Rat rat);
        Rat& operator+=(int entier);
        Rat& operator-=(Rat rat);
        Rat& operator-=(int entier);
        Rat& operator*=(Rat rat);
        Rat& operator*=(int entier);
        Rat& operator/=(Rat rat);
        Rat& operator/=(int entier);
    //print
        void to_string();
};

}

//operator externe

std::ostream& operator<<(std::ostream& st, ensiie::Rat& r);

ensiie::Rat operator+(const ensiie::Rat& r1, const ensiie::Rat& r2);
ensiie::Rat operator-(const ensiie::Rat& r1, const ensiie::Rat& r2);
ensiie::Rat operator*(const ensiie::Rat& r1, const ensiie::Rat& r2);
ensiie::Rat operator/(const ensiie::Rat& r1, const ensiie::Rat& r2);

ensiie::Rat operator+(const ensiie::Rat& r, const int i);
ensiie::Rat operator-(const ensiie::Rat& r, const int i);
ensiie::Rat operator*(const ensiie::Rat& r, const int i);
ensiie::Rat operator/(const ensiie::Rat& r, const int i);

ensiie::Rat operator+(const int i, const ensiie::Rat& r);
ensiie::Rat operator-(const int i, const ensiie::Rat& r);
ensiie::Rat operator*(const int i, const ensiie::Rat& r);
ensiie::Rat operator/(const int i, const ensiie::Rat& r);

bool operator==(ensiie::Rat& r1, ensiie::Rat& r2);
bool operator==(ensiie::Rat& r, int i);
bool operator==(int i, ensiie::Rat& r);

bool operator!=(ensiie::Rat& r1, ensiie::Rat& r2);
bool operator!=(ensiie::Rat& r, int i);
bool operator!=(int i, ensiie::Rat& r);

bool operator<(ensiie::Rat& r1, ensiie::Rat& r2);
bool operator<(ensiie::Rat& r, int i);
bool operator<(int i, ensiie::Rat& r);

bool operator<=(ensiie::Rat & r1, ensiie::Rat & r2);
bool operator<=(ensiie::Rat & r, int i);
bool operator<=(int i, ensiie::Rat & r);

bool operator>(ensiie::Rat& r1, ensiie::Rat& r2);
bool operator>(ensiie::Rat& r, int i);
bool operator>(int i, ensiie::Rat& r);

bool operator>=(ensiie::Rat & r1, ensiie::Rat & r2);
bool operator>=(ensiie::Rat & r, int i);
bool operator>=(int i, ensiie::Rat & r);

#endif