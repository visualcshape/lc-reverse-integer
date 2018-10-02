//
//  Solution.cpp
//  reverse_integer
//
//  Created by Chi-Chia Sun on 2018/10/2.
//  Copyright © 2018年 Chi-Chia Sun. All rights reserved.
//

#include "Solution.hpp"
#include <math.h>
#include <limits.h>
#include <vector>

using namespace std;

Solution::Solution(){
    
};

int Solution::reverse_integer(int input){
    vector<int> places;
    int result = 0;
    bool isNegative = -input >= 0;
    while(input != 0){
        places.push_back(abs(input % 10));
        input = (int)input/10;
    }
    int power = 0;
    for(vector<int>::reverse_iterator rItr = places.rbegin(); rItr != places.rend(); rItr++, power++){
        int toAdd = (int) (*rItr * pow(10, power));
        // overflow detection
        if(toAdd > INT_MAX - result || toAdd < 0){
            return 0;
        }
        result += *rItr * pow(10, power);
    }
    result = isNegative?-result:result;
    
    return result;
}
