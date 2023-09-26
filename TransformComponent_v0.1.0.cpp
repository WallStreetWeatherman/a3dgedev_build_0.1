// TransformComponent_v0.1.0.cpp

#include "TransformComponent_v0.1.0.hpp"

TransformComponent::TransformComponent() 
    : x(0.0f), y(0.0f), z(0.0f),
      rotation(0.0f),
      scaleX(1.0f), scaleY(1.0f), scaleZ(1.0f) {}

TransformComponent::TransformComponent(float x, float y, float z, float rotation, float scaleX, float scaleY, float scaleZ)
    : x(x), y(y), z(z),
      rotation(rotation),
      scaleX(scaleX), scaleY(scaleY), scaleZ(scaleZ) {}

void TransformComponent::Translate(float dx, float dy, float dz) {
    x += dx;
    y += dy;
    z += dz;
}

void TransformComponent::Rotate(float angle) {
    rotation += angle;
}

void TransformComponent::Scale(float dx, float dy, float dz) {
    scaleX *= dx;
    scaleY *= dy;
    scaleZ *= dz;
}

TransformComponent TransformComponent::operator+(const TransformComponent& other) const {
    return TransformComponent(x + other.x, y + other.y, z + other.z,
                              rotation + other.rotation,
                              scaleX * other.scaleX, scaleY * other.scaleY, scaleZ * other.scaleZ);
}

TransformComponent& TransformComponent::operator+=(const TransformComponent& other) {
    x += other.x;
    y += other.y;
    z += other.z;
    rotation += other.rotation;
    scaleX *= other.scaleX;
    scaleY *= other.scaleY;
    scaleZ *= other.scaleZ;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const TransformComponent& transform) {
    os << "Position: (" << transform.x << ", " << transform.y << ", " << transform.z << ") "
       << "Rotation: " << transform.rotation << " "
       << "Scale: (" << transform.scaleX << ", " << transform.scaleY << ", " << transform.scaleZ << ")";
    return os;
}
