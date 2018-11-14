# COMS Commander

Receives `cmd_vel` and passes it on to the steering and accel, brake actuator.

## Dependencies

- [coms_msgs](https://github.com/tado-aev/coms_msgs)

## Parameters

- `steering_gear_ratio`: to turn the wheel X radians, we need to turn the
  steering wheel `steering_gear_ratio` * X radians
- `wheel_base`: distance from the front wheel to the rear wheel
- `update_rate`: how often to publish the commands
- `steering_vel`: steering angular velocity limit. Details later.
- `steering_acc`: steering angular acceleration limit
- `KP`, `KI`, `KD`: PID control parameters

## Steering Angular Velocity Limit

When turning the steering wheel, we need to limit the angular velocity at
which the steering wheel turns depending on the current velocity of the
vehicle. That is, when not moving, we don't want to turn the steering wheel at
all, and when moving slowly turn it slowly. After the vehicle gains speed, we
don't have to worry about how fast we turn the wheel.

Really, the reason why can't turn while stopping is because we use a belt
(rather than a chain), which slips when the load on the belt is too high.

The three values indicate the vehicle's velocity required to turn the steering
wheel, velocity required to turn the steering wheel at the angular velocity
limit (third parameter). For example, `[1, 3, 0.031416]` means that the
steering wheel won't turn until the vehicle is moving at 1.0m/s, and after
that the angular velocity will increase linearly until the vehicle reaches
3.0m/s, which is the velocity at which the steering wheel will turn at
0.031416rad/s.

## Subscribed topics

- `cmd_vel`: target linear and angular velocity

## Published topics

- `cmd_steer`: commanded steering angle
- `cmd_gab`: gear, accelerator, brake percentage

## License

MIT License

## Author

Naoki Mizuno
