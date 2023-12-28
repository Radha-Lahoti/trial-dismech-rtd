/**
 * @file forceContainer.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef FORCE_CONTAINER_H
#define FORCE_CONTAINER_H

#include "baseForce.h"
#include "external_forces/contactForce.h"
#include "external_forces/floorContactForce.h"

class forceContainer
{
public:
    forceContainer();
    explicit forceContainer(const vector<shared_ptr<baseForce>>& m_forces);
    ~forceContainer();

    void computeForces(double dt);
    void computeForcesAndJacobian(double dt);

    void setupForceStepperAccess(const shared_ptr<baseTimeStepper>& stepper);

    void addForce(const shared_ptr<baseForce>& force);

    shared_ptr<contactForce> cf;
    shared_ptr<floorContactForce> ff;

private:
    vector<shared_ptr<baseForce>> forces;
};

#endif
