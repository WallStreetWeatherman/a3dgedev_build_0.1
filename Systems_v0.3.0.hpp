// Systems_v0.3.0.hpp

#pragma once
#include <vector>
#include <memory>
#include "CharacterEntities_v0.2.0.hpp"
#include "ItemEntities_v0.2.0.hpp"
#include "ParticleEntities_v0.2.0.hpp"
#include "ProjectileEntities_v0.0.0.hpp"
#include "TerrainEntities_v0.0.0.hpp"
#include "TransformComponent_v0.1.0.hpp"

class PlayerSystem {
public:
    PlayerSystem();
    void AddPlayer(const std::shared_ptr<PlayerEntity>& player);
    void Update();
    // Additional methods and properties for the player system
private:
    std::vector<std::shared_ptr<PlayerEntity>> players;
};

class EnemySystem {
public:
    EnemySystem();
    void AddEnemy(const std::shared_ptr<EnemyEntity>& enemy);
    void Update();
    // Additional methods and properties for the enemy system
private:
    std::vector<std::shared_ptr<EnemyEntity>> enemies;
};

class ParticleSystem {
public:
    ParticleSystem();
    void AddParticle(const std::shared_ptr<ParticleEntity>& particle);
    void Update(float deltaTime);
    // Additional methods and properties for the particle system
private:
    std::vector<std::shared_ptr<ParticleEntity>> particles;
};

class ItemSystem {
public:
    ItemSystem();
    void AddItem(const std::shared_ptr<ItemEntity>& item);
    void Update();
    // Additional methods and properties for the item system
private:
    std::vector<std::shared_ptr<ItemEntity>> items;
};

class ProjectileSystem {
public:
    ProjectileSystem();
    void AddProjectile(const std::shared_ptr<ProjectileEntity>& projectile);
    void Update(float deltaTime);
private:
    std::vector<std::shared_ptr<ProjectileEntity>> projectiles;
};

class TerrainSystem {
public:
    TerrainSystem();
    void AddTerrain(const std::shared_ptr<TerrainEntity>& terrain);
    void Render();
private:
    std::vector<std::shared_ptr<TerrainEntity>> terrains;
};