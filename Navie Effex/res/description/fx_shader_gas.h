#ifndef fx_shader_gas_h_
#define fx_shader_gas_h_

enum
{
	//Material Manager Group
	DPIT_MG_GENERAL = 3000,
	DPIT_MG_PRESETS,
	DPIT_MG_SMOKE,
	DPIT_MG_SMOKE_SCATTERING,
	DPIT_MG_SMOKE_MULTISCATTERING,
	DPIT_MG_SMOKE_OCCLUSION,
	DPIT_MG_SMOKE_SHADOWS,
	DPIT_MG_FIRE,
	DPIT_MG_COMPOSITE,

	//Resource Group
	GASSHADER_GENERAL_G = 2000,
	GASSHADER_PRESETS_G,
	GASSHADER_SMOKE_G,
	GASSHADER_SMOKE_SCATTERING_G,
	GASSHADER_SMOKE_MULTISCATTERING_G,
	GASSHADER_SMOKE_OCCLUSION_G,
	GASSHADER_SMOKE_SHADOWS_G,
	GASSHADER_FIRE_G,
	GASSHADER_COMPOSITE_G,

	GASSHADER_SMOKE_COLOR_SUB,
	GASSHADER_SMOKE_DENSITY_SUB,
	GASSHADER_SMOKE_MULTIPLESCATTERING_SUB,
	GASSHADER_SMOKE_OCCLUSIONMAP_SUB,
	GASSHADER_FIRE_COLOR_SUB,
	GASSHADER_FIRE_DENSITY_TEMP_SUB,
	GASSHADER_FIRE_DENSITY_FIRE_SUB,
	GASSHADER_FIRE_RADIATION_SUB,
	GASSHADER_COMPOSITE_MULTIPASS_SUB,
	GASSHADER_SMOKE_RENDER_SUB,
	GASSHADER_SMOKE_OPTICAL_CONSTRAINTS,
	GASSHADER_SMOKE_MS_CONSTRAINTS,

	//Object IDs
	GASSHADER_PRESETS = 2100,
		GASSHADER_PRESET_DEFAULT = 0,
	GASSHADER_PRESETS_SET = 2101,
	GASSHADER_PRESETS_SAVE,
	GASSHADER_PRESETS_SAVEAS,
	GASSHADER_PRESETS_DE,

	GASSHADER_UPSAMPLING_VOXELSCALE = 2150,
	GASSHADER_UPSAMPLING_NOPREVIEW,
	GASSHADER_UPSAMPLING_INTERPOLATION = 2152,
		GASSHADER_UPSAMPLING_INTERPOLATION_LINEAR = 0,
		GASSHADER_UPSAMPLING_INTERPOLATION_CUBIC = 2,
		GASSHADER_UPSAMPLING_INTERPOLATION_HERMITE,
		GASSHADER_UPSAMPLING_INTERPOLATION_QUADRATIC,
	GASSHADER_RAY_JITTER = 2153,
	GASSHADER_STEPMIN,
	GASSHADER_STEPMAX,
	GASSHADER_RENDER_INTERPOLATION = 2156,
		GASSHADER_RENDER_INTERPOLATION_LINEAR = 0,
		GASSHADER_RENDER_INTERPOLATION_COSINE,
		GASSHADER_RENDER_INTERPOLATION_CUBIC,
		GASSHADER_RENDER_INTERPOLATION_QUADRATIC,
	GASSHADER_EARLYRAYTERMINATION = 2157 ,
	GASSHADER_LIGHTLIST,
	GASSHADER_TRAPEZOIDAL,

	GASSHADER_SMOKE_DENSITY = 2200,
	GASSHADER_SMOKE_FIRESOOT,
	GASSHADER_SMOKE_ADVECTION,
	GASSHADER_SMOKE_FLUID,

	GASSHADER_SMOKE_COLOR = 2225,
	GASSHADER_SMOKE_COLOR_PRECOMPUTE,
	GASSHADER_SMOKE_COLOR_MAPPING,

	GASSHADER_SMOKE_DENSITY_PRECOMPUTE = 2250,
	GASSHADER_SMOKE_DENSITY_MULTIPLIER,
	GASSHADER_SMOKE_DENSITY_MAPPING,
	GASSHADER_SMOKE_DENSITY_BLURITER,
	GASSHADER_SMOKE_DENSITY_BLUR,
	GASSHADER_SMOKE_DENSITY_CONSTRAINTS,

