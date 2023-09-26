// TransformComponent_v0.1.0.hpp

#pragma once

#include <iostream>

class TransformComponent {
public:
    float x, y, z;
    float rotation;
    float scaleX, scaleY, scaleZ;

    TransformComponent();
    TransformComponent(float x, float y, float z, float rotation, float scaleX, float scaleY, float scaleZ);

    // Utility methods
    void Translate(float dx, float dy, float dz);
    void Rotate(float angle);
    void Scale(float dx, float dy, float dz);

    // Overloaded operators
    TransformComponent operator+(const TransformComponent& other) const;
    TransformComponent& operator+=(const TransformComponent& other);
    friend std::ostream& operator<<(std::ostream& os, const TransformComponent& transform);
};