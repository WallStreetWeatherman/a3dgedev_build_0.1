// main_v0.7.0.cpp

#include "Systems_v0.3.0.hpp"
#include <iostream>

int main() {
    // Initialize Systems
    PlayerSystem playerSystem;
    EnemySystem enemySystem;
    ParticleSystem particleSystem;
    ItemSystem itemSystem;
    ProjectileSystem projectileSystem;
    TerrainSystem terrainSystem;

    // Create and Add some entities to the corresponding systems
    playerSystem.AddPlayer(std::make_shared<PlayerEntity>());
    enemySystem.AddEnemy(std::make_shared<EnemyEntity>());
    particleSystem.AddParticle(std::make_shared<ParticleEntity>(0, 0, 1, 1, 10, "red"));
    itemSystem.AddItem(std::make_shared<WeaponEntity>(10, 20, "Pistol"));
    itemSystem.AddItem(std::make_shared<HealthPackEntity>());
    projectileSystem.AddProjectile(std::make_shared<ProjectileEntity>(0, 0, 10, "Arrow"));
    terrainSystem.AddTerrain(std::make_shared<TerrainEntity>(0, 0, "Grass"));
    auto playerEntity = std::make_shared<PlayerEntity>();
    playerEntity->transform = TransformComponent(0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);  // <-- Add TransformComponent
    playerSystem.AddPlayer(playerEntity);

    // Game loop (using a constant deltaTime of 0.1 for demonstration)
    float deltaTime = 0.1f;
    while (true) {  // Replace with a real game loop condition
        // Update Systems
        playerSystem.Update();
        enemySystem.Update();
        particleSystem.Update(deltaTime);
        itemSystem.Update();
        projectileSystem.Update(deltaTime);
        terrainSystem.Render();  // Assume this is part of the render cycle

        // Demo interaction: Here, you may want to interact between systems or entities.

        // Temporarily ask the user if they want to continue for the next frame
        std::string input;
        std::cout << "Continue? (yes/no): ";
        std::cin >> input;
        if (input == "no") {
            break;
        }
    }

    return 0;
}