//
// Created by shumwe on 4/30/23.
//

#ifndef ROBOTNAME_ROBOTNAME_H
#define ROBOTNAME_ROBOTNAME_H

#include <string>
#include <iostream>
#include <random>

namespace robot_name
{
    struct robot
    {
        std::string r_name;

        robot()
        {
            reset();
        }

        [[nodiscard]] std::string name() const
        {
            return r_name;
        }

        void reset()
        {
            r_name = generate_new();
        }

        static std::string generate_new()
        {
            std::random_device rnd;
            std::mt19937 gen(rnd());
            std::uniform_int_distribution<> alpha_dist('A','Z');
            std::uniform_int_distribution<> num_dist(0,999);

            std::string a1 = std::string(1, (char) alpha_dist(gen));
            std::string a2 = std::string(1, (char) alpha_dist(gen));
            std::string num = std::to_string(num_dist(gen));
            num = std::string(3 - num.length(),'0')+num;

            return a1+a2+num;
        }
    };
}

#endif //ROBOTNAME_ROBOTNAME_H
