/**
    Unistroke Recognizer
    Purpose: Compare shape drawn by user with templates and recognize it.

    @author Duy Tran
    @version 1.0 June 06 2018
    This code taken (and modified) from :
     - C++ $1 Unistroke Recognizer by Baylor Wetzel.

*/

#ifndef _UnistrokeRecognizerIncluded_
#define _UnistrokeRecognizerIncluded_

#include "cocos2d.h"
#include <limits>
#include <iostream>
#include "UnistrokeRecognizerTypes.h"
#include "GestureTemplate.h"
#include "SampleGestures.h"
#include <string>
#include <vector>

using namespace std;
USING_NS_CC;


namespace GestureRecognizer {
    class UnistrokeRecognizer {
    protected:
        //Basic variables for handling shapes
        double halfDiagonal;
        double angleRange;
        double anglePrecision;
        double goldenRatio;

        //--- How many points we use to define a shape
        int numPointsInGesture;

        //---- Square we resize the shapes to
        int squareSize;

        bool shouldIgnoreRotation;

        double StartAngleIndex; // eighth of gesture length
        double AngleSimilarityThreshold;

        vector<int > order; // array of integer indices
        vector<vector<int> > orders ;// array of integer arrays

        //--- All templates saved in the library
        GestureTemplates allTemplates;
        //--- What we match the input shape against (sub part of allTemplates)
        GestureTemplates templates;
        //--- All templates saved in the library
        GestureTemplates allunistrokenormalizedtemplates;


    public:
        UnistrokeRecognizer();
        void addTemplate(string name, Path2D points);
        Rectangle boundingBox(Path2D points);
        Vec2 centroid(Path2D points);
        double getDistance(Vec2 p1, Vec2 p2);
        bool   getRotationInvariance() { return shouldIgnoreRotation; }
        double distanceAtAngle(Path2D points, GestureTemplate aTemplate, double rotation);
        double distanceAtBestAngle(Path2D points, GestureTemplate T);
        Path2D normalizePath(Path2D points);
        double pathDistance(Path2D pts1, Path2D pts2);
        double pathLength(Path2D points);
        RecognitionResult recognize(Path2D points, string method="goldenSearch");
        Path2D resample(Path2D points);
        Path2D rotateBy(Path2D points, double rotation);
        Path2D rotateToZero(Path2D points);
        Path2D scaleToSquare(Path2D points);
        void   setRotationInvariance(bool ignoreRotation);
        Path2D translateToOrigin(Path2D points);
        void HeapPermute(int n);

        void loadTemplates();
        void activateTemplates(vector<string>);
        void activateTemplates();

        bool inTemplates(string, vector<string>);
        double Deg2Rad(double d);
        double Rad2Deg(double r);

        double Round(double n,double d);


        Vec2 CalcStartUnitVector(Path2D points,double index) ;// start angle from points[0] to points[index] normalized as a unit vector
        vector<double> Vectorize(Path2D points,bool useBoundedRotationInvariance); // for Protractor
        Path2D UnistrokeTemplate(Path2D points,string name);

        double AngleBetweenUnitVectors(Vec2 v1,Vec2 v2);


    };
}

#endif