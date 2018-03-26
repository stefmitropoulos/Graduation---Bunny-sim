//
//  bunny_class.hpp
//  Graduation
//
//  Created by Stefanos Mitropoulos on 26/03/2018.
//  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
//

#ifndef bunny_class_hpp
#define bunny_class_hpp

#include <stdio.h>
#include <iostream>
#include <random>
#include "random_gen.hpp"

class bunny
{
private:
	std::string _sex{};
	std::string _colour{};
	int _age{0};
	std::string _name{};
	bool _radioactive_mutant_vampire_bunny{};
public:
	bunny();
	void print();
	void grow();


};

#endif /* bunny_class_hpp */
