// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
class ASTEROIDREMAKE_API ShipHealth
{
public:
	ShipHealth(int healthStart, int maxHealth,bool vulnerability);
	~ShipHealth();

	void SetHealth(int _health);
	void SetVulnerability(bool _vulnerability);
	void AddHealth(int _ammoutToAdd);
	void RemoveHealth(int _ammountToRemove);

	int GetCurrentHealth();
	int GetMaxHealth();
	bool GetVulnerableState();

protected:
	int currentHealthAmmount;
	int maxHealth;

	bool isVunerable;
};
