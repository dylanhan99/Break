#pragma once
#include "PlayerState.h"
#include "IdleState.h"
#include "Player.h"

class ShootingState :
	public PlayerState
{
private:
	float timeLeft;

public:
	ShootingState();
	ShootingState(float timeLeft);
	~ShootingState();

	// Inherited via PlayerState
	virtual void update(Player * player, float frameTime) override;
	virtual PlayerState * handleInput(Player * player, InputComponent * inputC) override;
};

