#include "Force.h"

Vec2 Force::GenerateDragForce(const Particle& particle, float k) {
	Vec2 dragForce = Vec2();

	if (particle.velocity.MagnitudeSquared() > 0) {
		float dragMagnitude = k * particle.velocity.MagnitudeSquared();

		dragForce = (particle.velocity.UnitVector() * -1.0) * dragMagnitude;
	}

	return dragForce;
}