	GASSHADER_SMOKE_DENSITY_NOISE_PREVIEW = 2300,
	GASSHADER_SMOKE_DENSITY_NOISE,
	GASSHADER_SMOKE_DENSITY_NOISE_SPACE = 2302,
		GASSHADER_SMOKE_DENSITY_NOISE_SPACE_WORLD = 0, 
		GASSHADER_SMOKE_DENSITY_NOISE_SPACE_PHYSICAL,
	GASSHADER_SMOKE_DENSITY_NOISE_DENSITY = 2303,
	GASSHADER_SMOKE_DENSITY_NOISE_SEED,
	GASSHADER_SMOKE_DENSITY_NOISE_TYPE,
	GASSHADER_SMOKE_DENSITY_NOISE_SCALE,
	GASSHADER_SMOKE_DENSITY_NOISE_SCALE3D,
	GASSHADER_SMOKE_DENSITY_NOISE_OCTAVES,
	GASSHADER_SMOKE_DENSITY_NOISE_ANIMATION,
	GASSHADER_SMOKE_DENSITY_NOISE_LOOP,
	GASSHADER_SMOKE_DENSITY_NOISE_DETAILATT,
	GASSHADER_SMOKE_DENSITY_NOISE_SAMPLINGDELTA,
	GASSHADER_SMOKE_DENSITY_NOISE_ABSOLUTE,
	GASSHADER_SMOKE_DENSITY_NOISE_LOWCLIP,
	GASSHADER_SMOKE_DENSITY_NOISE_HIGHCLIP,
	GASSHADER_SMOKE_DENSITY_NOISE_BRIGHTNESS,
	GASSHADER_SMOKE_DENSITY_NOISE_CONTRAST,
	
	GASSHADER_SMOKE_OPTICAL_AMBIENT = 2350,
	GASSHADER_SMOKE_OPTICAL_ABSORPTION,
	GASSHADER_SMOKE_OPTICAL_LUMINANCE,
	GASSHADER_SMOKE_OPTICAL_PHASE = 2353,
		GASSHADER_SMOKE_OPTICAL_PHASE_NONE = 0,
		GASSHADER_SMOKE_OPTICAL_PHASE_GREENSTEIN,
		GASSHADER_SMOKE_OPTICAL_PHASE_RAYLEIGH,
		GASSHADER_SMOKE_OPTICAL_PHASE_MIE,
		GASSHADER_SMOKE_OPTICAL_PHASE_HAZY,
		GASSHADER_SMOKE_OPTICAL_PHASE_MURKY,
		GASSHADER_SMOKE_OPTICAL_PHASE_SCHLICK,
		GASSHADER_SMOKE_OPTICAL_PHASE_GREENSTEINDOUBLE,
		GASSHADER_SMOKE_OPTICAL_PHASE_GREENSTEINNISHITA,
	GASSHADER_SMOKE_OPTICAL_PHASE_ANISOTROPY = 2354,
	GASSHADER_SMOKE_OPTICAL_PHASE_INTENSITY,
	GASSHADER_SMOKE_OPTICAL_PHASE_ANISOTROPYTWO,
	GASSHADER_SMOKE_OPTICAL_CONSTRAINTS_ABSORPTION,
	GASSHADER_SMOKE_OPTICAL_CONSTRAINTS_LUMINANCE,
	GASSHADER_SMOKE_OPTICAL_CONSTRAINTS_ANISOTROPY,
	GASSHADER_SMOKE_OPTICAL_CONSTRAINTS_INTENSITY,

	GASSHADER_USEMS = 2400,
	GASSHADER_MS_HOMOGEN ,
	GASSHADER_MS_MAPSIZE,
	GASSHADER_MS_SPACESCALE,
	GASSHADER_MS_INTENSITY,
	GASSHADER_MS_ABSORPTION,
	GASSHADER_MS_SCATTERING,
	GASSHADER_MS_MSA,
	GASSHADER_MS_MINCONTRIBUTION,
	GASSHADER_MS_STEPSIZE,
	GASSHADER_MS_DIFFUSION,
	GASSHADER_MS_SCATTER_SCALE,
	GASSHADER_MS_ABSORPTION_USEGENERAL,
	GASSHADER_MS_STEPSIZE_USEGENERAL,
	GASSHADER_MS_MSA_AUTO,
	GASSHADER_MS_PHASE_ANISOTROPY,
	GASSHADER_MS_PHASE_INTENSITY,
	GASSHADER_SMOKE_MS_CONSTRAINTS_SCATTERING,
	GASSHADER_SMOKE_MS_CONSTRAINTS_SCATTERSCALE,
	GASSHADER_SMOKE_MS_CONSTRAINTS_ANISOTROPY,
	GASSHADER_SMOKE_MS_CONSTRAINTS_INTENSITY,
	
