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
* I first tweaked kp to a value to a value that the car's react to cte is in a reasonalbe range with moderate overshooting.
* then I tweaked kd to handle overshooting. I started from a very small value (0.001) and gradually increased the value.  
* then I tweaked ki to hadle systematic bias. I started from a very small value (0.001) and gradually increased the value.
# Others
* I set the speed limit to 30 mph. 
* I calcultated the time between each time a cte value is colleted to calculate derivative of cte 
