#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    p_error = 0;
    i_error = 0;
    d_error = 0;
}

void PID::UpdateError(double cte, double dt) {
    i_error += cte;
    if (dt == 0 ){
        d_error = 0;
    }
    else{
        d_error = (cte - p_error)/dt;
    }
    p_error = cte;
}

double PID::TotalError() {

}

