// ItemEntities_v0.2.0.cpp

#include "ItemEntities_v0.2.0.hpp"
#include <iostream>

// WeaponEntity Implementation
WeaponEntity::WeaponEntity(int ammo, int maxAmmo, const std::string& type)
    : ammo(ammo), maxAmmo(maxAmmo), type(type) {}
WeaponEntity::~WeaponEntity() {}

void WeaponEntity::Update() {
    std::cout << "Updating " << type << " entity.\n";
}

void WeaponEntity::Shoot() {
    if (ammo > 0) {
        ammo--;
        std::cout << "Fired " << type << ". Remaining ammo: " << ammo << "\n";
    } else {
        std::cout << "No ammo to fire.\n";
    }
}

void WeaponEntity::Reload() {
    ammo = maxAmmo;
    std::cout << type << " reloaded. Ammo: " << ammo << "\n";
}

int WeaponEntity::GetAmmo() const {
    return ammo;
}

void WeaponEntity::SetAmmo(int a) {
    ammo = a;
}

// Pistol Implementation
Pistol::Pistol() : WeaponEntity(12, 12, "Pistol") {}
Pistol::~Pistol() {}

void Pistol::Shoot() {
    WeaponEntity::Shoot();
    // Pistol-specific logic (if any)
}

// Shotgun Implementation
Shotgun::Shotgun() : WeaponEntity(5, 5, "Shotgun") {}
Shotgun::~Shotgun() {}

void Shotgun::Shoot() {
    WeaponEntity::Shoot();
    // Shotgun-specific logic (if any)
}

// Rifle Implementation
Rifle::Rifle() : WeaponEntity(30, 30, "Rifle") {}
Rifle::~Rifle() {}

void Rifle::Shoot() {
    WeaponEntity::Shoot();
    // Rifle-specific logic (if any)
}

// HealthPackEntity Implementation
HealthPackEntity::HealthPackEntity() : healthRestore(25) {}
HealthPackEntity::~HealthPackEntity() {}

void HealthPackEntity::Update() {
    std::cout << "Updating health pack entity.\n";
}

void HealthPackEntity::Use() {
    std::cout << "Health pack used. Restores " << healthRestore << " health.\n";
}

int HealthPackEntity::GetHealthRestore() const {
    return healthRestore;
}

void HealthPackEntity::SetHealthRestore(int h) {
    healthRestore = h;
}
