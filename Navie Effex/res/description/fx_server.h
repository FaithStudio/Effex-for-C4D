#ifndef FX_SERVER_H
#define FX_SERVER_H

enum
{
	SERVER_GROUP_ID = 2000,
	SERVER_GROUP_CACHE,
	SERVER_CACHE_LOAD,
	SERVER_CACHE_SAVE,
	SERVER_GROUP_BULLET,
	SERVER_GROUP_GLOBALS,

	SERVER_WORLD_SCALE = 1000,
	SERVER_PHYSICAL_SCALE,
	SERVER_PHYSICAL_VOXELSIZE,
	
	SERVER_TIMESTEP_MODE = 1003,
		SERVER_TIMESTEP_MODE_CFL = 0,
		SERVER_TIMESTEP_MODE_FRAME,
		SERVER_TIMESTEP_MODE_CUSTOM,
	SERVER_TIMESTEP = 1004,
	SERVER_SUBSTEPS,
	SERVER_AUTOTIME,
	SERVER_FROM,
	SERVER_TO,
	SERVER_CPUS,
	SERVER_MINSUBSTEPS,
	SERVER_CFLSENSITIVITY,
	SERVER_GRAVITY,
	SERVER_SECOND,
	SERVER_GLOBALSEED,
	SERVER_PHYSICAL_VOXELSIZE_RENDER,
	SERVER_GPU = 1016,
		SERVER_GPU_DEFAULT = 0,

	SERVER_BULLET_SOLVERITERATIONS = 1300,
	SERVER_BULLET_MAXSUBSTEPS,
	SERVER_BULLET_BROADPHASE = 1302,
		SERVER_BULLET_BROADPHASE_DBVT = 0,
		SERVER_BULLET_BROADPHASE_SWEEP,
		SERVER_BULLET_BROADPHASE_SWEEP32,
	SERVER_BULLET_DEACTIVATIONTIME = 1303,

	SERVER_PARTICLES_KERNEL = 1400,
	SERVER_PARTICLES_DENSITY,
	SERVER_PARTICLES_RADIUS,
	SERVER_PARTICLES_KERNEL_SELECTOR,

	SERVER_CACHE_RENDERONLY = 1500,
	SERVER_CACHE_MODE = 1501,
		SERVER_CACHE_MODE_LOAD = 0,
		SERVER_CACHE_MODE_SAVE,
		SERVER_CACHE_MODE_LOADSAVE,
	SERVER_CACHE_FILESELECT = 1502,
	SERVER_CACHE_FILEPATH,
	SERVER_CACHE_FILENAME,
	
	SERVER_CACHE_LOAD_FRAME_INITIALISE,
	SERVER_CACHE_LOAD_FRAME,
	SERVER_CACHE_LOAD_OFFSET,

	SERVER_CACHE_SAVE_COMPRESS,
	SERVER_CACHE_SAVE_PARTICLES = 1509,	
		SERVER_CACHE_SAVE_PARTICLES_EFFEX = 0,
		SERVER_CACHE_SAVE_PARTICLES_PRT,
		SERVER_CACHE_SAVE_PARTICLES_BGEOJSON,
		SERVER_CACHE_SAVE_PARTICLES_BGEO,
		SERVER_CACHE_SAVE_PARTICLES_GEO,
		SERVER_CACHE_SAVE_PARTICLES_BIN,
		SERVER_CACHE_SAVE_PARTICLES_PDA,
		SERVER_CACHE_SAVE_PARTICLES_PDB,
		SERVER_CACHE_SAVE_PARTICLES_PDB32,
		SERVER_CACHE_SAVE_PARTICLES_PDB64,
		SERVER_CACHE_SAVE_PARTICLES_PDC,
		SERVER_CACHE_SAVE_PARTICLES_PTC,
		SERVER_CACHE_SAVE_PARTICLES_PTS,
		SERVER_CACHE_SAVE_PARTICLES_RIB,
		SERVER_CACHE_SAVE_PARTICLES_XYZ,
		SERVER_CACHE_SAVE_PARTICLES_MC,
		SERVER_CACHE_SAVE_PARTICLES_ICE,
		SERVER_CACHE_SAVE_PARTICLES_HCLASSIC,
		SERVER_CACHE_SAVE_PARTICLES_BHCLASSIC,
		SERVER_CACHE_SAVE_PARTICLES_ITBL,
		SERVER_CACHE_SAVE_PARTICLES_ATBL,
		SERVER_CACHE_SAVE_PARTICLES_EFFEXNEW,
	SERVER_CACHE_SAVE_GRIDS = 1510,
		SERVER_CACHE_SAVE_GRIDS_EFFEX = 0,
		SERVER_CACHE_SAVE_GRIDS_FIELD3D,
		SERVER_CACHE_SAVE_GRIDS_OPENVDB,
		SERVER_CACHE_SAVE_GRIDS_OPENVDBFX,
	SERVER_CACHE_SAVE_FRAME = 1511,
		SERVER_CACHE_SAVE_FRAME_SIM = 0,
		SERVER_CACHE_SAVE_FRAME_C4D,
	SERVER_CACHE_SAVE_EXCLUDE = 1512,
	SERVER_CACHE_PATHMODE = 1513,
		SERVER_CACHE_PATHMODE_SCENEPATH = 0,
		SERVER_CACHE_PATHMODE_CUSTOM,
	SERVER_CACHE_LOAD_FRAME_REVERSE = 1514,
	SERVER_CACHE_NODES,
	SERVER_CACHE_FINDNODES,
	SERVER_CACHE_SETUP,
	SERVER_CACHE_NEWSCENE,
	SERVER_CACHE_NODES_PARTICLES,
	SERVER_CACHE_WIZARDINFO,
	SERVER_CACHE_SETUPNEXT,

	SERVER_DUMMY
};

#endif