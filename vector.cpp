//
// Created by Student on 07.06.2024.
//
#include <iostream>
#include "vector.h"


void myVector::setName(const std::string& name) {
    w_name = name;
}
void myVector::setXY(int x , int y) {
    m_x = x;
    m_y = y;
}
double myVector::getX() {
    return m_x;
}
double myVector::getY() {
    return m_y;
}
void myVector::show() {
    std::cout << "Vector " << w_name << "(" << m_x << ", " << m_y << ")" << std::endl;
}