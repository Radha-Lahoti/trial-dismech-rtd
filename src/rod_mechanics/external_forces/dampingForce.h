/**
 * @file dampingForce.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef DAMPINGFORCE_H
#define DAMPINGFORCE_H

#include "rod_mechanics/baseForce.h"

class baseTimeStepper;

class dampingForce : public baseForce
{
public:
    dampingForce(const shared_ptr<softRobots>& m_soft_robots, double m_viscosity);
    ~dampingForce() override;

    void computeForce(double dt) override;
    void computeForceAndJacobian(double dt) override;

private:
    double viscosity;

    Vector3d force;
    int ind, indx, indy;
    double jac;
};

#endif
