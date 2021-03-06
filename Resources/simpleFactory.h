//
// Created by fantom on 05.05.18.
//

#include "GameObject.h"
#include "Dot.h"
#include "resources.h"

#ifndef PROJECT_INFA_SIMPLEFACTORY_H
#define PROJECT_INFA_SIMPLEFACTORY_H

//Creates triangle to draw and collide
void createTriangle(Dot dot1, Dot dot2, Dot dot3, std::pair<float, float> speed, float mass, std::string texture_name);

void createBorder();

void createSquare(Dot dot1, Dot dot2, Dot dot3, Dot dot4, std::pair<float, float> speed, float mass, std::string texture_name, bool unmovable);

#endif //PROJECT_INFA_SIMPLEFACTORY_H
