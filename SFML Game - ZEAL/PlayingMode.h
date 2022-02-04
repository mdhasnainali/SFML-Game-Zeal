#pragma once
#include "Global.h"

class PlayingMode
{
private:
    //Gameover initiation:
    bool gameover;
    Texture gameovertexture;
    RectangleShape gameoverbody;

    //Gamewin initiation
    bool gamewin;
    RectangleShape gamewinbody;
    Texture gamewintexture;

    //Text initiation:
    Font font;

    Text text;
    //Obstacle check bool:
    bool steprightonx = true;
    bool stepleftonx = true;
    bool stepony = true;




    //Health & Shield:
    int health, shield;

    //health point initiation:
    RectangleShape healthbody;
    Texture healthtexture;

    double healthontimer, healthofftimer, healthx, healthy;
    bool healthon;

    //shield point initiation:
    RectangleShape shieldbody;
    Texture shieldtexture;

    double shieldontimer, shieldofftimer, shieldx, shieldy;
    bool shieldon;

    //health bar initiation:
    RectangleShape healthbarbody;
    Texture healthbar[6];


    //shield bar initiation:
    RectangleShape shieldbarbody;
    Texture shieldbar[6];


    //Coin count initiation:
    int count1, count2, count3, count4;

    RectangleShape coincountbody;
    Texture coincounttexture[10];



    //Coin initiation:
    RectangleShape coinbody;
    Texture cointexture[10];



    vector<pair<double, bool>>cointimer;
    vector<pair<double, double>>coin;


    //Obstackle initiation:

    Texture obstacletexture[10];

    //Log:
    RectangleShape obstaclebody;
    vector<pair<double, bool>>obstaclelogtimer;
    vector<pair<double, double>>obstaclelog;




    //stair:
    RectangleShape obstaclebodystair;

    vector<pair<double, bool>>obstaclestairtimer;
    vector<pair<double, double>>obstaclestair;





    //Slide:
    RectangleShape obstacleslidebody;
    vector<pair<double, bool>>obstacleslidetimer;
    vector<pair<double, double>>obstacleslide;


    //rock:
    RectangleShape obstaclerockbody;

    vector<pair<double, bool>>obstaclerocktimer;
    vector<pair<double, double>>obstaclerock;



    //river:
    RectangleShape obstacleriverbody;

    vector<pair<double, bool>>obstaclerivertimer;
    vector<pair<double, double>>obstacleriver;



    //hole:
    RectangleShape obstacleholebody;

    vector<pair<double, bool>>obstacleholetimer;
    vector<pair<double, double>>obstaclehole;







    //Enemy initiation:
    vector< pair <double, double>>enemy;
    vector<pair<double, bool>>enemyon;



    //Enemy 1 initiation:
    vector< pair <double, double>>enemy1;
    vector<pair<double, bool>>enemy1on;
    RectangleShape enemy1body;
    Texture enemy1texture[10];






    //Venom initiation:
    vector< pair <double, double>>enemy1venom;
    double enemy1venomtimer;
    RectangleShape enemy1venombody;
    Texture enemy1venomtexture;


    //Enemy 2 initiation:
    vector< pair <double, double>>enemy2;
    vector<pair<double, bool>>enemy2on;
    RectangleShape enemy2body;
    Texture enemy2texture[10];







    //Enemy 4 initiation:
    vector< pair <double, double>>enemy4;
    vector<pair<double, bool>>enemy4on;
    RectangleShape enemy4body;
    Texture enemy4texture[10];






    //Enemy 4 Venom initiation:
    vector< pair <double, double>>enemy4venom;
    double enemy4venomtimer;
    RectangleShape enemy4venombody;
    Texture enemy4venomtexture;

    //Enemy boss initiation:
    bool bossalive = true;
    pair <double, double>enemybossxy;
    pair<double, bool>enemybosson;
    double enemyboss;
    RectangleShape enemybossbody;
    Texture enemybosstexture[35];

    //enemy boss health initiation:

    RectangleShape enemybosshealthbarbody;
    Texture enemybosshealthbartexture[11];
    double enemybosshealth;

    //Enemy boss shooting initiation:
    vector< pair <double, double>>enemybossshoot;

    bool rockon;

    RectangleShape enemybossshootbody;
    Texture enemybossshoottexture;


    //Cave initiation:
    RectangleShape cavebody;
    Texture cavetexture;


    pair <double, double>cave;
    pair<double, bool>caveon;


    //Infinity stone
    bool infinitystoneon;
    Texture infinitystonetexture;
    RectangleShape infinitystonebody;


    //Puzzle on:
    RectangleShape puzzlebody;
    Texture puzzletexture;

    pair <double, double>puzzle;
    pair <double, double>puzzlea;
    pair <double, double>puzzleb;
    pair <double, double>puzzlec;
    pair<double, bool>puzzleon;
    bool puzzlesolved;

    RectangleShape puzzleabody;
    Texture puzzleabctexture[4];


    RectangleShape puzzlebbody;


    RectangleShape puzzlecbody;




    int a, b, c;
    bool mouseclick;


    RectangleShape body6;
    RectangleShape body5;
    RectangleShape body2;
    RectangleShape body1;
    RectangleShape body0;
    RectangleShape body3;
    RectangleShape body;
    RectangleShape collisionbody;

    Texture predator, background3texture, background5texture, playertexture3[10], playerdeathtexture[10], playertexture1[10], playertexture2[10], playertexture4[10], playertexture5[10], playertexture6[10], playertexture7[10], playertexture8[9], ex, ex1, bullet1, bullet2, collision;



    Sprite sprite, sprite1, background3sprite;
    RectangleShape bulletsprite1;
    RectangleShape bulletsprite2;

    

    //Character death initiation:
    RectangleShape playerdeathbody;
    bool death;
    bool downfalldeath;

    //Bullet
    vector< pair <double, double>>bullet;
    vector<bool>bulletface;



    int i, pos, jump, slide;
    double time, y, jumptimer, slidetimer, stepcount, collisiontime,speed;
    bool faceright, collisionbool;
    Vector2f movement;

    void initVariables();

public:
    PlayingMode();
    virtual ~PlayingMode();
    //void Update();
    //void Render(RenderTarget& target);

    void all_raender(RenderTarget& target);

};
