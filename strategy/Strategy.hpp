//
//  Strategy.hpp
//  strategy pattern
//
//  Created by Geeth Madhushan on 2022-03-18.
//

#ifndef Strategy_hpp
#define Strategy_hpp

#include <stdio.h>

#endif /* Strategy_hpp */

#include <iostream>
#include <string>
#include <vector>

class Strategy
{
    public:
    ~Strategy();
    virtual std::string action(const std::vector<std::string> &data);
};
