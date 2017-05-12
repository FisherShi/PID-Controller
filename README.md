# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---

# The effect of the P, I, D components

### P controller
The larger the kp, the more sentive the car is to the current cte. If we set kp too large, the car will over-reacte to small cte. If we set kp too small, the car will not be able to handle sharp turns.
### I controller
The larger the ki, the more sentive the car is to the systematic bias. If we set ki too large, the car will drive violently without control. If we set ki too small, the car will not be able to adjust for systematic bias.
### D controller
The larger the kd, the more sentive the car is to the change in cte. If we set kd too large, the car will be too sensitive to small changes in cte. If we set kd too small, the car will overshoot constantly.
# How the final hyperparameters were chosen
