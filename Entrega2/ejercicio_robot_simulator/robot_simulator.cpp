#include "robot_simulator.h"

namespace robot_simulator {

Robot::Robot() {
    position = {0, 0};
    bearing = Bearing::NORTH;
}

Robot::Robot(std::pair<int, int> pos, Bearing dir) {
    position = pos;
    bearing = dir;
}

std::pair<int, int> Robot::get_position() const {
    return position;
}

Bearing Robot::get_bearing() const {
    return bearing;
}

void Robot::turn_right() {
    if (bearing == Bearing::NORTH) bearing = Bearing::EAST;
    else if (bearing == Bearing::EAST) bearing = Bearing::SOUTH;
    else if (bearing == Bearing::SOUTH) bearing = Bearing::WEST;
    else if (bearing == Bearing::WEST) bearing = Bearing::NORTH;
}

void Robot::turn_left() {
    if (bearing == Bearing::NORTH) bearing = Bearing::WEST;
    else if (bearing == Bearing::WEST) bearing = Bearing::SOUTH;
    else if (bearing == Bearing::SOUTH) bearing = Bearing::EAST;
    else if (bearing == Bearing::EAST) bearing = Bearing::NORTH;
}

void Robot::advance() {
    if (bearing == Bearing::NORTH) position.second++;
    else if (bearing == Bearing::EAST) position.first++;
    else if (bearing == Bearing::SOUTH) position.second--;
    else if (bearing == Bearing::WEST) position.first--;
}

void Robot::execute_sequence(const std::string& sequence) {
    for (char cmd : sequence) {
        if (cmd == 'R') turn_right();
        else if (cmd == 'L') turn_left();
        else if (cmd == 'A') advance();
    }
}

}
