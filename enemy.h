#ifndef ENEMY_INCLUDED
#define ENEMY_INCLUDED
#include "utils.h"
#include "loot.h"
typedef struct {
    int lives;
    Loot* loots;
} Enemy;
#endif