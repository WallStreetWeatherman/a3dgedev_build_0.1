Overall ECS Architecture:
Entities: Unique IDs to represent game objects.
Player
Enemies
Items (guns, ammo, health packs)
Terrain
Projectiles
Particles
Components: Pure data structures to add properties to entities.
Transform (position, rotation, scale)
MeshRenderer (3D model, texture)
Collider (hitbox)
RigidBody (physics properties)
Camera (for player)
AI (for NPCs)
Health
Inventory
WeaponComponent (ammo, reload time, etc.)
MovementStats (speed, jump force, etc.)
Systems: Logic that iterates over entities with specific components.
Rendering System
Physics System
Collision Detection System
AI System
Input System
Health System
Inventory System
Weapon System
Movement System
Particle System
Classes and Interfaces:
IComponent

Interface defining a component.
IEntity

Interface defining an entity.
ISystem

Interface defining a system.
ComponentManager

Manages all component data.
EntityManager

Manages entity creation and destruction.
SystemManager

Manages systems and their execution.
World

Manages all ECS elements and game loop.