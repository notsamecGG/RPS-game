#pragma once

#include "common.hpp"
#include "obj.hpp"


const GameObject rock = GameObject("rock", "scissors");
const GameObject paper = GameObject("paper", "rock");
const GameObject scissors = GameObject("scissors", "paper");

const GameObject gameObjList[] = {rock, paper, scissors};
const char objList[] = {rock.value[0], paper.value[0], scissors.value[0]}; 
GameObject objectFromChar(char& c)
{
    for (int i = 0; i < std::size(objList); i++)
    {
        if (objList[i] == c)
            return gameObjList[i];
    }

    return GameObject();
}
