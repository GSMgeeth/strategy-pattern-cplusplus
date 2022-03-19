//
//  Sale.hpp
//  strategy pattern
//
//  Created by Geeth Madhushan on 2022-03-18.
//

#pragma once

#ifndef Sale_hpp
#define Sale_hpp

#include <stdio.h>
#include "Strategy.hpp"

#endif /* Sale_hpp */

class Sale {
private:
    Strategy *strategy;
public:
    Sale(Strategy *strategy = nullptr);
    ~Sale();
    
    void sell();
    void setStrategy(Strategy *strategy);
};
