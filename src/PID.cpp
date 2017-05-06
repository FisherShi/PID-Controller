#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    p_error = 100;
    i_error = 100;
    d_error = 100;
}

void PID::UpdateError(double cte) {

}

double PID::TotalError() {

}

