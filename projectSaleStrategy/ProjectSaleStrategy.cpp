//
//  ProjectSaleStrategy.cpp
//  strategy pattern
//
//  Created by Geeth Madhushan on 2022-03-18.
//

#include <stdio.h>
#include "../strategy/Strategy.hpp"

class ProjectSaleStrategy : public Strategy
{
public:
    std::string action(const std::vector<std::string> &data)
    {
        return "Project sale strategy.";
    }
};
