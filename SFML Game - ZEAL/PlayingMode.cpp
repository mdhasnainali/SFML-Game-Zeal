#include "stdafx.h"
#include "Global.h"
#include "PlayingMode.h"


void PlayingMode::initVariables()
{
    //Gameover initiation:
    
    this->gameover = false;
    this->gameoverbody.setSize(Vector2f(1950.0f, 1100.0f));
    this->gameovertexture.loadFromFile("Gameover&Gamewin/Gameover.png");

    //Gamewin initiation
    this->gamewin = false;
    this->gamewinbody.setSize(Vector2f(1950.0f, 1100.0f));
    gamewintexture.loadFromFile("Gameover&Gamewin/Gamewin.png");
    
    //Health & Shield:
    this->health = 5;
    this->shield = 5;


    //Health point initiation
    this->healthbody.setSize(Vector2f(50.0f, 50.0f));
    healthtexture.loadFromFile("others/health&shield/health.png");
    this->healthontimer = 3.0;
    this->healthofftimer = 3.0;
    this->healthx = 200.0;
    this->healthy = 600.0;
    this->healthon = false;

    //Shield point initiation
    shieldtexture.loadFromFile("others/health&shield/shield.png");
    this->shieldbody.setSize(Vector2f(50.0f, 50.0f));
    this->shieldontimer = 3.0;
    this->shieldofftimer = 3.0;
    this->shieldx = 200.0;
    this->shieldy = 600.0;
    this->shieldon = false;

    //Health bar initiation:
    healthbar[0].loadFromFile("others/health&shield/health_bar000.png");
    healthbar[1].loadFromFile("others/health&shield/health_bar001.png");
    healthbar[2].loadFromFile("others/health&shield/health_bar002.png");
    healthbar[3].loadFromFile("others/health&shield/health_bar003.png");
    healthbar[4].loadFromFile("others/health&shield/health_bar004.png");
    healthbar[5].loadFromFile("others/health&shield/health_bar005.png");
    this->healthbarbody.setSize(Vector2f(300.0f, 50.0f));

    //Shield bar initiation:
    shieldbar[0].loadFromFile("others/health&shield/shield_bar000.png");
    shieldbar[1].loadFromFile("others/health&shield/shield_bar001.png");
    shieldbar[2].loadFromFile("others/health&shield/shield_bar002.png");
    shieldbar[3].loadFromFile("others/health&shield/shield_bar003.png");
    shieldbar[4].loadFromFile("others/health&shield/shield_bar004.png");
    shieldbar[5].loadFromFile("others/health&shield/shield_bar005.png");
    this->shieldbarbody.setSize(Vector2f(300.0f, 50.0f));

    //Coin count initiation:
    this->count1 = 0;
    this->count2 = 0;
    this->count3 = 0;
    this->count4 = 0;
    this->coincountbody.setSize((Vector2f(40.0f, 40.0f)));
    coincounttexture[0].loadFromFile("others/numbers/0.png");
    coincounttexture[1].loadFromFile("others/numbers/1.png");
    coincounttexture[2].loadFromFile("others/numbers/2.png");
    coincounttexture[3].loadFromFile("others/numbers/3.png");
    coincounttexture[4].loadFromFile("others/numbers/4.png");
    coincounttexture[5].loadFromFile("others/numbers/5.png");
    coincounttexture[6].loadFromFile("others/numbers/6.png");
    coincounttexture[7].loadFromFile("others/numbers/7.png");
    coincounttexture[8].loadFromFile("others/numbers/8.png");
    coincounttexture[9].loadFromFile("others/numbers/9.png");

    //Coin initiation:
    this->coinbody.setSize(Vector2f(80.0f, 80.0f));
    cointexture[0].loadFromFile("others/coin/Coin_000.png");
    cointexture[1].loadFromFile("others/coin/Coin_001.png");
    cointexture[2].loadFromFile("others/coin/Coin_002.png");
    cointexture[3].loadFromFile("others/coin/Coin_003.png");
    cointexture[4].loadFromFile("others/coin/Coin_004.png");
    cointexture[5].loadFromFile("others/coin/Coin_005.png");
    cointexture[6].loadFromFile("others/coin/Coin_006.png");
    cointexture[7].loadFromFile("others/coin/Coin_007.png");
    cointexture[8].loadFromFile("others/coin/Coin_008.png");
    cointexture[9].loadFromFile("others/coin/Coin_009.png");

    cointimer.push_back(make_pair(0.0, false));
    coin.push_back(make_pair(900.0, 10.0));
    cointimer.push_back(make_pair(2.0, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(5.0, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(10.0, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(8.2, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(16.0, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(24.3, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(20.3, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(28.3, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(33.2, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(42.7, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(46.7, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(44.6, false));
    coin.push_back(make_pair(2000.0, 450.0));
    cointimer.push_back(make_pair(44.8, false));
    coin.push_back(make_pair(2000.0, 450.0));
    cointimer.push_back(make_pair(41.5, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(43.5, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(45.5, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(54.2, false));
    coin.push_back(make_pair(2000.0, 600.0));
    cointimer.push_back(make_pair(47.5, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(62.2, false));
    coin.push_back(make_pair(2000.0, 550.0));
    cointimer.push_back(make_pair(64.2, false));
    coin.push_back(make_pair(2000, 350.0));
    cointimer.push_back(make_pair(66.2, false));
    coin.push_back(make_pair(2000, 550.0));
    cointimer.push_back(make_pair(68.2, false));
    coin.push_back(make_pair(2000, 750.0));
    cointimer.push_back(make_pair(70.2, false));
    coin.push_back(make_pair(2000, 550.0));
    cointimer.push_back(make_pair(72.2, false));
    coin.push_back(make_pair(2000, 350.0));
    cointimer.push_back(make_pair(73.2, false));
    coin.push_back(make_pair(2000, 350.0));
    cointimer.push_back(make_pair(74.2, false));
    coin.push_back(make_pair(2000, 350.0));
    cointimer.push_back(make_pair(75.2, false));
    coin.push_back(make_pair(2000, 350.0));
    cointimer.push_back(make_pair(72.2, false));
    coin.push_back(make_pair(2000, 750.0));
    cointimer.push_back(make_pair(73.2, false));
    coin.push_back(make_pair(2000, 750.0));
    cointimer.push_back(make_pair(74.2, false));
    coin.push_back(make_pair(2000, 750.0));
    cointimer.push_back(make_pair(75.2, false));
    coin.push_back(make_pair(2000, 750.0));
    cointimer.push_back(make_pair(77.2, false));
    coin.push_back(make_pair(2000, 550.0));
    cointimer.push_back(make_pair(79.2, false));
    coin.push_back(make_pair(2000.0, 350.0));
    cointimer.push_back(make_pair(81.2, false));
    coin.push_back(make_pair(2000.0, 550.0));
    cointimer.push_back(make_pair(83.2, false));
    coin.push_back(make_pair(2000.0, 750.0));
    cointimer.push_back(make_pair(85.2, false));
    coin.push_back(make_pair(2000.0, 550.0));
    cointimer.push_back(make_pair(90.2, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(93.0, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(95.2, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(110.2, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(142.2, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(141.2, false));
    coin.push_back(make_pair(2000.0, 450.0));
    cointimer.push_back(make_pair(140.2, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(145.0, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(150.2, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(165.2, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(170.0, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(172.0, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(174.0, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(176.0, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(178.0, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(180.0, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(182.0, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(184.0, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(186.0, false));
    coin.push_back(make_pair(2000.0, 650.0));
    cointimer.push_back(make_pair(200.0, false));
    coin.push_back(make_pair(2000.0, 850.0));
    cointimer.push_back(make_pair(200.0, false));
    coin.push_back(make_pair(2000.0, 650.0));

    //Obstacle initiation

    //Log:
    obstacletexture[0].loadFromFile("obstacle/log.png");
    this->obstaclebody.setSize(Vector2f(150.0f, 150.0f));

    obstaclelogtimer.push_back(make_pair(4.8, false));
    obstaclelog.push_back(make_pair(2000, 870.0));
    obstaclelogtimer.push_back(make_pair(90.0, false));
    obstaclelog.push_back(make_pair(2000.0, 870.0));
    obstaclelogtimer.push_back(make_pair(95.0, false));
    obstaclelog.push_back(make_pair(2000.0, 870.0));
    obstaclelogtimer.push_back(make_pair(110.0, false));
    obstaclelog.push_back(make_pair(2000.0, 870.0));

    //Stair
    obstacletexture[1].loadFromFile("obstacle/stair.png");
    this->obstaclebodystair.setSize(Vector2f(150.0f, 50.0f));

    obstaclestairtimer.push_back(make_pair(8.0, false));
    obstaclestair.push_back(make_pair(2000.0, 750.0));
    obstaclestairtimer.push_back(make_pair(24.0, false));
    obstaclestair.push_back(make_pair(2000.0, 750.0));
    obstaclestairtimer.push_back(make_pair(33.0, false));
    obstaclestair.push_back(make_pair(2000.0, 750.0));
    obstaclestairtimer.push_back(make_pair(42.5, false));
    obstaclestair.push_back(make_pair(2000.0, 750.0));
    obstaclestairtimer.push_back(make_pair(44.5, false));
    obstaclestair.push_back(make_pair(2000.0, 550.0));
    obstaclestairtimer.push_back(make_pair(46.5, false));
    obstaclestair.push_back(make_pair(2000.0, 750.0));
    obstaclestairtimer.push_back(make_pair(54.0, false));
    obstaclestair.push_back(make_pair(2000.0, 650.0));
    obstaclestairtimer.push_back(make_pair(62.0, false));
    obstaclestair.push_back(make_pair(2000.0, 650.0));
    obstaclestairtimer.push_back(make_pair(64.0, false));
    obstaclestair.push_back(make_pair(2000.0, 450.0));
    obstaclestairtimer.push_back(make_pair(66.0, false));
    obstaclestair.push_back(make_pair(2000.0, 650.0));
    obstaclestairtimer.push_back(make_pair(68.0, false));
    obstaclestair.push_back(make_pair(2000.0, 850.0));
    obstaclestairtimer.push_back(make_pair(70.0, false));
    obstaclestair.push_back(make_pair(2000.0, 650.0));
    obstaclestairtimer.push_back(make_pair(72.0, false));
    obstaclestair.push_back(make_pair(2000.0, 450.0));
    obstaclestairtimer.push_back(make_pair(72.5, false));
    obstaclestair.push_back(make_pair(2000.0, 450.0));
    obstaclestairtimer.push_back(make_pair(73.0, false));
    obstaclestair.push_back(make_pair(2000.0, 450.0));
    obstaclestairtimer.push_back(make_pair(73.5, false));
    obstaclestair.push_back(make_pair(2000.0, 450.0));
    obstaclestairtimer.push_back(make_pair(74.0, false));
    obstaclestair.push_back(make_pair(2000.0, 450.0));
    obstaclestairtimer.push_back(make_pair(74.5, false));
    obstaclestair.push_back(make_pair(2000.0, 450.0));
    obstaclestairtimer.push_back(make_pair(75.0, false));
    obstaclestair.push_back(make_pair(2000.0, 450.0));
    obstaclestairtimer.push_back(make_pair(72.0, false));
    obstaclestair.push_back(make_pair(2000.0, 850.0));
    obstaclestairtimer.push_back(make_pair(72.5, false));
    obstaclestair.push_back(make_pair(2000.0, 850.0));
    obstaclestairtimer.push_back(make_pair(73.0, false));
    obstaclestair.push_back(make_pair(2000.0, 850.0));
    obstaclestairtimer.push_back(make_pair(73.5, false));
    obstaclestair.push_back(make_pair(2000.0, 850.0));
    obstaclestairtimer.push_back(make_pair(74.0, false));
    obstaclestair.push_back(make_pair(2000.0, 850.0));
    obstaclestairtimer.push_back(make_pair(74.5, false));
    obstaclestair.push_back(make_pair(2000.0, 850.0));
    obstaclestairtimer.push_back(make_pair(75.0, false));
    obstaclestair.push_back(make_pair(2000.0, 850.0));
    obstaclestairtimer.push_back(make_pair(77.0, false));
    obstaclestair.push_back(make_pair(2000.0, 650.0));
    obstaclestairtimer.push_back(make_pair(79.0, false));
    obstaclestair.push_back(make_pair(2000.0, 450.0));
    obstaclestairtimer.push_back(make_pair(81.0, false));
    obstaclestair.push_back(make_pair(2000.0, 650.0));
    obstaclestairtimer.push_back(make_pair(83.0, false));
    obstaclestair.push_back(make_pair(2000.0, 850.0));
    obstaclestairtimer.push_back(make_pair(85.0, false));
    obstaclestair.push_back(make_pair(2000.0, 650.0));
    obstaclestairtimer.push_back(make_pair(140.0, false));
    obstaclestair.push_back(make_pair(2000.0, 750.0));
    obstaclestairtimer.push_back(make_pair(142.0, false));
    obstaclestair.push_back(make_pair(2000.0, 750.0));

    //Slide:
    obstacletexture[2].loadFromFile("obstacle/slide2.png");
    this->obstacleslidebody.setSize((Vector2f(500.0f, 500.0f)));

    obstacleslidetimer.push_back(make_pair(15, false));
    obstacleslide.push_back(make_pair(2000.0, 500.0));
    obstacleslidetimer.push_back(make_pair(92, false));
    obstacleslide.push_back(make_pair(2000.0, 500.0));

    //Rock:
    obstacletexture[3].loadFromFile("obstacle/rock.png");
    this->obstaclerockbody.setSize(Vector2f(200.0f, 200.0f));

    obstaclerocktimer.push_back(make_pair(52.0, false));
    obstaclerock.push_back(make_pair(2000.0, 850.0));
    obstaclerocktimer.push_back(make_pair(56.0, false));
    obstaclerock.push_back(make_pair(2000.0, 850.0));
    obstaclerocktimer.push_back(make_pair(60.0, false));
    obstaclerock.push_back(make_pair(2000.0, 850.0));
    obstaclerocktimer.push_back(make_pair(87.0, false));
    obstaclerock.push_back(make_pair(2000.0, 850.0));
    obstaclerocktimer.push_back(make_pair(165.0, false));
    obstaclerock.push_back(make_pair(2000.0, 850.0));

    //River:
    obstacletexture[4].loadFromFile("obstacle/river.png");
    this->obstacleriverbody.setSize(Vector2f(250.0f, 250.0f));
    obstaclerivertimer.push_back(make_pair(20.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(61.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(62.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(63.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(64.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(65.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(66.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(67.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(68.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(69.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(70.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(71.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(72.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(73.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(74.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(75.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(76.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(77.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(78.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(79.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(80.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(81.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(82.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(83.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(84.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(85.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));
    obstaclerivertimer.push_back(make_pair(86.0, false));
    obstacleriver.push_back(make_pair(2000.0, 810.0));

    //Hole:
    obstacletexture[5].loadFromFile("obstacle/hole.png");
    this->obstacleholebody.setSize(Vector2f(250.0f, 400.0f));

    obstacleholetimer.push_back(make_pair(28.0, false));
    obstaclehole.push_back(make_pair(2000.0, 670.0));
    obstacleholetimer.push_back(make_pair(32.0, false));
    obstaclehole.push_back(make_pair(2000.0, 670.0));
    obstacleholetimer.push_back(make_pair(33.0, false));
    obstaclehole.push_back(make_pair(2000.0, 670.0));
    obstacleholetimer.push_back(make_pair(40.0, false));
    obstaclehole.push_back(make_pair(2000.0, 670.0));
    obstacleholetimer.push_back(make_pair(42.0, false));
    obstaclehole.push_back(make_pair(2000.0, 670.0));
    obstacleholetimer.push_back(make_pair(44.0, false));
    obstaclehole.push_back(make_pair(2000.0, 670.0));
    obstacleholetimer.push_back(make_pair(46.0, false));
    obstaclehole.push_back(make_pair(2000.0, 670.0));
    obstacleholetimer.push_back(make_pair(48.0, false));
    obstaclehole.push_back(make_pair(2000.0, 670.0));

    //Enemy initiation:
    //Enemy:
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(101.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(102.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(105.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(105.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(105.5, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(105.7, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(107.6, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(108.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(110.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(112.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(117.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(119.6, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(121.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(122.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(125.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(135.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(135.5, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(137.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(163.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(175.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(176.2, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(178.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(182.7, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(187.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(189.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(191.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(192.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(194.0, false));
    enemy.push_back(make_pair(2000.0, 830.0));
    enemyon.push_back(make_pair(199.0, false));


    //Enemy1:
    this->enemy1body.setSize(Vector2f(200.0f, 200.0f));
    enemy1texture[0].loadFromFile("enemy1/0.png");
    enemy1texture[1].loadFromFile("enemy1/1.png");
    enemy1texture[2].loadFromFile("enemy1/2.png");
    enemy1texture[3].loadFromFile("enemy1/3.png");
    enemy1texture[4].loadFromFile("enemy1/4.png");
    enemy1texture[5].loadFromFile("enemy1/5.png");
    enemy1texture[6].loadFromFile("enemy1/6.png");
    enemy1texture[7].loadFromFile("enemy1/7.png");
    enemy1texture[8].loadFromFile("enemy1/8.png");
    enemy1texture[9].loadFromFile("enemy1/9.png");

    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(108.0, false));
    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(115.0, false));
    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(120.0, false));
    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(130.0, false));
    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(131.0, false));
    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(133.0, false));
    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(161.0, false));
    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(162.0, false));
    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(162.0, false));
    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(173.0, false));
    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(185.0, false));
    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(195.0, false));
    enemy1.push_back(make_pair(2000.0, 250.0));
    enemy1on.push_back(make_pair(200.0, false));

    //Enemy1 venom
    enemy1venomtexture.loadFromFile("enemy1/venom/1.png");
    this->enemy1venombody.setSize(Vector2f(50.0f, 50.0f));
    this->enemy1venomtimer = 1.0;

    //Enemy 2
    this->enemy2body.setSize(Vector2f(150.0f, 150.0f));
    enemy2texture[0].loadFromFile("enemy2/0.png");
    enemy2texture[1].loadFromFile("enemy2/1.png");
    enemy2texture[2].loadFromFile("enemy2/2.png");
    enemy2texture[3].loadFromFile("enemy2/3.png");
    enemy2texture[4].loadFromFile("enemy2/4.png");
    enemy2texture[5].loadFromFile("enemy2/5.png");
    enemy2texture[6].loadFromFile("enemy2/6.png");
    enemy2texture[7].loadFromFile("enemy2/7.png");
    enemy2texture[8].loadFromFile("enemy2/8.png");
    enemy2texture[9].loadFromFile("enemy2/9.png");

    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(107.2, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(107.5, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(107.8, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(108.7, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(108.9, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(113.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(115.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(116.5, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(118.5, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(123.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(124.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(154.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(155.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(158.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(159.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(160.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(164.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(180.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(184.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(185.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(188.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(196.0, false));
    enemy2.push_back(make_pair(2000.0, 830.0));
    enemy2on.push_back(make_pair(197.0, false));


    //Enemy 4:
    this->enemy4body.setSize(Vector2f(150.0f, 150.0f));
    enemy4texture[0].loadFromFile("enemy4/0.png");
    enemy4texture[1].loadFromFile("enemy4/1.png");
    enemy4texture[2].loadFromFile("enemy4/2.png");
    enemy4texture[3].loadFromFile("enemy4/3.png");
    enemy4texture[4].loadFromFile("enemy4/4.png");
    enemy4texture[5].loadFromFile("enemy4/5.png");
    enemy4texture[6].loadFromFile("enemy4/6.png");
    enemy4texture[7].loadFromFile("enemy4/7.png");
    enemy4texture[8].loadFromFile("enemy4/8.png");
    enemy4texture[9].loadFromFile("enemy4/9.png");

    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(117.5, false));
    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(120.0, false));
    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(126.5, false));
    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(127.5, false));
    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(134.0, false));
    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(150.0, false));
    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(151.0, false));
    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(152.0, false));
    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(165.5, false));
    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(186.5, false));
    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(192.5, false));
    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(193.5, false));
    enemy4.push_back(make_pair(2000.0, 830.0));
    enemy4on.push_back(make_pair(198.0, false));

    this->enemy4venomtimer = 1.0;
    this->enemy4venombody.setSize(Vector2f(50.0f, 50.0f));
    enemy4venomtexture.loadFromFile("enemy1/venom/1.png");


    //Enemy boss:
    enemybosstexture[0].loadFromFile("enemyboss/Shoot/0.png");
    enemybosstexture[1].loadFromFile("enemyboss/Shoot/1.png");
    enemybosstexture[2].loadFromFile("enemyboss/Shoot/2.png");
    enemybosstexture[3].loadFromFile("enemyboss/Shoot/3.png");
    enemybosstexture[4].loadFromFile("enemyboss/Shoot/4.png");
    enemybosstexture[5].loadFromFile("enemyboss/Shoot/5.png");
    enemybosstexture[6].loadFromFile("enemyboss/Shoot/6.png");
    enemybosstexture[7].loadFromFile("enemyboss/Shoot/7.png");
    enemybosstexture[8].loadFromFile("enemyboss/Shoot/8.png");
    enemybosstexture[9].loadFromFile("enemyboss/Shoot/9.png");
    enemybosstexture[10].loadFromFile("enemyboss/Shoot/10.png");
    enemybosstexture[11].loadFromFile("enemyboss/Shoot/11.png");
    enemybosstexture[12].loadFromFile("enemyboss/Shoot/12.png");
    enemybosstexture[13].loadFromFile("enemyboss/Shoot/13.png");
    enemybosstexture[14].loadFromFile("enemyboss/Shoot/14.png");
    enemybosstexture[15].loadFromFile("enemyboss/Shoot/15.png");
    enemybosstexture[16].loadFromFile("enemyboss/Shoot/16.png");
    enemybosstexture[17].loadFromFile("enemyboss/Shoot/17.png");
    enemybosstexture[18].loadFromFile("enemyboss/Shoot/18.png");
    enemybosstexture[19].loadFromFile("enemyboss/Shoot/19.png");
    enemybosstexture[20].loadFromFile("enemyboss/Shoot/20.png");
    enemybosstexture[21].loadFromFile("enemyboss/Shoot/21.png");
    enemybosstexture[22].loadFromFile("enemyboss/Shoot/22.png");
    enemybosstexture[23].loadFromFile("enemyboss/Shoot/23.png");
    enemybosstexture[24].loadFromFile("enemyboss/Shoot/24.png");
    enemybosstexture[25].loadFromFile("enemyboss/Shoot/25.png");
    enemybosstexture[26].loadFromFile("enemyboss/Shoot/26.png");
    enemybosstexture[27].loadFromFile("enemyboss/Shoot/27.png");
    enemybosstexture[28].loadFromFile("enemyboss/Shoot/28.png");
    enemybosstexture[29].loadFromFile("enemyboss/Shoot/29.png");
    enemybosstexture[30].loadFromFile("enemyboss/Shoot/30.png");
    enemybosstexture[31].loadFromFile("enemyboss/Shoot/31.png");
    enemybosstexture[32].loadFromFile("enemyboss/Shoot/32.png");
    enemybosstexture[33].loadFromFile("enemyboss/Shoot/33.png");
    enemybosstexture[34].loadFromFile("enemyboss/Shoot/34.png");

    this->enemybossbody.setSize(Vector2f(450.0f, 350.0f));
    this->enemyboss = 0.0;
    this->enemybossxy.first = 2000.0;
    this->enemybossxy.second = 650.0;
    this->enemybosson.first = 210.0;
    this->enemybosson.second = false;


    //Enemy boss health:
    this->enemybosshealthbarbody.setSize(Vector2f(300.0f, 50.0f));
    enemybosshealthbartexture[0].loadFromFile("enemyboss/health/0.png");
    enemybosshealthbartexture[1].loadFromFile("enemyboss/health/1.png");
    enemybosshealthbartexture[2].loadFromFile("enemyboss/health/2.png");
    enemybosshealthbartexture[3].loadFromFile("enemyboss/health/3.png");
    enemybosshealthbartexture[4].loadFromFile("enemyboss/health/4.png");
    enemybosshealthbartexture[5].loadFromFile("enemyboss/health/5.png");
    enemybosshealthbartexture[6].loadFromFile("enemyboss/health/6.png");
    enemybosshealthbartexture[7].loadFromFile("enemyboss/health/7.png");
    enemybosshealthbartexture[8].loadFromFile("enemyboss/health/8.png");
    enemybosshealthbartexture[9].loadFromFile("enemyboss/health/9.png");
    enemybosshealthbartexture[10].loadFromFile("enemyboss/health/10.png");

    this->enemybosshealth = 1000.0;


    //Enemyboss shoot:
    enemybossshoottexture.loadFromFile("enemyboss/shoot/rock.png");
    this->enemybosshealthbarbody.setSize(Vector2f(50.0f, 50.0f));
    this->rockon = true;

    //Cave:
    cavetexture.loadFromFile("cave.png");
    this->cavebody.setSize(Vector2f(600.0f, 600.0f));
    this->cave.first = 2000;
    this->cave.second = 450.0;
    this->caveon.first = 220.0;
    this->caveon.second = false;


    //Infinity stone
    infinitystonetexture.loadFromFile("infinitystone.png");
    this->infinitystonebody.setSize(Vector2f(620.0f, 540.0f));
    this->infinitystoneon = false;



    //Puzzle:
    puzzletexture.loadFromFile("puzzle.png");
    this->puzzlebody.setSize(Vector2f(1500.0f, 750.0f));

    puzzleabctexture[0].loadFromFile("0.png");
    puzzleabctexture[1].loadFromFile("1.png");
    puzzleabctexture[2].loadFromFile("2.png");
    puzzleabctexture[3].loadFromFile("3.png");
    this->puzzlesolved = false;
    this->puzzle.first = 0.0;
    this->puzzle.second = 150.0;
    this->puzzleon.first = 227.0;
    this->puzzleon.second = false;

    this->puzzleabody.setSize(Vector2f(300.0f, 300.0f));
    this->puzzlea.first = 0.0;
    this->puzzlea.second = 500.0;

    this->puzzlebbody.setSize(Vector2f(300.0f, 300.0f));
    this->puzzleb.first = 400.0;
    this->puzzleb.second = 500.0;

    this->puzzlecbody.setSize(Vector2f(300.0f, 300.0f));
    this->puzzlec.first = 820.0;
    this->puzzlec.second = 500.0;

    this->a = 0;
    this->b = 0;
    this->c = 0;
    this->mouseclick = false;



    collision.loadFromFile("collision.png");



    bullet1.loadFromFile("bullet/1.png");
    bullet2.loadFromFile("bullet/2.png");
    ex.loadFromFile("an/bk.png");
    ex1.loadFromFile("an/background2.png");
    background3texture.loadFromFile("an/background3.png");
    background5texture.loadFromFile("an/background5.png");

    this->speed=100.0;
    this->time = 0;
    this->y = 810.0;
    this->jumptimer = 0.0;
    this->slidetimer = 0.0;
    this->stepcount = 0.0;
    this->collisiontime = 0.0;
        this->faceright = true;
    this->collisionbool = false;

     this->body6.setSize(Vector2f(150.0f, 150.0f));
     this->body5.setSize(Vector2f(130.0f, 130.0f));
     this->body2.setSize(Vector2f(150.0f, 150.0f));
     this->body1.setSize(Vector2f(150.0f, 150.0f));
     this->body0.setSize(Vector2f(150.0f, 150.0f));
     this->body3.setSize(Vector2f(150.0f, 150.0f));
     this->body.setSize(Vector2f(150.0f, 150.0f));
     this->collisionbody.setSize(Vector2f(150.0f, 150.0f));

    playerdeathtexture[0].loadFromFile("Character/Die_000.png");
    playerdeathtexture[1].loadFromFile("Character/Die_001.png");
    playerdeathtexture[2].loadFromFile("Character/Die_002.png");
    playerdeathtexture[3].loadFromFile("Character/Die_003.png");
    playerdeathtexture[4].loadFromFile("Character/Die_004.png");
    playerdeathtexture[5].loadFromFile("Character/Die_005.png");
    playerdeathtexture[6].loadFromFile("Character/Die_006.png");
    playerdeathtexture[7].loadFromFile("Character/Die_007.png");
    playerdeathtexture[8].loadFromFile("Character/Die_008.png");
    playerdeathtexture[9].loadFromFile("Character/Die_009.png");

    playertexture8[0].loadFromFile("enemy/WALK_000.png");
    playertexture8[1].loadFromFile("enemy/WALK_001.png");
    playertexture8[2].loadFromFile("enemy/WALK_002.png");
    playertexture8[3].loadFromFile("enemy/WALK_003.png");
    playertexture8[4].loadFromFile("enemy/WALK_004.png");
    playertexture8[5].loadFromFile("enemy/WALK_005.png");
    playertexture8[6].loadFromFile("enemy/WALK_006.png");
    playertexture8[7].loadFromFile("enemy/WALK_007.png");
    playertexture8[8].loadFromFile("enemy/WALK_008.png");


    playertexture7[0].loadFromFile("Character/Slideb_000.png");
    playertexture7[1].loadFromFile("Character/Slideb_001.png");
    playertexture7[2].loadFromFile("Character/Slideb_002.png");
    playertexture7[3].loadFromFile("Character/Slideb_003.png");
    playertexture7[4].loadFromFile("Character/Slideb_004.png");
    playertexture7[5].loadFromFile("Character/Slideb_005.png");
    playertexture7[6].loadFromFile("Character/Slideb_006.png");
    playertexture7[7].loadFromFile("Character/Slideb_007.png");
    playertexture7[8].loadFromFile("Character/Slideb_008.png");
    playertexture7[9].loadFromFile("Character/Slideb_009.png");

    playertexture6[0].loadFromFile("Character/Slide_000.png");
    playertexture6[1].loadFromFile("Character/Slide_001.png");
    playertexture6[2].loadFromFile("Character/Slide_002.png");
    playertexture6[3].loadFromFile("Character/Slide_003.png");
    playertexture6[4].loadFromFile("Character/Slide_004.png");
    playertexture6[5].loadFromFile("Character/Slide_005.png");
    playertexture6[6].loadFromFile("Character/Slide_006.png");
    playertexture6[7].loadFromFile("Character/Slide_007.png");
    playertexture6[8].loadFromFile("Character/Slide_008.png");
    playertexture6[9].loadFromFile("Character/Slide_009.png");

    playertexture5[0].loadFromFile("Character/Jumpb_000.png");
    playertexture5[1].loadFromFile("Character/Jumpb_001.png");
    playertexture5[2].loadFromFile("Character/Jumpb_002.png");
    playertexture5[3].loadFromFile("Character/Jumpb_003.png");
    playertexture5[4].loadFromFile("Character/Jumpb_004.png");
    playertexture5[5].loadFromFile("Character/Jumpb_005.png");
    playertexture5[6].loadFromFile("Character/Jumpb_006.png");
    playertexture5[7].loadFromFile("Character/Jumpb_007.png");
    playertexture5[8].loadFromFile("Character/Jumpb_008.png");
    playertexture5[9].loadFromFile("Character/Jumpb_009.png");

    playertexture4[0].loadFromFile("Character/Jump_000.png");
    playertexture4[1].loadFromFile("Character/Jump_001.png");
    playertexture4[2].loadFromFile("Character/Jump_002.png");
    playertexture4[3].loadFromFile("Character/Jump_003.png");
    playertexture4[4].loadFromFile("Character/Jump_004.png");
    playertexture4[5].loadFromFile("Character/Jump_005.png");
    playertexture4[6].loadFromFile("Character/Jump_006.png");
    playertexture4[7].loadFromFile("Character/Jump_007.png");
    playertexture4[8].loadFromFile("Character/Jump_008.png");
    playertexture4[9].loadFromFile("Character/Jump_009.png");

    playertexture3[0].loadFromFile("Character/Run_000.png");
    playertexture3[1].loadFromFile("Character/Run_001.png");
    playertexture3[2].loadFromFile("Character/Run_002.png");
    playertexture3[3].loadFromFile("Character/Run_003.png");
    playertexture3[4].loadFromFile("Character/Run_004.png");
    playertexture3[5].loadFromFile("Character/Run_005.png");
    playertexture3[6].loadFromFile("Character/Run_006.png");
    playertexture3[7].loadFromFile("Character/Run_007.png");
    playertexture3[8].loadFromFile("Character/Run_008.png");
    playertexture3[9].loadFromFile("Character/Run_009.png");

    playertexture2[0].loadFromFile("Character/Runb_000.png");
    playertexture2[1].loadFromFile("Character/Runb_001.png");
    playertexture2[2].loadFromFile("Character/Runb_002.png");
    playertexture2[3].loadFromFile("Character/Runb_003.png");
    playertexture2[4].loadFromFile("Character/Runb_004.png");
    playertexture2[5].loadFromFile("Character/Runb_005.png");
    playertexture2[6].loadFromFile("Character/Runb_006.png");
    playertexture2[7].loadFromFile("Character/Runb_007.png");
    playertexture2[8].loadFromFile("Character/Runb_008.png");
    playertexture2[9].loadFromFile("Character/Runb_009.png");

    playertexture1[0].loadFromFile("Character/Idle_000.png");
    playertexture1[1].loadFromFile("Character/Idle_001.png");
    playertexture1[2].loadFromFile("Character/Idle_002.png");
    playertexture1[3].loadFromFile("Character/Idle_003.png");
    playertexture1[4].loadFromFile("Character/Idle_004.png");
    playertexture1[5].loadFromFile("Character/Idle_005.png");
    playertexture1[6].loadFromFile("Character/Idle_006.png");
    playertexture1[7].loadFromFile("Character/Idle_007.png");
    playertexture1[8].loadFromFile("Character/Idle_008.png");
    playertexture1[9].loadFromFile("Character/Idle_009.png");

    //Character death:
    this->death = false;
    this->downfalldeath = false;
    this->playerdeathbody.setSize(Vector2f(150.0f, 150.0f));

    i = 0, pos = 0, jump = 0, slide = 0;
    this->movement.x=500.0;

    this->bulletsprite1.setSize(Vector2f(50.0f, 50.0f));
    this->bulletsprite2.setSize(Vector2f(50.0f, 50.0f));

    this->sprite.setTexture(ex);
    this->sprite1.setTexture(ex1);
    this->background3sprite.setTexture(background3texture);
}

PlayingMode::Playmode()
{

}


PlayingMode::PlayingMode()
{
    this->initVariables();
}
PlayingMode:: ~PlayingMode()
{
    
}

void PlayingMode::all_raender(RenderTarget& target)
{

}


/*void Playmode::Update()
{
    //Background:


    ex.setRepeated(true);
    ex1.setRepeated(true);
    background3texture.setRepeated(true);



    body.setPosition(300.0f, 300.0f);
    sprite.setPosition(0.0f, 100.0f);
    sprite1.setPosition(0.0f, 0.0f);
    background3sprite.setPosition(0.0f, 240.0f);

    float speed = 200.0;
    pos = 0;
    if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx)
    {
        movement.x -= speed * deltatime;
        pos = 1;
        faceright = false;
        stepcount -= deltatime;
    }
    if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx)
    {
        movement.x += speed * deltatime;
        pos = 2;
        faceright = true;
        stepcount += deltatime;
    }
    if (Keyboard::isKeyPressed(Keyboard::W) || jump != 0)
    {
        if (jump == 0) {
            jump = 1;
            jumptimer = 5.0;
        }
        pos = 3;
    }
    if (Keyboard::isKeyPressed(Keyboard::S) || slide != 0)
    {
        if (slide == 0) {
            slide = 1;
            slidetimer = 1.0;
        }
        pos = 4;
    }
    if (Keyboard::isKeyPressed(Keyboard::Space))
    {
        mouseclick = true;
        if (faceright)
        {
            bullet.push_back(make_pair(800.0, y + 50));
            bulletface.push_back(true);
        }
        else
        {
            bullet.push_back(make_pair(680.0, y + 50));
            bulletface.push_back(false);
        }
    }


    if (pos == 2)
    {
        body2.setTexture(&playertexture3[i]);
    }
    else if (pos == 1)
    {
        body1.setTexture(&playertexture2[i]);
    }
    else if (pos == 0)
    {
        body0.setTexture(&playertexture1[i]);
    }
    else if (pos == 3)
    {
        if (faceright)body3.setTexture(&playertexture4[i]);
        else body3.setTexture(&playertexture5[i]);
    }
    else if (pos == 4)
    {
        if (faceright)body5.setTexture(&playertexture6[i]);
        else body5.setTexture(&playertexture7[i]);
    }

    //Obstacle check:
    steprightonx = true;
    stepleftonx = true;
    stepony = true;
    if (!obstaclelog.empty())
    {
        for (int j = 0; j < obstaclelog.size(); j++)
        {
            if (obstaclelog[j].first >= 600 && obstaclelog[j].first <= 800 && obstaclelog[j].second - 100 <= y && obstaclelogtimer[j].second)
            {

                if (faceright && (ceil(obstaclelog[j].first) == 800 || ceil(obstaclelog[j].first) == 799 || ceil(obstaclelog[j].first) == 798))
                {

                    steprightonx = false;
                }
                if (faceright == false && (ceil(obstaclelog[j].first) == 600 || (ceil(obstaclelog[j].first) == 601) || (ceil(obstaclelog[j].first) == 602)))
                {

                    stepleftonx = false;
                }
                stepony = false;
            }




        }
    }

    //Stair:

    if (!obstaclestair.empty())
    {
        for (int j = 0; j < obstaclestair.size(); j++)
        {
            if (obstaclestair[j].first >= 600 && obstaclestair[j].first <= 800 && obstaclestair[j].second - 150 <= y && obstaclestair[j].second - 100 >= y)
            {

                stepony = false;
            }


        }
    }

    //slide:
    if (!obstacleslide.empty())
    {
        for (int j = 0; j < obstacleslide.size(); j++)
        {
            if ((ceil(obstacleslide[j].first) == 600 || ceil(obstacleslide[j].first) == 601 || ceil(obstacleslide[j].first) == 602) && slide == 0 && faceright)
            {

                steprightonx = false;
            }
            if ((ceil(obstacleslide[j].first) == 500 || ceil(obstacleslide[j].first) == 501 || ceil(obstacleslide[j].first) == 502) && slide == 0 && faceright == false)
            {
                stepleftonx = false;
            }


        }
    }

    //rock:
    if (!obstaclerock.empty())
    {
        for (int j = 0; j < obstaclerock.size(); j++)
        {
            if (obstaclerock[j].first >= 550 && obstaclerock[j].first <= 750 && obstaclerock[j].second - 150 <= y && obstaclerocktimer[j].second)
            {

                if (faceright && (ceil(obstaclerock[j].first) == 750))
                {

                    steprightonx = false;
                }
                if (faceright == false && (ceil(obstaclerock[j].first) == 551 || (ceil(obstaclerock[j].first) == 552)))
                {

                    stepleftonx = false;
                }
                stepony = false;

            }



        }
    }

    //River check:

    if (!obstacleriver.empty())
    {
        for (int j = 0; j < obstacleriver.size(); j++)
        {
            if (740.0 >= obstacleriver[j].first && 760.0 <= obstacleriver[j].first + 200 && y >= 800.0)
            {
                death = true;
                downfalldeath = true;

            }
        }
    }

    //Hole check:

    if (!obstaclehole.empty())
    {
        for (int j = 0; j < obstaclehole.size(); j++)
        {
            if (740.0 >= obstaclehole[j].first && 760.0 <= obstaclehole[j].first + 200 && y >= 800.0)
            {
                death = true;
                downfalldeath = true;

            }
        }
    }
    if (gameover) { cout << "Gameover" << endl; }
    else { cout << endl; }




    //Coin check:
    if (!coin.empty())
    {
        for (int j = 0; j < coin.size(); j++)
        {
            if ((ceil(coin[j].first) >= 700 && ceil(coin[j].first) <= 800) && (coin[j].second >= y && coin[j].second <= y + 150.0) && cointimer[j].second)
            {
                coin.erase(coin.begin() + j);
                cointimer.erase(cointimer.begin() + j);;
                count4++;
                if (count4 > 9)
                {
                    count3++;
                    count4 = 0;
                }
                if (count3 > 9)
                {
                    count2++;
                    count3 = 0;
                }
                if (count2 > 9)
                {
                    count1++;
                    count2 = 0;
                }
            }
        }
    }
    //enemy check:
    if (!enemy.empty())
    {
        for (int j = 0; j < enemy.size(); j++)
        {
            if ((ceil(enemy[j].first) == 700 || ceil(enemy[j].first) == 701 || ceil(enemy[j].first) == 702) && (enemy[j].second >= y - 100.0 && enemy[j].second <= y + 100.0) && enemyon[j].second)
            {
                collisionbody.setPosition(enemy[j].first, enemy[j].second);
                collisionbool = true;
                collisiontime = .5;
                enemy.erase(enemy.begin() + j);
                enemyon.erase(enemyon.begin() + j);;

                if (shield > 0)
                {
                    shield--;
                }
                else if (health > 0)
                {
                    health--;
                }
                else { death = true; }

            }
        }
    }

    //enemy 2 check:
    if (!enemy2.empty())
    {
        for (int j = 0; j < enemy2.size(); j++)
        {
            if ((ceil(enemy2[j].first) == 700 || ceil(enemy2[j].first) == 701 || ceil(enemy2[j].first) == 702) && (enemy2[j].second >= y - 100.0 && enemy2[j].second <= y + 100.0) && enemy2on[j].second)
            {
                collisionbody.setPosition(enemy2[j].first, enemy2[j].second);
                collisionbool = true;
                collisiontime = .5;
                enemy2.erase(enemy2.begin() + j);
                enemy2on.erase(enemy2on.begin() + j);;

                if (shield > 0)
                {
                    shield--;
                }
                else if (health > 0)
                {
                    health--;
                }
                else { death = true; }

            }
        }
    }
    //enemy 4 check:
    if (!enemy4.empty())
    {
        for (int j = 0; j < enemy4.size(); j++)
        {
            if ((ceil(enemy4[j].first) == 700 || ceil(enemy4[j].first) == 701 || ceil(enemy4[j].first) == 702) && (enemy4[j].second >= y - 100.0 && enemy4[j].second <= y + 100.0) && enemy4on[j].second)
            {
                collisionbody.setPosition(enemy4[j].first, enemy4[j].second);
                collisionbool = true;
                collisiontime = .5;
                enemy4.erase(enemy4.begin() + j);
                enemy4on.erase(enemy4on.begin() + j);;

                if (shield > 0)
                {
                    shield--;
                }
                else if (health > 0)
                {
                    health--;
                }
                else { death = true; }

            }
        }
    }
    //enemy 4 venom check:
    if (!enemy4venom.empty())
    {
        for (int j = 0; j < enemy4venom.size(); j++)
        {
            if (enemy4venom[j].first >= 700 && enemy4venom[j].first <= 800 && enemy4venom[j].second >= y && enemy4venom[j].second <= y + 100)
            {
                collisionbody.setPosition(enemy4venom[j].first, enemy4venom[j].second);
                collisionbool = true;
                collisiontime = .5;
                enemy4venom.erase(enemy4venom.begin() + j);


                if (shield > 0)
                {
                    shield--;
                }
                else if (health > 0)
                {
                    health--;
                }
                else { death = true; }

            }
        }
    }
    //enemy 1 venom check:
    if (!enemy1venom.empty())
    {
        for (int j = 0; j < enemy1venom.size(); j++)
        {
            if (enemy1venom[j].first >= 700 && enemy1venom[j].first <= 800 && enemy1venom[j].second >= y && enemy1venom[j].second <= y + 100)
            {
                collisionbody.setPosition(enemy1venom[j].first, enemy1venom[j].second);
                collisionbool = true;
                collisiontime = .5;
                enemy1venom.erase(enemy1venom.begin() + j);


                if (shield > 0)
                {
                    shield--;
                }
                else if (health > 0)
                {
                    health--;
                }
                else { death = true; }

            }
        }
    }

    //enemy boss shoot check:
    if (!enemybossshoot.empty())
    {
        for (int j = 0; j < enemybossshoot.size(); j++)
        {
            if (enemybossshoot[j].first >= 700 && enemybossshoot[j].first <= 800 && enemybossshoot[j].second >= y && enemybossshoot[j].second <= y + 100)
            {
                collisionbody.setPosition(enemybossshoot[j].first, enemybossshoot[j].second);
                collisionbool = true;
                collisiontime = .5;
                enemybossshoot.erase(enemybossshoot.begin() + j);


                if (shield > 0)
                {
                    shield--;
                }
                else if (health > 0)
                {
                    health--;
                }
                else { death = true; }

            }
        }
    }

    //Enemy boss check:

    if ((ceil(enemybossxy.first) == 750 || ceil(enemybossxy.first) == 751 || ceil(enemybossxy.first) == 752) && faceright)
    {
        steprightonx = false;

    }




    //Collision check:

    collisionbody.setTexture(&collision);

    for (int j = 0; j < bullet.size(); j++)
    {
        for (int k = 0; k < enemy.size(); k++)
        {
            if ((bullet[j].first >= enemy[k].first - 10 && bullet[j].first <= enemy[k].first + 10) && (bullet[j].second >= 800.0 && bullet[j].second <= 880.0) && enemyon[k].second)
            {
                collisionbody.setPosition(bullet[j].first, bullet[j].second);
                collisionbool = true;
                collisiontime = .5;
                enemy.erase(enemy.begin() + k);
                enemyon.erase(enemyon.begin() + k);
                bullet.erase(bullet.begin() + j);
                bulletface.erase(bulletface.begin() + j);

            }
        }
        for (int k = 0; k < enemy2.size(); k++)
        {
            if ((bullet[j].first >= enemy2[k].first - 10 && bullet[j].first <= enemy2[k].first + 10) && (bullet[j].second >= 800.0 && bullet[j].second <= 880.0) && enemy2on[k].second)
            {
                collisionbody.setPosition(bullet[j].first, bullet[j].second);
                collisionbool = true;
                collisiontime = .5;
                enemy2.erase(enemy2.begin() + k);
                enemy2on.erase(enemy2on.begin() + k);
                bullet.erase(bullet.begin() + j);
                bulletface.erase(bulletface.begin() + j);

            }
        }

        for (int k = 0; k < enemy4.size(); k++)
        {
            if ((bullet[j].first >= enemy4[k].first - 10 && bullet[j].first <= enemy4[k].first + 10) && (bullet[j].second >= 800.0 && bullet[j].second <= 880.0) && enemy4on[k].second)
            {
                collisionbody.setPosition(bullet[j].first, bullet[j].second);
                collisionbool = true;
                collisiontime = .5;
                enemy4.erase(enemy4.begin() + k);
                enemy4on.erase(enemy4on.begin() + k);
                bullet.erase(bullet.begin() + j);
                bulletface.erase(bulletface.begin() + j);

            }
        }

        if ((bullet[j].first >= enemybossxy.first && bullet[j].first <= enemybossxy.first + 10) && (bullet[j].second >= 650.0 && bullet[j].second <= 880.0) && enemybosson.second)
        {
            collisionbody.setPosition(bullet[j].first, bullet[j].second);
            collisionbool = true;
            collisiontime = .5;

            bullet.erase(bullet.begin() + j);
            bulletface.erase(bulletface.begin() + j);

            if (enemybosshealth >= 0) { enemybosshealth -= (deltatime * 500); }
            else { bossalive = false; }

        }

    }


    //health check:
    if (healthx >= 700 && healthx <= 750.0 && y >= healthy - 50 && y <= healthy + 100 && healthon)
    {
        healthontimer = 0.0;
        if (health < 5) { health++; }
        healthon = false;
    }

    //shield check:
    if (shieldx >= 700 && shieldx <= 800.0 && y >= shieldy - 50 && y <= shieldy + 100 && shieldon)
    {
        shieldon = false;
        shieldontimer = 0.0;

        if (shield < 5) { shield++; }
    }
    //cout<<shield<<" "<<health<<endl;




    if (i >= 9) { i = 0; }
    time += deltatime;
    if (time > 0.1)
    {
        i++;
        time = 0.0;
    }

    sprite.setTextureRect(IntRect(movement.x, 0, 1500 + movement.x, 1000));
    sprite1.setTextureRect(IntRect(movement.x, 0, 1500 + movement.x, 1000));
    background3sprite.setTextureRect(IntRect(movement.x, 0, 1500 + movement.x, 1000));

    bulletsprite1.setTexture(&bullet1);
    bulletsprite2.setTexture(&bullet2);

    background3sprite.setTexture(background3texture);



    if (jump)
    {
        jumptimer -= (deltatime * 3);
        if (jumptimer >= 2.5) { y -= (deltatime * (speed + 100)); }
        else { if (stepony)y += (deltatime * (speed + 100)); }
        if (jumptimer <= 0.0)
        {

            jump = 0;
            jumptimer = 0.0;
        }
    }
    if (y < 810.0 && stepony && jump == 0) { y += (deltatime * (speed + 100)); }
    if (y > 810.0 && downfalldeath == false) { y = 810.0; }
    if (slide)
    {
        slidetimer -= deltatime;

        if (slidetimer <= 0.0)
        {
            y = 810.0;
            slide = 0;
            slidetimer = 0.0;
        }
    }


    body0.setPosition(700.0f, y);
    body1.setPosition(700.0f, y);
    body2.setPosition(700.0f, y);
    body3.setPosition(700.0f, y);
    body5.setPosition(700.0f, y + 50);


    //std::cout<<time<<" "<<stepcount<<std::endl;


    //Player death update:
    if (death)
    {
        if (downfalldeath) { y += (deltatime * speed); }
        playerdeathbody.setPosition(700.0, y);
        playerdeathbody.setTexture(&playerdeathtexture[i]);
        if (y >= 1000.0) { gameover = true; }
    }

    //Obstacle update:

    //Log:
    if (!obstaclelog.empty())
    {
        for (int j = 0; j < obstaclelog.size(); j++)
        {
            if (stepcount >= obstaclelogtimer[j].first && stepcount <= obstaclelogtimer[j].first + 12.0)
            {
                obstaclelogtimer[j].second = true;
                obstaclebody.setTexture(&obstacletexture[0]);

            }
            else { obstaclelogtimer[j].second = false; }
            if (obstaclelogtimer[j].second)
            {

                if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx)
                {
                    obstaclelog[j].first -= (deltatime * speed);

                }
                if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx)
                {
                    obstaclelog[j].first += (deltatime * speed);

                }
            }

        }
    }

    //Stair:

    if (!obstaclestair.empty())
    {
        for (int j = 0; j < obstaclestair.size(); j++)
        {
            if (stepcount >= obstaclestairtimer[j].first && stepcount <= obstaclestairtimer[j].first + 12.0) { obstaclestairtimer[j].second = true; }
            else { obstaclestairtimer[j].second = false; }
            if (obstaclestairtimer[j].second)
            {

                if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx)
                {
                    obstaclestair[j].first -= (deltatime * speed);

                }
                if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx)
                {
                    obstaclestair[j].first += (deltatime * speed);

                }
            }

        }
    }

    //Slide:
    if (!obstacleslide.empty())
    {
        for (int j = 0; j < obstacleslide.size(); j++)
        {
            if (stepcount >= obstacleslidetimer[j].first && stepcount <= obstacleslidetimer[j].first + 12.0) { obstacleslidetimer[j].second = true; }
            else { obstacleslidetimer[j].second = false; }
            if (obstacleslidetimer[j].second)
            {

                if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx)
                {
                    obstacleslide[j].first -= (deltatime * speed);

                }
                if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx)
                {
                    obstacleslide[j].first += (deltatime * speed);

                }
            }

        }
    }
    //rock:
    if (!obstaclerock.empty())
    {
        for (int j = 0; j < obstaclerock.size(); j++)
        {
            if (stepcount >= obstaclerocktimer[j].first && stepcount <= obstaclerocktimer[j].first + 12.0)
            {
                obstaclerocktimer[j].second = true;
                obstaclerockbody.setTexture(&obstacletexture[3]);

            }
            else { obstaclerocktimer[j].second = false; }
            if (obstaclerocktimer[j].second)
            {

                if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx)
                {
                    obstaclerock[j].first -= (deltatime * speed);

                }
                if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx)
                {
                    obstaclerock[j].first += (deltatime * speed);

                }
            }

        }
    }
    //river:
    if (!obstacleriver.empty())
    {
        for (int j = 0; j < obstacleriver.size(); j++)
        {
            if (stepcount >= obstaclerivertimer[j].first && stepcount <= obstaclerivertimer[j].first + 12.0)
            {
                obstaclerivertimer[j].second = true;
                obstacleriverbody.setTexture(&obstacletexture[4]);

            }
            else { obstaclerivertimer[j].second = false; }
            if (obstaclerivertimer[j].second)
            {

                if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx)
                {
                    obstacleriver[j].first -= (deltatime * speed);

                }
                if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx)
                {
                    obstacleriver[j].first += (deltatime * speed);

                }
            }

        }
    }

    //hole:
    if (!obstaclehole.empty())
    {
        for (int j = 0; j < obstaclehole.size(); j++)
        {
            if (stepcount >= obstacleholetimer[j].first && stepcount <= obstacleholetimer[j].first + 12.0)
            {
                obstacleholetimer[j].second = true;
                obstacleholebody.setTexture(&obstacletexture[5]);

            }
            else { obstacleholetimer[j].second = false; }
            if (obstacleholetimer[j].second)
            {

                if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx)
                {
                    obstaclehole[j].first -= (deltatime * speed);

                }
                if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx)
                {
                    obstaclehole[j].first += (deltatime * speed);

                }
            }

        }
    }

    //health bar update:

    healthbarbody.setTexture(&healthbar[health]);
    healthbarbody.setPosition(10.0, 10.0);

    //shield bar update:

    shieldbarbody.setTexture(&shieldbar[shield]);
    shieldbarbody.setPosition(10.0, 70.0);


    //health update:
    if (stepcount >= 86.0 && stepcount <= 1000.0)
    {

        if (healthontimer > 0.0)
        {
            healthontimer -= deltatime;
            healthon = true;
        }
        else if (healthofftimer > 0.0)
        {
            healthon = false;
            healthofftimer -= deltatime;
            healthx = 50.0 + rand() % 1450;
            healthy = 650.0 + rand() % 200;
        }
        else
        {
            healthontimer = 5.0;
            healthofftimer = 5.0;
        }
        healthbody.setTexture(&healthtexture);
        healthbody.setPosition(healthx, healthy);


    }
    if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx)
    {
        healthx -= (deltatime * speed);

    }
    if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx)
    {
        healthx += (deltatime * speed);

    }

    //Shield update:
    if (stepcount >= 86.0 && stepcount <= 1500.0)
    {

        if (shieldontimer > 0.0)
        {
            shieldontimer -= deltatime;
            shieldon = true;
            shieldbody.setPosition(shieldx, shieldy);
        }
        else if (shieldofftimer > 0.0)
        {
            shieldon = false;
            shieldofftimer -= deltatime;
            shieldx = 50.0 + rand() % 1450;
            shieldy = 650.0 + rand() % 200;
        }
        else
        {
            shieldontimer = 5.0;
            shieldofftimer = 5.0;
        }
        shieldbody.setTexture(&shieldtexture);




    }

    if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx)
    {
        shieldx -= (deltatime * speed);

    }
    if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx)
    {
        shieldx += (deltatime * speed);

    }


    //coin update:
    if (!coin.empty())
    {
        for (int j = 0; j < coin.size(); j++)
        {
            if (stepcount >= cointimer[j].first && stepcount <= cointimer[j].first + 12.0)
            {
                cointimer[j].second = true;
                coinbody.setTexture(&cointexture[i]);

            }
            else { cointimer[j].second = false; }
            if (cointimer[j].second)
            {

                if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx && cointimer[j].first != 0.0)
                {
                    coin[j].first -= (deltatime * speed);

                }
                if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx && cointimer[j].first != 0.0)
                {
                    coin[j].first += (deltatime * speed);

                }
            }
            if (cointimer[j].first == 0.0) { cointimer[j].second = true; }
        }
    }


    //enemy 1 venom update:

    enemy1venomtimer -= deltatime;
    enemy1venombody.setTexture(&enemy1venomtexture);

    if (!enemy1.empty() && enemy1venomtimer <= 0)
    {
        for (int j = 0; j < enemy1.size(); j++)
        {
            if (enemy1on[j].second)
            {
                enemy1venom.push_back(make_pair(enemy1[j].first + 20, enemy1[j].second + 40));
            }

        }
        enemy1venomtimer = 1.0;
    }

    //enemy 4 venom update:

    enemy4venomtimer -= deltatime;
    enemy4venombody.setTexture(&enemy4venomtexture);

    if (!enemy4.empty() && enemy4venomtimer <= 0)
    {
        for (int j = 0; j < enemy4.size(); j++)
        {
            if (enemy4on[j].second)
            {
                enemy4venom.push_back(make_pair(enemy4[j].first + 20, enemy4[j].second + 40));
            }

        }
        enemy4venomtimer = 1.0;
    }

    //enemy boss shoot update:


    if ((int)enemyboss == 20 && rockon && bossalive)
    {
        enemybossshoot.push_back(make_pair(enemybossxy.first + 20, enemybossxy.second + 200));
        enemy1.push_back(make_pair(1500.0, 100.0));
        enemy1on.push_back(make_pair(200.0, true));
        rockon = false;
    }
    if ((int)enemyboss == 0) { rockon = true; }

    //Cave update:

    if (stepcount >= caveon.first)
    {
        caveon.second = true;
    }
    if (caveon.second)
    {
        if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx) { cave.first -= (deltatime * speed); }
        else if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx) { cave.first += (deltatime * speed); }
        cavebody.setTexture(&cavetexture);
        cavebody.setPosition(cave.first, cave.second);
    }
    if (stepcount >= puzzleon.first && bossalive == false)
    {
        puzzleon.second = true;
    }

    puzzlebody.setPosition(puzzle.first, puzzle.second);
    puzzleabody.setPosition(puzzlea.first, puzzlea.second);
    puzzlebbody.setPosition(puzzleb.first, puzzleb.second);
    puzzlecbody.setPosition(puzzlec.first, puzzlec.second);
    puzzlebody.setTexture(&puzzletexture);


    if (mouseclick && Mouse::getPosition().x >= puzzlea.first && Mouse::getPosition().x <= puzzlea.first + 300.0 && Mouse::getPosition().y > puzzlea.second && Mouse::getPosition().y <= puzzlea.second + 300.0 && puzzleon.second)
    {
        cout << "a" << endl;
        a++;

    }
    else if (mouseclick && Mouse::getPosition().x >= puzzleb.first && Mouse::getPosition().x <= puzzleb.first + 300.0 && Mouse::getPosition().y > puzzleb.second && Mouse::getPosition().y <= puzzleb.second + 300.0 && puzzleon.second)
    {
        cout << "b" << endl;
        b++;

    }
    else if (mouseclick && Mouse::getPosition().x >= puzzlec.first && Mouse::getPosition().x <= puzzlec.first + 300.0 && Mouse::getPosition().y > puzzlec.second && Mouse::getPosition().y <= puzzlec.second + 300.0 && puzzleon.second)
    {
        cout << "c" << endl;
        c++;


    }

    puzzleabody.setTexture(&puzzleabctexture[a]);
    puzzlebbody.setTexture(&puzzleabctexture[b]);
    puzzlecbody.setTexture(&puzzleabctexture[c]);


    if (a >= 4) { a = 0; }
    if (b >= 4) { b = 0; }
    if (c >= 4) { c = 0; }
    if (a == 3 && b == 1 && c == 0)
    {
        puzzlesolved = true;
        cout << "Solved" << endl;
    }

    mouseclick = false;


    if (puzzlesolved)
    {
        puzzleon.second = false;
        caveon.second = false;
        infinitystoneon = true;
        infinitystonebody.setTexture(&infinitystonetexture);
        infinitystonebody.setPosition(cave.first, cave.second);
    }
    if (puzzlesolved && cave.first <= 500) { gamewin = true; }

    //Text update:
    font.loadFromFile("font/Berlin Sans FB Demi Bold.ttf");
    text.setFont(font);
    text.setFillColor(Color::Blue);
    stringstream ss;
    ss << count1 << count2 << count3 << count4 << endl;
    text.setString(ss.str());

    text.setCharacterSize(50);
    text.setPosition(1000, 455);
}



void Playmode::Render(RenderTarget& target)
{
    //if(stepcount>=0.0){background3sprite.setTexture(&background5texture);}

    target.draw(sprite1);   //PROBLEM
    if (stepcount >= 100.0) { target.draw(background3sprite); }
    sprite.setPosition(0.0f, 250.0f);
    target.draw(sprite);

    
    //Obstacle draw:

    //river:
    if (!obstacleriver.empty())
    {
        for (int j = 0; j < obstacleriver.size(); j++)
        {

            if (obstaclerivertimer[j].second)
            {
                obstacleriverbody.setPosition(obstacleriver[j].first, obstacleriver[j].second);
                target.draw(obstacleriverbody);
            }

        }
    }
    //hole:
    if (!obstaclehole.empty())
    {
        for (int j = 0; j < obstaclehole.size(); j++)
        {

            if (obstacleholetimer[j].second)
            {
                obstacleholebody.setPosition(obstaclehole[j].first, obstaclehole[j].second);
                target.draw(obstacleholebody);
            }

        }
    }

    //Log:

    if (!obstaclelog.empty())
    {
        for (int j = 0; j < obstaclelog.size(); j++)
        {

            if (obstaclelogtimer[j].second)
            {
                obstaclebody.setPosition(obstaclelog[j].first, obstaclelog[j].second);
                target.draw(obstaclebody);
            }

        }
    }
    //Stair:
    if (!obstaclestair.empty())
    {
        for (int j = 0; j < obstaclestair.size(); j++)
        {
            obstaclebodystair.setTexture(&obstacletexture[1]);

            if (obstaclestairtimer[j].second)
            {
                obstaclebodystair.setPosition(obstaclestair[j].first, obstaclestair[j].second);
                target.draw(obstaclebodystair);
            }

        }
    }




    //Slide:
    if (!obstacleslide.empty())
    {
        for (int j = 0; j < obstacleslide.size(); j++)
        {
            obstacleslidebody.setTexture(&obstacletexture[2]);

            if (obstacleslidetimer[j].second)
            {
                obstacleslidebody.setPosition(obstacleslide[j].first, obstacleslide[j].second);
                target.draw(obstacleslidebody);
            }

        }
    }
    //Rock:

    if (!obstaclerock.empty())
    {
        for (int j = 0; j < obstaclerock.size(); j++)
        {

            if (obstaclerocktimer[j].second)
            {
                obstaclerockbody.setPosition(obstaclerock[j].first, obstaclerock[j].second);
                target.draw(obstaclerockbody);
            }

        }
    }

    //Bullet draw:


    if (!bullet.empty())
    {
        for (int j = 0; j < bullet.size(); j++)
        {
            if (bulletface[j])bullet[j].first += deltatime * (speed + 50);
            else bullet[j].first -= deltatime * speed;
            if (bulletface[j])
            {
                if (Keyboard::isKeyPressed(Keyboard::D)) { bullet[j].first += deltatime; }
                else if (Keyboard::isKeyPressed(Keyboard::A)) { bullet[j].first += deltatime * speed; }
            }
            else
            {
                if (Keyboard::isKeyPressed(Keyboard::D)) { bullet[j].first -= deltatime * speed; }
                else if (Keyboard::isKeyPressed(Keyboard::A)) { bullet[j].first -= deltatime; }

            }
            if (bullet[j].first >= 2000.0 && bullet[j].first >= 0.0) { continue; }

            if (bulletface[j])
            {
                bulletsprite1.setPosition(Vector2f(bullet[j].first, bullet[j].second));
                target.draw(bulletsprite1);
            }
            else
            {
                bulletsprite2.setPosition(Vector2f(bullet[j].first, bullet[j].second));
                target.draw(bulletsprite2);
            }

        }
    }

    //Venom:
    if (!enemy1venom.empty())
    {
        for (int j = 0; j < enemy1venom.size(); j++)
        {
            if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx)
            {
                enemy1venom[j].first -= (deltatime * speed);

            }
            if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx)
            {
                enemy1venom[j].first += (deltatime * speed);

            }
            enemy1venom[j].second += (deltatime * speed);

            enemy1venombody.setPosition(enemy1venom[j].first, enemy1venom[j].second);
            target.draw(enemy1venombody);

        }
    }

    //Enemy 4 Venom:
    if (!enemy4venom.empty())
    {
        for (int j = 0; j < enemy4venom.size(); j++)
        {
            if (Keyboard::isKeyPressed(Keyboard::D)) { enemy4venom[j].first -= (deltatime * speed); }
            else if (Keyboard::isKeyPressed(Keyboard::A)) { enemy4venom[j].first -= deltatime; }
            enemy4venom[j].first -= (deltatime * (speed + 100));

            enemy4venombody.setTexture(&enemy4venomtexture);
            enemy4venombody.setPosition(enemy4venom[j].first, enemy4venom[j].second);
            target.draw(enemy4venombody);

        }
    }
    if (!enemy.empty())
    {
        if (i != 9)body6.setTexture(&playertexture8[i]);
        for (int j = 0; j < enemy.size(); j++)
        {
            if (stepcount >= enemyon[j].first) { enemyon[j].second = true; }

            if (enemyon[j].second)
            {

                enemy[j].first -= deltatime * (speed);
                if (Keyboard::isKeyPressed(Keyboard::A)) { enemy[j].first += deltatime; }
                if (Keyboard::isKeyPressed(Keyboard::D)) { enemy[j].first -= deltatime * speed; }
            }
            if (enemy[j].first <= 0.0)
            {
                enemy.erase(enemy.begin());
                enemyon.erase(enemyon.begin());

            }

            if (enemyon[j].second)
            {
                body6.setPosition(Vector2f(enemy[j].first, enemy[j].second));
                target.draw(body6);
            }
        }
    }

    if (!enemy1.empty())
    {
        enemy1body.setTexture(&enemy1texture[i]);
        for (int j = 0; j < enemy1.size(); j++)
        {
            if (stepcount >= enemy1on[j].first) { enemy1on[j].second = true; }

            if (enemy1on[j].second)
            {

                enemy1[j].first -= deltatime * (speed);
                if (Keyboard::isKeyPressed(Keyboard::A)) { enemy1[j].first += deltatime; }
                if (Keyboard::isKeyPressed(Keyboard::D)) { enemy1[j].first -= deltatime * speed; }
            }
            if (enemy1[j].first <= 0.0)
            {
                enemy1.erase(enemy1.begin());
                enemy1on.erase(enemy1on.begin());

            }

            if (enemy1on[j].second)
            {
                enemy1body.setPosition(Vector2f(enemy1[j].first, enemy1[j].second));
                target.draw(enemy1body);
            }
        }
    }

    //Enemy 2:

    if (!enemy2.empty())
    {
        enemy2body.setTexture(&enemy2texture[i]);
        for (int j = 0; j < enemy2.size(); j++)
        {
            if (stepcount >= enemy2on[j].first) { enemy2on[j].second = true; }

            if (enemy2on[j].second)
            {

                enemy2[j].first -= deltatime * (speed);
                if (Keyboard::isKeyPressed(Keyboard::A)) { enemy2[j].first += deltatime; }
                if (Keyboard::isKeyPressed(Keyboard::D)) { enemy2[j].first -= deltatime * speed; }
            }
            if (enemy2[j].first <= 0.0)
            {
                enemy2.erase(enemy2.begin());
                enemy2on.erase(enemy2on.begin());

            }

            if (enemy2on[j].second)
            {
                enemy2body.setPosition(Vector2f(enemy2[j].first, enemy2[j].second));
                target.draw(enemy2body);
            }
        }
    }

    //Enemy 4:

    if (!enemy4.empty())
    {
        enemy4body.setTexture(&enemy4texture[i]);
        for (int j = 0; j < enemy4.size(); j++)
        {
            if (stepcount >= enemy4on[j].first) { enemy4on[j].second = true; }

            if (enemy4on[j].second)
            {

                enemy4[j].first -= deltatime * (speed);
                if (Keyboard::isKeyPressed(Keyboard::A)) { enemy4[j].first += deltatime; }
                if (Keyboard::isKeyPressed(Keyboard::D)) { enemy4[j].first -= deltatime * speed; }
            }
            if (enemy4[j].first <= 0.0)
            {
                enemy4.erase(enemy4.begin());
                enemy4on.erase(enemy4on.begin());

            }

            if (enemy4on[j].second)
            {
                enemy4body.setPosition(Vector2f(enemy4[j].first, enemy4[j].second));
                target.draw(enemy4body);
            }
        }
    }

    //Enemy boss:
    if (stepcount >= enemybosson.first && bossalive) { enemybosson.second = true; }
    if (enemybosson.second && bossalive)
    {
        enemyboss += (deltatime * 10);
        if (enemyboss >= 35.0) { enemyboss = 0.0; }


        enemybossbody.setTexture(&enemybosstexture[(int)enemyboss]);
        enemybossbody.setPosition(enemybossxy.first, enemybossxy.second);
        target.draw(enemybossbody);

        enemybosshealthbarbody.setTexture(&enemybosshealthbartexture[(int)(enemybosshealth / 100.0)]);
        enemybosshealthbarbody.setPosition(enemybossxy.first + 50, enemybossxy.second - 50);
        target.draw(enemybosshealthbarbody);

        if (Keyboard::isKeyPressed(Keyboard::A) && stepleftonx) { enemybossxy.first += deltatime * speed; }
        if (Keyboard::isKeyPressed(Keyboard::D) && steprightonx) { enemybossxy.first -= deltatime * speed; }
    }

    //Enemy boss shoot:
    if (!enemybossshoot.empty())
    {
        for (int j = 0; j < enemybossshoot.size(); j++)
        {
            if (Keyboard::isKeyPressed(Keyboard::D)) { enemybossshoot[j].first -= deltatime * speed; }
            else if (Keyboard::isKeyPressed(Keyboard::A)) { enemybossshoot[j].first -= deltatime; }
            enemybossshoot[j].first -= deltatime * (speed + 100);

            enemybossshootbody.setTexture(&enemybossshoottexture);
            enemybossshootbody.setPosition(enemybossshoot[j].first, enemybossshoot[j].second);
            target.draw(enemybossshootbody);

        }
    }
    if (caveon.second) { target.draw(cavebody); }
    if (puzzleon.second) { target.draw(puzzlebody); }
    if (puzzleon.second) { target.draw(puzzleabody); }
    if (puzzleon.second) { target.draw(puzzlebbody); }
    if (puzzleon.second) { target.draw(puzzlecbody); }
    if (infinitystoneon) { target.draw(infinitystonebody); }




    if (death) { target.draw(playerdeathbody); }
    else if (pos == 0 && jump == 0)target.draw(body0);
    else if (pos == 1 && jump == 0 && slide == 0)target.draw(body1);
    else if (pos == 2 && jump == 0 && slide == 0)target.draw(body2);
    else if (pos == 3 && jump != 0 && slide == 0)target.draw(body3);
    else if (pos == 4 && jump == 0 && slide != 0)target.draw(body5);

    if (collisionbool)
    {
        collisiontime -= deltatime;
        target.draw(collisionbody);
        if (collisiontime <= 0.0)collisionbool = false;
    }


    target.draw(healthbarbody);
    target.draw(shieldbarbody);

    //coin:
    if (!coin.empty())
    {
        for (int j = 0; j < coin.size(); j++)
        {

            if (cointimer[j].second)
            {
                coinbody.setPosition(coin[j].first, coin[j].second);
                target.draw(coinbody);
            }

        }
    }

    //coin count:

    coincountbody.setTexture(&coincounttexture[count1]);
    coincountbody.setPosition(1000.0, 30.0);
    target.draw(coincountbody);

    coincountbody.setTexture(&coincounttexture[count2]);
    coincountbody.setPosition(1050.0, 30.0);
    target.draw(coincountbody);

    coincountbody.setTexture(&coincounttexture[count3]);
    coincountbody.setPosition(1100.0, 30.0);
    target.draw(coincountbody);

    coincountbody.setTexture(&coincounttexture[count4]);
    coincountbody.setPosition(1150.0, 30.0);
    target.draw(coincountbody);

    //Health:

    if (healthon)
    {
        target.draw(healthbody);
    }
    //Shield:

    if (shieldon)
    {
        target.draw(shieldbody);
    }

    if (gameover)
    {
        gameoverbody.setTexture(&gameovertexture);
        gameoverbody.setPosition(0.0, 0.0);
        target.draw(gameoverbody);
    }
    if (gamewin)
    {
        gamewinbody.setTexture(&gamewintexture);
        gamewinbody.setPosition(0.0, 0.0);
        target.draw(gamewinbody);
    }


    if (gameover)target.draw(text);
    if (gamewin)target.draw(text);
}*/



