//
//  visitor.hpp
//  smurfFinalProject
//
//  Created by Alden Shiverick on 11/20/19.
//  Copyright © 2019 Alden Shiverick. All rights reserved.
//

#ifndef visitor_hpp
#define visitor_hpp

#include <stdio.h>
#include "node.hpp"
#include <string>
#pragma once

using namespace std;

class visitor {
public:
    virtual int evaluate_integer(node*, int);
    virtual int evaluate_binop(node*, node*, string, node*);
};

#endif /* visitor_hpp */
