CONTAINER fx_c4d_particle_brush
{
	NAME fx_c4d_particle_brush;
	INCLUDE ToolBase;
	HIDE MDATA_COMMANDGROUP;

	GROUP
	{
		COLUMNS 2;
		LONG FXC4D_PARTICLEBRUSH_MODE
		{
			CYCLE
			{
				FXC4D_PARTICLEBRUSH_MODE_FREE;				
				FXC4D_PARTICLEBRUSH_MODE_CIRCLE;
				FXC4D_PARTICLEBRUSH_MODE_LINE;
				FXC4D_PARTICLEBRUSH_MODE_ERASE;
				FXC4D_PARTICLEBRUSH_MODE_PAINT;
			}
		}	
		BOOL FXC4D_PARTICLEBRUSH_MOVING {}

		LINK FXC4D_PARTICLEBRUSH_TARGET {ACCEPT{fx_volume; fx_mesh;} SCALE_H;}
		BUTTON FXC4D_PARTICLEBRUSH_TARGET_SELECTOR {}

		LINK FXC4D_PARTICLEBRUSH_PROPERTY {ACCEPT{fx_property_scalar; fx_property_vector;} SCALE_H;}		
		BUTTON FXC4D_PARTICLEBRUSH_PROPERTY_SELECTOR {}
		
	}

	GROUP FXC4D_PARTICLEBRUSH_BRUSH_SUB
	{		
		DEFAULT 1;	
		BUTTON FXC4D_PARTICLEBRUSH_CLEARALL {}

		SEPARATOR {LINE;}

		GROUP
		{
			DEFAULT 1; COLUMNS 2;

			REAL FXC4D_PARTICLEBRUSH_SPEED {MIN 0; MAX 100; UNIT PERCENT; CUSTOMGUI REALSLIDER;SCALE_H; HIDDEN;}
			STATICTEXT { NEWLINE; }		

			REAL FXC4D_PARTICLEBRUSH_MINRADIUS {MIN 0;}
			REAL FXC4D_PARTICLEBRUSH_RADIUS {MIN 0.01; }

			BOOL FXC4D_PARTICLEBRUSH_SAMPLES_PRESS {}
			LONG FXC4D_PARTICLEBRUSH_SAMPLES {MIN 1; MAX 100;}

			BOOL FXC4D_PARTICLEBRUSH_SAMPLES_CHECKOVERLAP {}
			REAL FXC4D_PARTICLEBRUSH_SAMPLES_OVERLAP {MIN 0; MAX 10000; MAXSLIDER 100; UNIT METER; CUSTOMGUI REALSLIDER;SCALE_H;}
		}
	}
	
	GROUP FXC4D_PARTICLEBRUSH_PAINT_SUB
	{
		GROUP 
		{
			COLUMNS 2; 
			BUTTON FXC4D_PARTICLEBRUSH_PAINT_SETPROPERTY {}
		}

		SEPARATOR {LINE;}

		REAL FXC4D_PARTICLEBRUSH_PAINT_INTENSITY {MIN 0; MAX 1000; MAXSLIDER 100; UNIT PERCENT; CUSTOMGUI REALSLIDER;}
		REAL FXC4D_PARTICLEBRUSH_PAINT_VARIATION {MIN 0; MAX 100; UNIT PERCENT; CUSTOMGUI REALSLIDER;}
		LONG FXC4D_PARTICLEBRUSH_PAINT_FALLOFF 
		{
			PARENTCOLLAPSE;
			CYCLE
			{
				FXC4D_PARTICLEBRUSH_PAINT_FALLOFF_NONE;
				FXC4D_PARTICLEBRUSH_PAINT_FALLOFF_LINEAR;
				FXC4D_PARTICLEBRUSH_PAINT_FALLOFF_SPLINE;
			}
		}
		SPLINE FXC4D_PARTICLEBRUSH_PAINT_FALLOFF_SPLINEGRAPH { PARENTCOLLAPSE FXC4D_PARTICLEBRUSH_PAINT_FALLOFF; SHOWGRID_H; X_MIN 0; X_MAX 1; Y_MIN 0; Y_MAX 1; X_STEPS 0.01; Y_STEPS 0.01;	}
		
		SEPARATOR { LINE; }
		
		LONG FXC4D_PARTICLEBRUSH_PAINT_UNIT
		{
			CYCLE
			{
				FXC4D_PARTICLEBRUSH_PAINT_UNIT_COLOR;
				FXC4D_PARTICLEBRUSH_PAINT_UNIT_METER;				
				FXC4D_PARTICLEBRUSH_PAINT_UNIT_PERCENT;
				FXC4D_PARTICLEBRUSH_PAINT_UNIT_VOXEL;
				FXC4D_PARTICLEBRUSH_PAINT_UNIT_RAW;
			}
		}
		
		SEPARATOR { LINE; }

		LINK FXC4D_PARTICLEBRUSH_PAINT_COLORSHADER { ACCEPT {Mbase;}}
		COLOR FXC4D_PARTICLEBRUSH_PAINT_COLOR { OPEN; }

		LONG FXC4D_PARTICLEBRUSH_PAINT_BLEND
		{
			CYCLE
			{
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_NORMAL;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_MULTIPLY;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_DARKEN;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_LIGHTEN;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_SCREEN;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_OVERLAY;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_HARDLIGHT;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_SOFTLIGHT;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_COLORDODGE;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_COLORDODGEINV;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_COLORBURN;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_SOFTBURN;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_DIFFERENCE;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_NDIFFERENCE;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_EXCLUDE;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_REFLECT;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_ADD;
				FXC4D_PARTICLEBRUSH_PAINT_BLEND_SUB;
			}
		}
		LONG FXC4D_PARTICLEBRUSH_PAINT_FIXUV 
		{ 
			CYCLE
			{
				FXC4D_PARTICLEBRUSH_PAINT_FIXUV_SCREEN;
				FXC4D_PARTICLEBRUSH_PAINT_FIXUV_BRUSH;
				FXC4D_PARTICLEBRUSH_PAINT_FIXUV_MOUSE;
			}
		}

		SEPARATOR { LINE; }

		REAL FXC4D_PARTICLEBRUSH_PAINT_SCALAR_METER { UNIT METER; MINSLIDER 0; MAXSLIDER 100; CUSTOMGUI REALSLIDER; }
		REAL FXC4D_PARTICLEBRUSH_PAINT_SCALAR_PERCENT { UNIT PERCENT; MINSLIDER 0; MAXSLIDER 100; CUSTOMGUI REALSLIDER;}
		REAL FXC4D_PARTICLEBRUSH_PAINT_SCALAR_VOXEL {MINSLIDER 0; MAXSLIDER 20; CUSTOMGUI REALSLIDER;  }			
		
		BOOL FXC4D_PARTICLEBRUSH_PAINT_INTENSIFY_VECTORS {}
		VECTOR FXC4D_PARTICLEBRUSH_PAINT_VECTOR_METER { UNIT METER; MINSLIDER 0; MAXSLIDER 100; }
		VECTOR FXC4D_PARTICLEBRUSH_PAINT_VECTOR_PERCENT { UNIT PERCENT; MINSLIDER 0; MAXSLIDER 100; }
		VECTOR FXC4D_PARTICLEBRUSH_PAINT_VECTOR_VOXEL { MINSLIDER 0; MAXSLIDER 20; }
	}
}
