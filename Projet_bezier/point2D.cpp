#include "point2D.hpp"

Point2D::Point2D(){
    x_ = y_ = 0;
}

Point2D::Point2D(int x, int y){
    x_ = x;
    y_ = y;
}

Point2D::Point2D(const Point2D & p){
    x_ = p.get_x();
    y_ = p.get_y();
}

int Point2D::get_x() const{
    return x_;
}

int Point2D::get_y() const{
    return y_;
}

void Point2D::set_x(int x){
    x_ = x;
}

void Point2D::set_y(int y){
    y_ = y;
}