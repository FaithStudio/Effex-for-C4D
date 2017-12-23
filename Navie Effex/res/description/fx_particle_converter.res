CONTAINER fx_particle_converter
{	
	INCLUDE fx_force_base;
	INCLUDE fx_base_constraints;

	NAME fx_particle_converter;
	GROUP ID_FORCE_BASE
	{
		GROUP ID_PORT_BASE
		{
			COLUMNS 2; 
			LINK PARTICLE_CONVERTER_INPUT  { SCALE_H; ACCEPT{fx_particlegroup; 1001381; Obase; Opolygon; Ospline; Oparticle;1027133; fx_group;}}
			BUTTON PARTICLE_CONVERTER_INPUT_SELECTOR {SCALE_V; FIT_H;}

			LINK PARTICLE_CONVERTER_OUTPUT { ACCEPT{fx_particlegroup; fx_group;1001381; 1027133;}}
			BUTTON PARTICLE_CONVERTER_OUTPUT_SELECTOR {SCALE_V; FIT_H;}
			
			LINK PARTICLE_CONVERTER_SAMPLES {ACCEPT{fx_particlemesh_emission_setting; fx_group;}}
			BUTTON PARTICLE_CONVERTER_SAMPLES_SELECTOR {SCALE_V; FIT_H;}

			IN_EXCLUDE PARTICLE_CONVERTER_PROPERTIES	
			{ 
				NUM_FLAGS 0; INIT_STATE 0; SEND_SELCHNGMSG 0;
				ACCEPT {  fx_property; fx_property_scalar; fx_property_vector; }; 
			}
			BUTTON PARTICLE_CONVERTER_PROPERTIES_SELECTOR {SCALE_V; FIT_H;}
		}	
		LONG PARTICLE_CONVERTER_INPUT_FACTORY
		{
			CYCLE
			{
				PARTICLE_CONVERTER_INPUT_FACTORY_PASSIVE;
				PARTICLE_CONVERTER_INPUT_FACTORY_VORTICITY;
				PARTICLE_CONVERTER_INPUT_FACTORY_IMPLICIT;
				PARTICLE_CONVERTER_INPUT_FACTORY_DIFFUSE;
			}
		}
		LONG PARTICLE_CONVERTER_OUTPUT_FACTORY
		{
			CYCLE
			{
				PARTICLE_CONVERTER_OUTPUT_FACTORY_PASSIVE;
				PARTICLE_CONVERTER_OUTPUT_FACTORY_VORTICITY;
				PARTICLE_CONVERTER_OUTPUT_FACTORY_IMPLICIT;
				PARTICLE_CONVERTER_OUTPUT_FACTORY_DIFFUSE;
				PARTICLE_CONVERTER_OUTPUT_FACTORY_KILL;
			}
		}	
		SEPARATOR { LINE; }

		GROUP PARTICLE_CONVERTER_CONVERSION
		{		
			BOOL PARTICLE_CONVERTER_CREATE {}
			BOOL PARTICLE_CONVERTER_EXTERNAL_FILL {}
			BOOL PARTICLE_CONVERTER_ONLY_PARTICLE_LOCATION {}
			REAL PARTICLE_CONVERTER_SAMPLERADIUS { MIN 0.0; STEP 0.01; }
			REAL PARTICLE_CONVERTER_SAMPLERADIUS_VAR {MIN 0; MAX 100; UNIT PERCENT; CUSTOMGUI REALSLIDER; }
			REAL PARTICLE_CONVERTER_SAMPLESVAR {MIN 0; MAX 100; UNIT PERCENT; CUSTOMGUI REALSLIDER; }
			GROUP PARTICLE_CONVERTER_TO_SIMPLEPARTICLES
			{
				DEFAULT 1; HIDDEN;
				REAL	PARTICLE_CONVERTER_TO_SIMPLEPARTICLES_VELOCITY {UNIT PERCENT;}
			}

			GROUP PARTICLE_CONVERTER_TO_THINKINGPARTICLES
			{
				DEFAULT 1; HIDDEN;
				REAL	PARTICLE_CONVERTER_TO_THINKINGPARTICLES_VELOCITY {UNIT PERCENT;}
			}

			GROUP PARTICLE_CONVERTER_TO_PASSIVEPARTICLES
			{
				DEFAULT 1;
				REAL	PARTICLE_CONVERTER_TO_PASSIVEPARTICLES_VELOCITY {UNIT PERCENT;}
			}

			GROUP PARTICLE_CONVERTER_TO_VORTICITYPARTICLES
			{
				DEFAULT 1;
				LINK	PARTICLE_CONVERTER_TO_VORTICITYPARTICLES_ALIGNMENT { ACCEPT{fx_alignment; fx_group;}}			
			}

			GROUP PARTICLE_CONVERTER_TO_IMPLICITPARTICLES
			{
				DEFAULT 1;
				REAL	PARTICLE_CONVERTER_TO_IMPLICITPARTICLES_ACCELERATION {UNIT PERCENT;}
			}		
		}
	}
}