/**
 * @file contactEnums.h
 * @author Andrew
 * @brief 
 * @version 0.1
 * @date 2023-12-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef CONTACTENUMS_H
#define CONTACTENUMS_H


enum ConstraintType {
    PointToPoint=0,
    PointToEdge,
    EdgeToEdge
};

enum ContactPiecewise {
    NonPenetrated=0,
    Penetrated
};

enum FrictionType {
    ZeroVel=0,
    Sliding,
    Sticking
};

#endif