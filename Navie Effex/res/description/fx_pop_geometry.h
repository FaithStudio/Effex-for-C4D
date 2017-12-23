#ifndef FX_POP_GEOMETRY_H
#define FX_POP_GEOMETRY_H

enum
{	
	POP_GEOMETRY_SCALE_SUB = 2000,
	POP_GEOMETRY_ROTATION_SUB,

	POP_GEOMETRY_INPUT = 1000,
	POP_GEOMETRY_INPUT_SELECTOR,
	POP_GEOMETRY_DURATION,
	POP_GEOMETRY_DURATION_SELECTOR,
	POP_GEOMETRY_INPUT_FACTORY = 1004,
		POP_GEOMETRY_INPUT_FACTORY_PASSIVE = 0,
		POP_GEOMETRY_INPUT_FACTORY_VORTICITY,
		POP_GEOMETRY_INPUT_FACTORY_IMPLICIT,
		POP_GEOMETRY_INPUT_FACTORY_DIFFUSE,
	POP_GEOMETRY_TYPE = 1005,
		POP_GEOMETRY_TYPE_ORIG = 0,
		POP_GEOMETRY_TYPE_INSTANCE,
		POP_GEOMETRY_TYPE_RENDERINSTANCE,
	POP_GEOMETRY_ALIGNMENT = 1006,
		POP_GEOMETRY_ALIGNMENT_X = 0,
		POP_GEOMETRY_ALIGNMENT_Y,
		POP_GEOMETRY_ALIGNMENT_Z,
		POP_GEOMETRY_ALIGNMENT_TRAVEL,
		POP_GEOMETRY_ALIGNMENT_BILLBOARD,
	POP_GEOMETRY_SCALE = 1007,
	POP_GEOMETRY_SCALE_VAR,
	POP_GEOMETRY_SCALE_VELOCITY,
	POP_GEOMETRY_SCALE_VELOCITYVAR,
	POP_GEOMETRY_ROTATION,
	POP_GEOMETRY_ROTATION_VAR,
	POP_GEOMETRY_CONSTRAINTS_SCALE,
	POP_GEOMETRY_CONSTRAINTS_SCALE_SELECTOR,
	POP_GEOMETRY_CONSTRAINTS_ROTATION,
	POP_GEOMETRY_CONSTRAINTS_ROTATION_SELECTOR,
	POP_GEOMETRY_RENDERONLY,
	POP_GEOMETRY_SCALE_UNIFORM,
	POP_GEOMETRY_SCALE_VARY,
	POP_GEOMETRY_SCALE_VARZ,
	POP_GEOMETRY_POSITION = 1021,
		POP_GEOMETRY_POSITION_POS = 0,
		POP_GEOMETRY_POSITION_WEIGHTED,
		POP_GEOMETRY_POSITION_DEFORMED,

	POP_GEOMETRY_DUMMY_
};

#endif