#ifndef __DRAW_SHAPE_HPP__
#define __DRAW_SHAPE_HPP__

#include <iostream>
#include <string>

class Shape
{
public:
    virtual void draw() = 0;
};

class CircleShape: public Shape
{
public:
    CircleShape(){
        std::cout << "circleShape create" << std::endl;
    }
    void draw(){
        std::cout << "draw circle" << std::endl;
    }
};

class RectShape: public Shape
{
public:
    RectShape(){
        std::cout << "rectShape create" << std::endl;
    }

    void draw(){
        std::cout << "draw rectangle" << std::endl;
    }
};

class TrianShape: public Shape
{
public:
    TrianShape(){
        std::cout<< "trianShape create" << std::endl;
    }
    void draw(){
        std::cout <<  "draw trangle" << std::endl;
    }
};

class ShapeFactory
{
public:
    static Shape* getShape(std::string str){
        if(str == "circle"){
            Shape* pshape = new CircleShape;
            return pshape;
        } else if (str == "rect"){
            Shape *pshape = new RectShape;
            return pshape;
        } else if(str == "tran"){
            Shape *pshape = new TrianShape;
            return pshape;
        } else {
            std::cout << "input error!" << std::endl;
            return NULL;
        }
    }

    static void deleteShape(Shape *s){
        if(s != NULL){
            delete s;
        }
    }
};

#endif
