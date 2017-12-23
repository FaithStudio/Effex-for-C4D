#ifndef FX_PARTICLE_FORCES_H
#define FX_PARTICLE_FORCES_H

enum
{	
	PARTICLE_FORCES_PARTICLES = 1000,
	PARTICLE_FORCES_FORCES,
	PARTICLE_FORCES_PARTICLES_MODE = 1002,
		PARTICLE_FORCES_PARTICLES_MODE_INCLUDE = 0,
		PARTICLE_FORCES_PARTICLES_MODE_EXCLUDE,
	PARTICLE_FORCES_DURATION = 1003,
	PARTICLE_FORCES_PROPERTY,
	PARTICLE_FORCES_MODE = 1005,
		PARTICLE_FORCES_MODE_ADD = 0,
		PARTICLE_FORCES_MODE_SET,
	PARTICLE_FORCES_TIMEINTEGRATED = 1006,

	//SELECTORS
	PARTICLE_FORCES_PARTICLES_SELECTOR = 1100,
	PARTICLE_FORCES_FORCES_SELECTOR,
	PARTICLE_FORCES_DURATION_SELECTOR,
	PARTICLE_FORCES_PROPERTY_SELECTOR,
		
	PARTICLE_FORCES_DUMMY_

};

#endif