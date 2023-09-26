// TerrainEntities_v0.1.0.hpp

#pragma once
#include <string>

class TerrainEntity {
public:
    TerrainEntity(int x, int y, int width, int height, std::string texture, bool isWalkable);
    void Render();
    int GetX() const;
    int GetY() const;
    int GetWidth() const;
    int GetHeight() const;
    bool IsWalkable() const;
    std::string GetTexture() const;
private:
    int x, y;
    int width, height;  // Dimensions of the terrain tile
    bool isWalkable;  // Can entities walk on this terrain?
    std::string texture;
};