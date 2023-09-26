// ProjectileEntities_v0.0.0.hpp

#pragma once
#include <string>

class ProjectileEntity {
public:
    ProjectileEntity(int x, int y, int speed, std::string texture);
    void Update(float deltaTime);
    int GetX() const;
    int GetY() const;
    int GetSpeed() const;
    std::string GetTexture() const;
private:
    int x, y, speed;
    std::string texture;
};