	GASSHADER_SMOKE_OCCLUSION_RAYJITTER = 2450,
	GASSHADER_SMOKE_OCCLUSION_STEPMIN,
	GASSHADER_SMOKE_OCCLUSION_STEPMAX,
	GASSHADER_SMOKE_OCCLUSION_ABSORPTION,
	GASSHADER_SMOKE_OCCLUSION_COLOR,
	GASSHADER_SMOKE_OCCLUSIONMAP_VOXELSCALE,
	GASSHADER_SMOKE_OCCLUSIONMAP_NOPREVIEW,
	GASSHADER_SMOKE_OCCLUSIONMAP_BLURITER,
	GASSHADER_SMOKE_OCCLUSIONMAP_BLUR,
	GASSHADER_SMOKE_OCCLUSIONMAP_BLURBLENDMIX,
	GASSHADER_SMOKE_OCCLUSION_TRAPEZOIDAL,
	GASSHADER_SMOKE_OCCLUSION_CONSTRAINTS,
	GASSHADER_SMOKE_OCCLUSION_ABSORPTION_PREVIEW,
	GASSHADER_SMOKE_OCCLUSIONMAP_EXTRAPOLATE,
	GASSHADER_SMOKE_OCCLUSION_ARTISTIC,
	
	GASSHADER_SMOKE_SHADOWS_RECEIVE = 2500,
	GASSHADER_SMOKE_SHADOWS_CAST ,
	GASSHADER_SMOKE_SHADOWS_CAST_INTENSITY,
	GASSHADER_SMOKE_SHADOWS_RAYJITTER,
	GASSHADER_SMOKE_SHADOWS_STEPMIN,
	GASSHADER_SMOKE_SHADOWS_STEPMAX,
	GASSHADER_SMOKE_SHADOWS_COLOR,
	GASSHADER_SMOKE_SHADOWS_RECEIVE_DENSITY,
	GASSHADER_SMOKE_SHADOWS_RECEIVE_DENSITY_COLOR,
	
	GASSHADER_FIRE_TYPE = 2550,
		GASSHADER_FIRE_TYPE_PHYSICAL = 0,
		GASSHADER_FIRE_TYPE_ARTISTIC,
	GASSHADER_FIRE_TEMPERATURE = 2551,
	GASSHADER_FIRE_FIRE,
	GASSHADER_FIRE_ADVECTION,
	GASSHADER_FIRE_AFFECTGI,
	GASSHADER_FIRE_FLUID,
	GASSHADER_FIRE_VISIBILITY = 2556,
		GASSHADER_FIRE_VISIBILITY_TEMPERATURE  = 0,
		GASSHADER_FIRE_VISIBILITY_FIRE,

	GASSHADER_FIRE_COLOR_TYPE = 2600,
		GASSHADER_FIRE_COLOR_TYPE_BLACKBODY = 0,
		GASSHADER_FIRE_COLOR_TYPE_ARTISTIC,
	GASSHADER_FIRE_COLOR_BLACKBODYPREVIEW = 2601,
	GASSHADER_FIRE_COLOR_CUSTOM,
	GASSHADER_FIRE_COLOR_BLACKBODY_TONE = 2603,
		GASSHADER_FIRE_COLOR_BLACKBODY_TONE_NTSC = 0,
		GASSHADER_FIRE_COLOR_BLACKBODY_TONE_PAL,
		GASSHADER_FIRE_COLOR_BLACKBODY_TONE_SMPTE,
		GASSHADER_FIRE_COLOR_BLACKBODY_TONE_HDTV,
		GASSHADER_FIRE_COLOR_BLACKBODY_TONE_CIE,
		GASSHADER_FIRE_COLOR_BLACKBODY_TONE_CIEREC709,
	GASSHADER_FIRE_COLOR_BLACKBODY_BOOST = 2604,
	GASSHADER_FIRE_COLOR_BLACKBODY_INTENSITY,
	GASSHADER_FIRE_COLOR_BLACKBODY_TSCALE,
	GASSHADER_FIRE_COLOR_BLACKBODY_GAMMA,
	GASSHADER_FIRE_COLOR_BLACKBODY_NORMALIZE,

