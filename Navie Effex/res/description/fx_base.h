#ifndef FX_BASE_H
#define FX_BASE_H

enum
{	
	FX_BASE = 10000,
	FX_BASE_PIPELINESTAGE = 10001,
		FX_BASE_PIPELINESTAGE_DEFAULT = 0,
		FX_BASE_PIPELINESTAGE_VOLUMES = 3,
		FX_BASE_PIPELINESTAGE_BOUNDS,
		FX_BASE_PIPELINESTAGE_EMITTERS,
		FX_BASE_PIPELINESTAGE_ADVECTION,
		FX_BASE_PIPELINESTAGE_OPERATORS,
		FX_BASE_PIPELINESTAGE_FLUID,
		FX_BASE_PIPELINESTAGE_FLUID_FORCES,
		FX_BASE_PIPELINESTAGE_FLUID_DIVERGENCE,
		FX_BASE_PIPELINESTAGE_FLUID_FLIP,
		FX_BASE_PIPELINESTAGE_POSTFLUID,
		FX_BASE_PIPELINESTAGE_DENSITY,
		FX_BASE_PIPELINESTAGE_DENSITY_ADVECTION,
		FX_BASE_PIPELINESTAGE_DENSITY_OPERATORS,
		FX_BASE_PIPELINESTAGE_FINISH,
		FX_BASE_PIPELINESTAGE_SAVE_CACHE,
		FX_BASE_PIPELINESTAGE_END,

		FX_BASE_PIPELINESTAGE_MESH_START,
		FX_BASE_PIPELINESTAGE_MESH_RECONSTRUCTION,
		FX_BASE_PIPELINESTAGE_MESH_MESHING,
		FX_BASE_PIPELINESTAGE_MESH_POST,
		FX_BASE_PIPELINESTAGE_MESH_END,
	FX_BASE_PRIORITY = 10002,	
	FX_BASE_SPLIT,
	FX_BASE_USEGPU,

	FX_BASE_QUICKTAB_HEADER = 10100,
	FX_BASE_QUICKTAB,

	FX_BASE_DUMMY_

};

#endif