#ifndef VOLUMES_H
#define VOLUMES_H

#define PI 3.14159265

#include <math.h>

float ret_PI()
{
    return PI;
}

// Volumes Function
float VolumeCube(float a);
float VolumeCuboid(float length, float breadth, float height);
float VolumeCylinder(float length, float radius);
float VolumeSphere(float sphere);
float VolumeCone(float radius, float height);
float VolumeParallelogram(float a, float b, float angle);
float VolumeRhombus(float size, float angle, float height);
float VolumeRhombusDiagonals(float diagonal1, float diagonal2, float height);
// Volume of Cone, Sphere, 


/* 
Codes for Volume
** Volume of basic shapes
*/

// Volume of Cube
float VolumeCube(float a)
{
    return pow(a, 3);
}

// Volume of Cuboid
float VolumeCuboid(float length, float breadth, float height)
{
    return length * breadth * height;
}

// Volume of Cylinder
float VolumeCylinder(float radius, float height)
{
    return PI * radius * radius * height;
}

// Volume of Sphere
float VolumeSphere(float radius)
{
    return 4 / 3 * PI * pow(radius, 3);
}

// Volume of Cone
float VolumeCone(float radius, float height)
{
    return 1 / 3 * PI * radius * radius * height;
}

// Volume of Parallelogram
float VolumeParallelogram(float a, float b, float angle)
{
    return 0.0f;
}

// Volume of Rhombus
float VolumeRhombus(float size, float angle_deg, float height)
{
    float angle_rad = angle_deg * PI / 180.0f;
    return size * size * sin(angle_rad) * height;
}

float VolumeRhombusDiagonals(float diagonal1, float diagonal2, float height)
{
    return diagonal1 * diagonal2 * height;
}

#endif