#pragma once
#include "Player.h"
#include "PatrolState.h" 
//include PatrolState instead of EnemyState because the default state needs to be new PatrolState();

//enum DIRECTION {
//	UP = 0, RIGHT = 90, 
//	DOWN = 180, LEFT = 270
//};

class Enemy: public Entity
{
private:
	PhysicsComponent physicsComponent;
	EnemyState* state_;
	//EnemyState* combat_;

	//EnemyState* before;
	//EnemyState* current;
	EnemyAI enemyAI;

	D3DXVECTOR2 velo;
	int direction;
public:
	Enemy();
	~Enemy();
	void update(float frameTime, Player *player);
	D3DXVECTOR2 getPosition();
	void setPosition(D3DXVECTOR2 position);
	void draw();
	bool initialize(Game *gamePtr, int width, int height, int ncols,
		TextureManager *textureM);
	void handleStates();

	int getDirection();
	void setDirection(int dir);
	D3DXVECTOR2 getVelo();
	void setVelo(D3DXVECTOR2 vel);

	void initState();
};

