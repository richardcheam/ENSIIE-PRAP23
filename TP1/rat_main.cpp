#include <iostream>
#include "rat.h"

using namespace std;
using namespace ensiie;

int main(){
    Rat r1(1, 2);
    Rat r2(1, 14);
    r1 += 1;
    Rat e(1, 1);
    bool b = (1 <= e);
    std::cout << r1 << std::endl;
    return 0;
}