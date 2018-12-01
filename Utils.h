//
// Created by lucas on 01/12/18.
//

#ifndef SIMPLE3DENGINE_UTILS_H
#define SIMPLE3DENGINE_UTILS_H

struct Point {
    int x = 0;
    int y = 0;
    int z = 0;
};

struct PointF {
    double x = 0;
    double y = 0;
    double z = 0;
};

struct Pair {
    int *left;
    int *right;
};

struct Segment {
    PointF *left;
    PointF *right;
};

#endif //SIMPLE3DENGINE_UTILS_H
