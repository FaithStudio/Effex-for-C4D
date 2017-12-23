#ifndef FX_C4D_ATTACH_H
#define FX_C4D_ATTACH_H

enum
{
	FXC4D_ATTACH_PROPERTIES = 2000,
	FXC4D_ATTACH_ROTATION,
	FXC4D_ATTACH_DIMENSIONS,
	FXC4D_ATTACH_GENERATION,
	FXC4D_ATTACH_CLOUD_SID,

	FXC4D_ATTACH_RENDERONLY = 3000,
	FXC4D_ATTACH_LINK,
	FXC4D_ATTACH_FLUID_PARTICLETYPE = 3002,
		FXC4D_ATTACH_FLUID_PARTICLETYPE_FP = 0,
		FXC4D_ATTACH_FLUID_PARTICLETYPE_VP,
		FXC4D_ATTACH_FLUID_PARTICLETYPE_FOAM,
		FXC4D_ATTACH_FLUID_PARTICLETYPE_BUBBLES,
		FXC4D_ATTACH_FLUID_PARTICLETYPE_IMPLICIT,
		FXC4D_ATTACH_FLUID_PARTICLETYPE_SPRAY,
	FXC4D_ATTACH_INSTANCE = 3003,
		FXC4D_ATTACH_INSTANCE_ORIG = 0,
		FXC4D_ATTACH_INSTANCE_INSTANCE,
		FXC4D_ATTACH_INSTANCE_RENDERINSTANCE,
		FXC4D_ATTACH_INSTANCE_TP,
	FXC4D_ATTACH_VELSCALE = 3004,
	FXC4D_ATTACH_SCALE = 3005,
	FXC4D_ATTACH_SCALE_FPBASE = 3006,
		FXC4D_ATTACH_SCALE_FPBASE_OFF = 0,
		FXC4D_ATTACH_SCALE_FPBASE_PRAD,
		FXC4D_ATTACH_SCALE_FPBASE_SMOKE,
		FXC4D_ATTACH_SCALE_FPBASE_VELOCITY,
		FXC4D_ATTACH_SCALE_FPBASE_TEMP,
		FXC4D_ATTACH_SCALE_FPBASE_FUEL,
	FXC4D_ATTACH_SCALE_VPBASE = 3007,
		FXC4D_ATTACH_SCALE_VPBASE_OFF = 0,
		FXC4D_ATTACH_SCALE_VPBASE_PRAD,
		FXC4D_ATTACH_SCALE_VPBASE_VORTICITY,
		FXC4D_ATTACH_SCALE_VPBASE_VELOCITY,
	FXC4D_ATTACH_SCALE_SPBASE = 3008,	
		FXC4D_ATTACH_SCALE_SPBASE_OFF = 0,
		FXC4D_ATTACH_SCALE_SPBASE_PRAD,
		FXC4D_ATTACH_SCALE_SPBASE_VELOCITY,
	FXC4D_ATTACH_SCALE_PRAD = 3009,
	FXC4D_ATTACH_SCALE_VAR,

	FXC4D_ATTACH_SCALE_AGEX,
	FXC4D_ATTACH_SCALE_AGEY,
	FXC4D_ATTACH_SCALE_AGEZ,
	FXC4D_ATTACH_ALIGNMENT  = 3014,
		FXC4D_ATTACH_ALIGNMENT_X = 0,
		FXC4D_ATTACH_ALIGNMENT_Y,
		FXC4D_ATTACH_ALIGNMENT_Z,
		FXC4D_ATTACH_ALIGNMENT_TANGENT,
		FXC4D_ATTACH_ALIGNMENT_BILLBOARD,
		FXC4D_ATTACH_ALIGNMENT_NORMAL,
	FXC4D_ATTACH_BILLOW = 3015,
	FXC4D_ATTACH_BILLOW_FPBASE = 3016,	
		FXC4D_ATTACH_BILLOW_FPBASE_OFF = 0,
		FXC4D_ATTACH_BILLOW_FPBASE_PRAD,
		FXC4D_ATTACH_BILLOW_FPBASE_SMOKE,
		FXC4D_ATTACH_BILLOW_FPBASE_VELOCITY,
		FXC4D_ATTACH_BILLOW_FPBASE_TEMP,
		FXC4D_ATTACH_BILLOW_FPBASE_FUEL,
	FXC4D_ATTACH_BILLOW_VPBASE = 3017,
		FXC4D_ATTACH_BILLOW_VPBASE_OFF = 0,
		FXC4D_ATTACH_BILLOW_VPBASE_PRAD,
		FXC4D_ATTACH_BILLOW_VPBASE_VORTICITY,
		FXC4D_ATTACH_BILLOW_VPBASE_VELOCITY,
	FXC4D_ATTACH_BILLOW_SPBASE = 3018,	
		FXC4D_ATTACH_BILLOW_SPBASE_OFF = 0,
		FXC4D_ATTACH_BILLOW_SPBASE_PRAD,
		FXC4D_ATTACH_BILLOW_SPBASE_VELOCITY,
	FXC4D_ATTACH_BILLOW_PRAD = 3019,
	FXC4D_ATTACH_BILLOW_VAR,

	FXC4D_ATTACH_BILLOW_AGEX,
	FXC4D_ATTACH_BILLOW_AGEY,
	FXC4D_ATTACH_BILLOW_AGEZ,
	
	FXC4D_ATTACH_FLUIDGROUP = 3024,
		FXC4D_ATTACH_FLUIDGROUP_ALL = 0,
	FXC4D_ATTACH_SETCOLOR = 3025,	
	FXC4D_ATTACH_CLOUDCNT,
	FXC4D_ATTACH_CLOUDCNT_VAR,
	FXC4D_ATTACH_CLOUDOFFSET,
	FXC4D_ATTACH_CLOUDOFFSET_VAR,
	FXC4D_ATTACH_SUBGRIDLAYER = 3030,
		FXC4D_ATTACH_SUBGRIDLAYER_PARENT = 0,
	FXC4D_ATTACH_CLOUD_ADVECTION = 3031,
	FXC4D_ATTACH_SPLIT,
	FXC4D_ATTACH_SPLITPART,
	FXC4D_ATTACH_BILLOW_VARSEED,

	FXC4D_ATTACH_DUMMY_
		
};

#endif