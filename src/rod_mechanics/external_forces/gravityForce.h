/**
 * @file gravityForce.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef GRAVITYFORCE_H
#define GRAVITYFORCE_H

#include "rod_mechanics/baseForce.h"

class baseTimeStepper;

class gravityForce : public baseForce
{
public:
    gravityForce(const shared_ptr<softRobots>& soft_robots, Vector3d g_vector);
    ~gravityForce() override;

    void computeForce(double dt) override;
    void computeForceAndJacobian(double dt) override;

private:
    Vector3d g_vector;
    void setGravity();
    vector<VectorXd> mass_gravities;
    VectorXd mass_gravity;
};

#endif
