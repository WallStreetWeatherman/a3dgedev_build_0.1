// Systems_v0.3.0.cpp

#include "Systems_v0.3.0.hpp"

PlayerSystem::PlayerSystem() {}
void PlayerSystem::AddPlayer(const std::shared_ptr<PlayerEntity>& player) {
    players.push_back(player);
}

void PlayerSystem::Update() {
    for (auto& player : players) {
        player->Update();
        player->transform.Translate(0.1f, 0, 0);  // Modify the TransformComponent
    }
}

EnemySystem::EnemySystem() {}
void EnemySystem::AddEnemy(const std::shared_ptr<EnemyEntity>& enemy) {
    enemies.push_back(enemy);
}
void EnemySystem::Update() {
    for (auto& enemy : enemies) {
        enemy->Update();
        // Example: Rotating enemy
        enemy->transform.Rotate(1.0f);  // Modify the TransformComponent
    }
}

ParticleSystem::ParticleSystem() {}
void ParticleSystem::AddParticle(const std::shared_ptr<ParticleEntity>& particle) {
    particles.push_back(particle);
}

void ParticleSystem::Update(float deltaTime) {
    for (auto& particle : particles) {
        particle->Update(deltaTime);
    }
}

ItemSystem::ItemSystem() {}
void ItemSystem::AddItem(const std::shared_ptr<ItemEntity>& item) {
    items.push_back(item);
}
void ItemSystem::Update() {
    for (auto& item : items) {
        item->Update();
    }
}

ProjectileSystem::ProjectileSystem() {}

void ProjectileSystem::AddProjectile(const std::shared_ptr<ProjectileEntity>& projectile) {
    projectiles.push_back(projectile);
}

void ProjectileSystem::Update(float deltaTime) {
    for (auto& projectile : projectiles) {
        projectile->Update(deltaTime);
    }
}

TerrainSystem::TerrainSystem() {}

void TerrainSystem::AddTerrain(const std::shared_ptr<TerrainEntity>& terrain) {
    terrains.push_back(terrain);
}

void TerrainSystem::Render() {
    for (auto& terrain : terrains) {
        terrain->Render();
    }
}