#ifndef FX_XPRESSO_SPACETRANSLATOR_H
#define FX_XPRESSO_SPACETRANSLATOR_H

enum
{
	XSPACE_TRANSLATOR_SCENE = 3000,
	XSPACE_TRANSLATOR_SUBGRIDSPACE,
	XSPACE_TRANSLATOR_POSITIONTYPE = 3002,
		XSPACE_TRANSLATOR_POSITIONTYPE_WORLD = 0,
		XSPACE_TRANSLATOR_POSITIONTYPE_PHYSICAL,
		XSPACE_TRANSLATOR_POSITIONTYPE_GRID,
	XSPACE_GLOBAL_OUTPUT = 3003,
    XSPACE_TRANSLATOR_CHANNEL = 3010,
	XSPACE_TRANSLATOR_POS,
	XSPACE_TRANSLATOR_OUT_INDEX,
	XSPACE_TRANSLATOR_OUT_GCOORD,
	XSPACE_TRANSLATOR_OUT_PHYSICAL,
	XSPACE_TRANSLATOR_OUT_C4DWORLD,
	XSPACE_TRANSLATOR_OUT_PHYSICAL_GLB,
	XSPACE_TRANSLATOR_OUT_C4DWORLD_GLB,

	XSPACE_TRANSLATOR_DUMMY

};

#endif