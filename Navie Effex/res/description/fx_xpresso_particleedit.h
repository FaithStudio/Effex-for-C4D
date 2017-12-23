#ifndef FX_XPRESSO_PARTICLEEDIT_H
#define FX_XPRESSO_PARTICLEEDIT_H

enum
{
	XPARTICLE_EDIT_PARTICLEGROUP = 3000,
	XPARTICLE_EDIT_TYPE,
		XPARTICLE_EDIT_TYPE_PASSIVE = 0,
		XPARTICLE_EDIT_TYPE_VORTICITY,
		XPARTICLE_EDIT_TYPE_LIQUID,
		XPARTICLE_EDIT_TYPE_DIFFUSE,
	XPARTICLE_EDIT_PROPERTIES = 3002,

	XPARTICLE_EDIT_INDEX = 3050,
	XPARTICLE_EDIT_POS,
	XPARTICLE_EDIT_ALIVE,
	XPARTICLE_EDIT_COLLISION,
	XPARTICLE_EDIT_SPRAY,
	XPARTICLE_EDIT_BUBBLE,
	XPARTICLE_EDIT_TEMP,
	XPARTICLE_EDIT_PROP_SCALAR,
	XPARTICLE_EDIT_PROP_VECTOR,
	XPARTICLE_EDIT_PROP_STATE,

	XPARTICLE_EDIT_DUMMY

};

#endif