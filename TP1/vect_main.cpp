#include "vect.h"
#include <algorithm>
#include <chrono>

using namespace ensiie;

int main(int argc, char** argv){
    // Vect v(4);
    // for (size_t i = 0; i < v.get_size(); i++){
    //     v[i] = 1;
    // }
    // Vect v_cop(4);
    // v_cop = v;
    // Vect z(4);
    // z = v_cop + v;
    // std::cout<< z << std::endl;

    //Exo 3

    Vect v1(100000000); 
    Vect v2(100000000); 

    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();
    std::swap(v1,v2) ;
    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
 
    std::cout << "Implemented vector : " << elapsed_seconds.count() << "s\n";

    std::vector<double> v3;
    std::vector<double> v4;

    std::chrono::time_point<std::chrono::system_clock> start_, end_;
    start_ = std::chrono::system_clock::now();
    std::swap(v3,v4) ;
    end_ = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds_ = end_ - start_;
    std::time_t end_time_ = std::chrono::system_clock::to_time_t(end_);
 
    std::cout << "std vector : " << elapsed_seconds_.count() << "s\n";


    return 0;
}