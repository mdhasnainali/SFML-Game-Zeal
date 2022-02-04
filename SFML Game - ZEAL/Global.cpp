#include "stdafx.h"
#include "Global.h"


vector <Texture> sequence;

float deltatime;


int game_status, menu_status;
bool locked, mouseclickglobal=false;


//Game Status
const int PLAYING=0, MENU=1, PAUSED=2, RESUME_GAME=3, MENU_EXTENSION =4, MENU_PAUSED_EXTENSION=5, ANIMATION = 6;

//Player Moves
const int UP=10, FOEWARD=11, BACKWARD=12, FIRE=13;

//Menu Type
const int OPTIONS=20, CREDITS=21, QUITS=22, STATS=23, MISSION_SELLECT=24;

//Audio
