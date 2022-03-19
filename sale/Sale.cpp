//
//  Sale.cpp
//  strategy pattern
//
//  Created by Geeth Madhushan on 2022-03-18.
//

#include "Sale.hpp"

Sale::Sale(Strategy *strategy) : strategy(strategy)
{
}

Sale::~Sale()
{
    delete this->strategy;
}

void Sale::sell()
{
    std::cout << "Sale : selling begins..." << std::endl;
    std::cout << this->strategy->action(std::vector<std::string> {"a", "b", "c"}) << std::endl;
}

void Sale::setStrategy(Strategy *strategy)
{
    delete this->strategy;
    this->strategy = strategy;
}
