#ifndef PLAYER_INCLUDED
#define PLAYER_INCLUDED
#include "utils.h"
#include "role.h"
typedef struct {
    string name;
    int xp;
    Role role;
    int lives;
    int storypos;
} Player;
#endif