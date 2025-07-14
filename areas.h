#ifndef AREAS_H
#define AREAS_H

#include <math.h>

#define PI 3.14159265

// Function List
float AreaRectangle(float breadth, float height);
float AreaSquare(float size);
float AreaCircle(float radius);
float AreaCuboid(float length, float breadth, float height);
float AreaCylinder(float radius, float height);
float AreaCube(float size);
// End Function

// Area Function Code
float AreaRectangle(float breadth, float height)
{
    return breadth * height;
}

float AreaSquare(float size)
{
    return size * size;
}

float AreaCircle(float radius)
{
    return PI * radius * radius;
}

float AreaCuboid(float length, float breadth, float height)
{
    float area_LxH = length * height;
    float area_LxB = length * breadth;
    float area_BxH = breadth * height;
    float area = 2 * (area_LxH + area_LxB + area_BxH); 
    return area;
}

float AreaCylinder(float radius, float height)
{
    float area_T = PI * radius * radius;
    float area_Side = 2 * PI * radius * height;
    float area = 2 * area_T + area_Side;
    return area;
}

float AreaCube(float size)
{
    float area = 6 * size * size;
    return area;
}

float AreaSphere(float radius)
{
    float area = 4 * PI * radius * radius;
    return area;
}

#endif
