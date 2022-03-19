//
//  Strategy.cpp
//  strategy pattern
//
//  Created by Geeth Madhushan on 2022-03-18.
//

#include "Strategy.hpp"

Strategy::~Strategy()
{
    std::cout << "Strategy destroyer" << std::endl;
}

std::string Strategy::action(const std::vector<std::string> &data)
{
    std::cout << "Strategy action" << std::endl;

    return "returning string from strategy action function.";
}
