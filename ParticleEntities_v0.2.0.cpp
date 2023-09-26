// ParticleEntities_v0.2.0.cpp

#include "ParticleEntities_v0.2.0.hpp"
#include <iostream>

ParticleEntity::ParticleEntity(float x, float y, float vx, float vy, float lifetime, const std::string& color)
    : x(x), y(y), vx(vx), vy(vy), lifetime(lifetime), isActive(true), color(color) {}  // Initialize isActive and color

ParticleEntity::~ParticleEntity() {}

void ParticleEntity::Update(float deltaTime) {
    if (!isActive) return;  // New: Skip update if not active

    x += vx * deltaTime;
    y += vy * deltaTime;
    lifetime -= deltaTime;

    if (lifetime <= 0) {
        Deactivate();  // New: Deactivate the particle if its lifetime is over
    }
}

void ParticleEntity::Render() {
    if (!isActive) return;  // New: Skip rendering if not active

    std::cout << "Rendering particle at position (" << x << ", " << y << ") with lifetime " << lifetime << " and color " << color << std::endl;
}

bool ParticleEntity::IsActive() const { return isActive; }  // New
float ParticleEntity::GetX() const { return x; }
float ParticleEntity::GetY() const { return y; }
float ParticleEntity::GetLifetime() const { return lifetime; }
std::string ParticleEntity::GetColor() const { return color; }  // New

void ParticleEntity::SetPosition(float x, float y) {
    this->x = x;
    this->y = y;
}

void ParticleEntity::SetVelocity(float vx, float vy) {
    this->vx = vx;
    this->vy = vy;
}

void ParticleEntity::SetLifetime(float lifetime) {
    this->lifetime = lifetime;
}

void ParticleEntity::SetColor(const std::string& color) {  // New
    this->color = color;
}

void ParticleEntity::Activate() {  // New
    isActive = true;
}

void ParticleEntity::Deactivate() {  // New
    isActive = false;
}