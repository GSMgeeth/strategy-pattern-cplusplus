//
//  main.cpp
//  strategy pattern
//
//  Created by Geeth Madhushan on 2022-03-18.
//

#include <iostream>
#include "sale/Sale.hpp"
#include "projectSaleStrategy/ProjectSaleStrategy.cpp"
#include "customerSaleStrategy/CustomerSaleStrategy.cpp"

int main(int argc, const char * argv[]) {
    
    Sale *sale = new Sale(new ProjectSaleStrategy);
    
    std::cout << "Client: selling with project sale strategy." << std::endl;
    sale->sell();
    
    sale->setStrategy(new CustomerSaleStrategy);
    
    std::cout << "Client: selling with customer sale strategy." << std::endl;
    sale->sell();
    
    delete sale;
    
    return 0;
}
