#include "Vector_Point.h"
Point::Point() {
    x_ = 0;
    y_ = 0;
}
Point::Point(int x, int y) {
    x_ = x;
    y_ = y;
}
Point::Point(const Point& other) {
    x_ = other.x_;
    y_ = other.y_;
}
Point operator+(const Point& point, const Vector& other) {
    Point res;
    res.x_ = point.x_ + other.x_;
    res.y_ = point.y_ + other.y_;
    return res;
}
ostream& operator<<(ostream& out, const Point& point) {
    out << point.x_ << " " << point.y_;
    return out;
}
Vector::Vector() {
    x_ = 0;
    y_ = 0;
}
Vector::Vector(int x, int y) {
    x_ = x;
    y_ = y;
}
Vector::Vector(const Vector& other) {
    x_ = other.x_;
    y_ = other.y_;
}
Vector Vector::operator+(const Vector& other) {
    this->x_+=other.x_;
    this->y_+=other.y_;
    return *this;
}
ostream& operator<<(ostream& out, const Vector& v) {
    out << v.x_ << " " << v.y_;
    return out;
}
