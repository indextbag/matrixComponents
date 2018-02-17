/**
    Copyright (c) 2018 Ryan Porter
    You may use, distribute, or modify this code under the terms of the MIT license.
*/

#pragma once

#include <maya/MDataBlock.h>
#include <maya/MPlug.h>
#include <maya/MPxNode.h>
#include <maya/MString.h>
#include <maya/MTypeId.h>

class MatrixToShear : public MPxNode
{
public:
    virtual MStatus         compute(const MPlug& plug, MDataBlock& data);
    static  void*           creator();
    static  MStatus         initialize();

public:
    static MTypeId          NODE_ID;
    static MString          NODE_NAME;

    static MObject          matrixAttr;
    
    static MObject          outputAttr;
    static MObject          outputXYAttr;
    static MObject          outputXZAttr;
    static MObject          outputYZAttr;

private:
    double shear[3];
};