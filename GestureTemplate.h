#ifndef _GestureTemplateIncluded_
#define _GestureTemplateIncluded_

#include <string>
#include "cocos2d.h"
#include "UnistrokeRecognizerTypes.h"


using namespace std;
USING_NS_CC;

namespace GestureRecognizer
{
    class GestureTemplate
    {
    public:
        string name;
        Path2D points;
        Vec2 startv;
        vector<double> Vector;
        GestureTemplate(string name, Path2D points,Vec2 startv,vector<double> Vector)
        {
            this->name   = name;
            this->points = points;
            this->startv = startv;
            this->Vector =Vector;
        }

        GestureTemplate(string name, Path2D points)
        {
            this->name   = name;
            this->points = points;
        }
    };

    typedef vector<GestureTemplate>  GestureTemplates;
}

#endif
