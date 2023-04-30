#include <iostream>
#include "RobotHeaders/robotname.h"

int main() {
    robot_name::robot robo;

    std::cout << "Shipping Name: " << robo.name() << std::endl;

    std::cout << "Resetting name..." << std::endl;
    robo.reset(); //reset robots name
    // get new name
    std::cout << "New Name: " << robo.name() << std::endl;

    return 0;
}
