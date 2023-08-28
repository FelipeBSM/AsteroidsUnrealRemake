// Fill out your copyright notice in the Description page of Project Settings.


#include "ShipHealth.h"

ShipHealth::ShipHealth(int healthStart, int maxHealth,bool vulnerability)
{
	this->maxHealth = maxHealth;
	this->currentHealthAmmount = healthStart;
	this->isVunerable = vulnerability;
}

ShipHealth::~ShipHealth()
{
}

void ShipHealth::SetHealth(int _health)
{
	this->currentHealthAmmount = _health;
}

void ShipHealth::SetVulnerability(bool _vulnerability)
{
	this->isVunerable = _vulnerability;
}

void ShipHealth::AddHealth(int _ammoutToAdd)
{
	currentHealthAmmount += _ammoutToAdd;
}

void ShipHealth::RemoveHealth(int _ammountToRemove)
{
	currentHealthAmmount -= _ammountToRemove;
}

int ShipHealth::GetCurrentHealth()
{
	return currentHealthAmmount;
}
int ShipHealth::GetMaxHealth() {
	return maxHealth;
}

bool ShipHealth::GetVulnerableState()
{
	return isVunerable;
}
