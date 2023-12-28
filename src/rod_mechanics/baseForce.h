/**
 * @file baseForce.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef BASEFORCE_H
#define BASEFORCE_H

#include "eigenIncludes.h"
#include "softRobots.h"

class baseTimeStepper;

class baseForce
{
public:
    baseForce(const shared_ptr<softRobots>& m_soft_robots);
    virtual ~baseForce() = 0;

    virtual void computeForce(double dt) = 0;
    virtual void computeForceAndJacobian(double dt) = 0;

    void setTimeStepper(shared_ptr<baseTimeStepper> m_stepper);

protected:
    shared_ptr<softRobots> soft_robots;
    shared_ptr<baseTimeStepper> stepper = nullptr;
};

#endif
