#ifndef _UnistrokeRecognizerTypesIncluded_
#define _UnistrokeRecognizerTypesIncluded_



#include <math.h>
#include <string>
#include <list>
#include <vector>
#include "cocos2d.h"

using namespace std;
USING_NS_CC;


namespace GestureRecognizer {
    class Rectangle
    {
    public:
        double x, y, width, height;
        Rectangle(double x, double y, double width, double height)
        {
            this->x = x;
            this->y = y;
            this->width = width;
            this->height = height;
        }
    };

    class RecognitionResult
    {
    public:
        string name;
        double score;
        RecognitionResult(string name, double score)
        {
            this->name = name;
            this->score = score;
        }
    };

    typedef vector<Vec2> Path2D;
    typedef Path2D::iterator Path2DIterator;



}
#endif