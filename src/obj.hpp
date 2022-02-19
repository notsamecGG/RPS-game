#pragma once

#include <algorithm>
#include <list>
#include <string>


struct GameObject
{
    std::string value;
    std::string defeats;

    GameObject(const char* val, const char* defs) : value(val), defeats(defs) { }

    int getsDefeatedBy(GameObject& other)
    {
        if (value == other.value)
            return 0;
        
        // else if (std::find(defeats.begin(), defeats.end(), other.value) != defeats.end())
        //     return 1;
        else if (defeats == other.value)
            return -1;

        else 
            return 1;
    }

    int getsDefeatedBy(char& other)
    {
        if (value[0] == other)
            return 0;
        
        // else if (std::find(defeats.begin(), defeats.end(), other.value) != defeats.end())
        //     return 1;
        else if (defeats[0] == other)
            return -1;

        else 
            return 1;
    }
};