// ItemEntities_v0.2.0.hpp

#pragma once
#include <string>

class WeaponEntity : public ItemEntity {
public:
    WeaponEntity(int ammo, int maxAmmo, const std::string& type);
    virtual ~WeaponEntity();

    virtual void Update();
    virtual void Shoot();
    void Reload();

    int GetAmmo() const;
    void SetAmmo(int a);

protected:
    int ammo;
    int maxAmmo;
    std::string type;
};

class Pistol : public WeaponEntity {
public:
    Pistol();
    virtual ~Pistol();

    virtual void Shoot() override;
};

class Shotgun : public WeaponEntity {
public:
    Shotgun();
    virtual ~Shotgun();

    virtual void Shoot() override;
};

class Rifle : public WeaponEntity {
public:
    Rifle();
    virtual ~Rifle();

    virtual void Shoot() override;
};

class ItemEntity  {
public:
    virtual ~ItemEntity() {}
    virtual void Update() = 0;
};

class HealthPackEntity : public ItemEntity {
public:
    HealthPackEntity();
    ~HealthPackEntity();

    void Update();
    void Use();

    int GetHealthRestore() const;
    void SetHealthRestore(int h);

private:
    int healthRestore;
};
