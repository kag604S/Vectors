//
// Created by Student on 07.06.2024.
//

#pragma once
#include <string>

using  namespace std;

class myVector {
    private:
        std::string w_name;
        int lenght;
        int m_x;
        int m_y;
    public:

    void setName(const std::string& name);
    void setXY(int x, int y);
    double getX();
    double getY();
    void show();

};
