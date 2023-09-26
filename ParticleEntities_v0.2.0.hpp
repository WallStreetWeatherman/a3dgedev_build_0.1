// ParticleEntities_v0.2.0.hpp

#pragma once

#include <string>

class ParticleEntity {
public:
    ParticleEntity(float x, float y, float vx, float vy, float lifetime, const std::string& color);
    ~ParticleEntity();

    void Update(float deltaTime);
    void Render();

    bool IsActive() const;  // New
    float GetX() const;
    float GetY() const;
    float GetLifetime() const;
    std::string GetColor() const;  // New

    void SetPosition(float x, float y);
    void SetVelocity(float vx, float vy);
    void SetLifetime(float lifetime);
    void SetColor(const std::string& color);  // New

    void Activate();  // New
    void Deactivate();  // New

private:
    float x, y;
    float vx, vy;
    float lifetime;
    bool isActive;  // New
    std::string color;  // New
};