// ProjectileEntities_v0.0.0.cpp

#include "ProjectileEntities_v0.0.0.hpp"
#include <iostream>

ProjectileEntity::ProjectileEntity(int x, int y, int speed, std::string texture)
    : x(x), y(y), speed(speed), texture(texture) {}

void ProjectileEntity::Update(float deltaTime) {
    x += static_cast<int>(speed * deltaTime);
    // Simulated rendering
    std::cout << "Rendering projectile at (" << x << ", " << y << ") with texture: " << texture << std::endl;
}

int ProjectileEntity::GetX() const { return x; }
int ProjectileEntity::GetY() const { return y; }
int ProjectileEntity::GetSpeed() const { return speed; }
std::string ProjectileEntity::GetTexture() const { return texture; }