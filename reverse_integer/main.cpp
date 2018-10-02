//
//  main.cpp
//  reverse_integer
//
//  Created by Chi-Chia Sun on 2018/10/2.
//  Copyright © 2018年 Chi-Chia Sun. All rights reserved.
//

#include <iostream>

#include "Solution.hpp"

int main(int argc, const char * argv[]) {
    Solution* sol = new Solution();
    std::cout << sol->reverse_integer(-2147483647) << std::endl;
    //printf("%d", INT_MIN);
    return 0;
}
