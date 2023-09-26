// CharacterEntities_v0.2.0.cpp

#include "CharacterEntities_v0.2.0.hpp"
#include <iostream>

// PlayerEntity Implementation
PlayerEntity::PlayerEntity() : health(100), ammo(50), isAlive(true) {
    position[0] = 0;
    position[1] = 0;
}
PlayerEntity::~PlayerEntity() {}

void PlayerEntity::Update() {
    std::cout << "Updating player entity.\n";
}

void PlayerEntity::TakeDamage(int amount) {
    health -= amount;
    if (health <= 0) {
        isAlive = false;
    }
}

void PlayerEntity::Shoot() {
    ammo--;
}

void PlayerEntity::Move(int dx, int dy) {
    position[0] += dx;
    position[1] += dy;
}

int PlayerEntity::GetHealth() const {
    return health;
}

void PlayerEntity::SetHealth(int h) {
    health = h;
}

void PlayerEntity::SetPosition(int x, int y) {
    position[0] = x;
    position[1] = y;
}

bool PlayerEntity::IsAlive() const {
    return isAlive;
}

// EnemyEntity Implementation
EnemyEntity::EnemyEntity() : health(50), isAlive(true) {
    position[0] = 0;
    position[1] = 0;
}
EnemyEntity::~EnemyEntity() {}

void EnemyEntity::Update() {
    std::cout << "Updating enemy entity.\n";
}

void EnemyEntity::TakeDamage(int amount) {
    health -= amount;
    if (health <= 0) {
        isAlive = false;
    }
}

void EnemyEntity::Attack() {
    std::cout << "Enemy attacks!\n";
}

int EnemyEntity::GetHealth() const {
    return health;
}

void EnemyEntity::SetHealth(int h) {
    health = h;
}

void EnemyEntity::SetPosition(int x, int y) {
    position[0] = x;
    position[1] = y;
}

bool EnemyEntity::IsAlive() const {
    return isAlive;
}

// AllyEntity Implementation
AllyEntity::AllyEntity() : health(75), isAlive(true) {
    position[0] = 0;
    position[1] = 0;
}
AllyEntity::~AllyEntity() {}

void AllyEntity::Update() {
    std::cout << "Updating ally entity.\n";
}

void AllyEntity::TakeDamage(int amount) {
    health -= amount;
    if (health <= 0) {
        isAlive = false;
    }
}

void AllyEntity::Assist() {
    std::cout << "Ally assists!\n";
}

int AllyEntity::GetHealth() const {
    return health;
}

void AllyEntity::SetHealth(int h) {
    health = h;
}

void AllyEntity::SetPosition(int x, int y) {
    position[0] = x;
    position[1] = y;
}

bool AllyEntity::IsAlive() const {
    return isAlive;
}