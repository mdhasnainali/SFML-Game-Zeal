#ifndef GLOBAL_H
#define GLOBAL_H

extern vector <Texture> sequence;

extern float deltatime;

//Game Parameter
extern int game_status, menu_status;
extern bool locked, mouseclickglobal;

//Game Status
extern const int PLAYING, MENU, PAUSED, RESUME_GAME, MENU_EXTENSION, MENU_PAUSED_EXTENSION, ANIMATION;

//Player Moves
extern const int UP, FOEWARD, BACKWARD, FIRE;

//Menu Type
extern const int OPTIONS, CREDITS, QUITS, STATS, MISSION_SELLECT;


#endif // !GLOBAL_H

//