	GASSHADER_FIRE_DENSITY_TEMP_THRESHOLD = 2650,
	GASSHADER_FIRE_DENSITY_TEMP_MAPPING,
	GASSHADER_FIRE_DENSITY_TEMP_BLURITER,
	GASSHADER_FIRE_DENSITY_TEMP_BLUR,
	GASSHADER_FIRE_DENSITY_TEMP_CONSTRAINTS,

	GASSHADER_FIRE_DENSITY_FIRE_THRESHOLD = 2700,
	GASSHADER_FIRE_DENSITY_FIRE_MAPPING,
	GASSHADER_FIRE_DENSITY_FIRE_BLURITER,
	GASSHADER_FIRE_DENSITY_FIRE_BLUR,
	GASSHADER_FIRE_DENSITY_FIRE_CONSTRAINTS,
	
	GASSHADER_FIRE_RADIATION = 2750,
	GASSHADER_FIRE_RADIATION_VOXELSCALE,
	GASSHADER_FIRE_RADIATION_RADIUS,
	GASSHADER_FIRE_RADIATION_COLOR_TYPE = 2753,
		GASSHADER_FIRE_RADIATION_COLOR_TYPE_PHYSICAL = 0,
		GASSHADER_FIRE_RADIATION_COLOR_TYPE_CUSTOM,
	GASSHADER_FIRE_RADIATION_COLOR = 2754,
	GASSHADER_FIRE_RADIATION_TSCALE,
	GASSHADER_FIRE_RADIATION_ABSORPTION,
	GASSHADER_FIRE_RADIATION_POWER,
	GASSHADER_FIRE_RADIATION_ALGORITHM = 2758,
		GASSHADER_FIRE_RADIATION_ALGORITHM_SPREADMAP = 0,
		GASSHADER_FIRE_RADIATION_ALGORITHM_SCATTERMAP,
	GASSHADER_FIRE_RADIATION_REMAP = 2759,
	GASSHADER_FIRE_RADIATION_USEPHASE,
	
	GASSHADER_COMPOSITE_LUMINANCE = 2800,
	GASSHADER_COMPOSITE_LUMINANCE_GRADIENT,
	GASSHADER_COMPOSITE_BRIGHTNESS,
	GASSHADER_COMPOSITE_CONTRAST,
	GASSHADER_COMPOSITE_SATURATION,

	GASSHADER_COMPOSITE_MP_DIFFUSE  = 2850,
	GASSHADER_COMPOSITE_MP_LUMINANCE ,
	GASSHADER_COMPOSITE_MP_ALPHA ,
	GASSHADER_COMPOSITE_MP_DEPTH ,
	GASSHADER_COMPOSITE_MP_SHADOWS ,
	GASSHADER_COMPOSITE_MP_SMOKE ,
	GASSHADER_COMPOSITE_MP_FIRE ,
	GASSHADER_COMPOSITE_MP_MOTION ,
	GASSHADER_COMPOSITE_MP_MS ,
	GASSHADER_COMPOSITE_MP_HEAT ,
	GASSHADER_COMPOSITE_MP_FIRELIGHT ,
	GASSHADER_COMPOSITE_MP_SCATTERDEPTH,

	GASSHADER_SMOKE_RENDER_INVISIBLE,
	GASSHADER_SMOKE_RENDER_GI,
	GASSHADER_SMOKE_RENDER_TRANSPARENCY,
	GASSHADER_SMOKE_RENDER_REFRACTION,
	GASSHADER_SMOKE_RENDER_REFLECTION,
	GASSHADER_SMOKE_RENDER_AO,

	GASSHADER_FIRE_TEMPERATURE_SELECTOR = 3000,
	GASSHADER_FIRE_FIRE_SELECTOR,
	GASSHADER_FIRE_FLUID_SELECTOR,
	GASSHADER_SMOKE_DENSITY_SELECTOR,
	GASSHADER_SMOKE_FLUID_SELECTOR,

	GASSHADER_DUMMY
};

#endif