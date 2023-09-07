#ifndef SDL2_RENDERER_RESOLVER_H
#define SDL2_RENDERER_RESOLVER_H

#include "../common/geometry.h"

// Will have more properties in the future
struct RaySimulationResult {
    int doesIntersect;
};

struct RaySimulationResult simulateRay(struct Point3D *start, struct Vector3D *direction);

#endif //SDL2_RENDERER_RESOLVER_H