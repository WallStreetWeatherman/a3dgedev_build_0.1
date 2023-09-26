// CharacterEntities_v0.3.0.hpp

#pragma once
#include "TransformComponent_v0.1.0.hpp"

class PlayerEntity {
public:
    PlayerEntity();
    ~PlayerEntity();

    void Update();
    void TakeDamage(int amount);
    void Shoot();
    void Move(int dx, int dy);

    // Getter and Setter for health and position
    int GetHealth() const;
    void SetHealth(int h);
    void SetPosition(int x, int y);
    bool IsAlive() const;

    TransformComponent transform;

private:
    int health;
    int ammo;
    int position[2];
    bool isAlive;
};

class EnemyEntity {
public:
    EnemyEntity();
    ~EnemyEntity();

    void Update();
    void TakeDamage(int amount);
    void Attack();

    // Getter and Setter for health and position
    int GetHealth() const;
    void SetHealth(int h);
    void SetPosition(int x, int y);
    bool IsAlive() const;

    TransformComponent transform;

private:
    int health;
    int position[2];
    bool isAlive;
};

class AllyEntity {
public:
    AllyEntity();
    ~AllyEntity();

    void Update();
    void TakeDamage(int amount);
    void Assist();

    // Getter and Setter for health and position
    int GetHealth() const;
    void SetHealth(int h);
    void SetPosition(int x, int y);
    bool IsAlive() const;

    TransformComponent transform;

private:
    int health;
    int position[2];
    bool isAlive;
};