    //
    //  main.cpp
    //  Graduation
    //
    //  Created by Stefanos Mitropoulos on 26/03/2018.
    //  Copyright © 2018 Stefanos Mitropoulos. All rights reserved.
    //

#include <iostream>
#include "bunny_class.hpp"
#include "game_develop.hpp"
#include <chrono>
#include <thread>

int main(int argc, const char * argv[]) {

    //std::this_thread::sleep_for(std::chrono::milliseconds(500));

    game_develop(10);
	std::cout<<"\n#################### 	THE END  ########################\n"<<std::endl;
    return 0;

}






