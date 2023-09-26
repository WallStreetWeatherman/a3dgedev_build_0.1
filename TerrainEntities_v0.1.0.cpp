// TerrainEntities_v0.1.0.cpp

#include "TerrainEntities_v0.1.0.hpp"
#include <iostream>

TerrainEntity::TerrainEntity(int x, int y, int width, int height, std::string texture, bool isWalkable)
    : x(x), y(y), width(width), height(height), texture(texture), isWalkable(isWalkable) {}

void TerrainEntity::Render() {
    // Simulated rendering
    std::cout << "Rendering terrain at (" << x << ", " << y << ")"
              << " with dimensions (" << width << "x" << height << ")"
              << " and texture: " << texture
              << " Walkable: " << (isWalkable ? "Yes" : "No") << std::endl;
}

int TerrainEntity::GetX() const { return x; }
int TerrainEntity::GetY() const { return y; }
int TerrainEntity::GetWidth() const { return width; }
int TerrainEntity::GetHeight() const { return height; }
bool TerrainEntity::IsWalkable() const { return isWalkable; }
std::string TerrainEntity::GetTexture() const { return texture; }