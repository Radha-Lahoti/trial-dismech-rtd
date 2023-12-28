/**
 * @file baseForce.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-12-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "baseForce.h"

baseForce::baseForce(const shared_ptr<softRobots>& m_soft_robots) : soft_robots(m_soft_robots)
{
}

baseForce::~baseForce() = default;

void baseForce::setTimeStepper(shared_ptr<baseTimeStepper> m_stepper) {
    stepper = m_stepper;
}
