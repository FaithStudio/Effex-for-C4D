CONTAINER fx_psheet
{
	NAME fx_psheet;
	INCLUDE fx_force_base;
	INCLUDE fx_base_constraints;

	GROUP ID_FORCE_BASE
	{
		GROUP ID_PORT_BASE
		{
			COLUMNS 2;
			LINK PSHEET_PARTICLES { ACCEPT { fx_particlegroup;  fx_group;} }
			BUTTON PSHEET_PARTICLES_SELECTOR {}
			LONG PSHEET_INPUT_FACTORY
			{
				CYCLE
				{
					PSHEET_INPUT_FACTORY_PASSIVE;
					PSHEET_INPUT_FACTORY_VORTICITY;
					PSHEET_INPUT_FACTORY_IMPLICIT;
					PSHEET_INPUT_FACTORY_DIFFUSE;
				}
			} STATICTEXT {NEWLINE;}
		}
		
		SEPARATOR{LINE;}

		BOOL PSHEET_DISTANCE_INCREASE {}
		REAL PSHEET_RADIUS_DENSITY { MIN 1; MAX 10.0; STEP 0.1; } //a2

		SEPARATOR{LINE;}

		BOOL PSHEET_RECALCULATE_ANISOTROPY {}
		REAL PSHEET_ANISOTROPIC_RATE { MIN 0.01; MAX 0.99; STEP 0.01; CUSTOMGUI REALSLIDER;} //a8
		
		SEPARATOR{LINE;}

		REAL PSHEET_CANDIDATES_MINDENSITY { MIN 0.001; MAX 1.0; STEP 0.001; CUSTOMGUI REALSLIDER;}//a6
		REAL PSHEET_CANDIDATES_MAXDENSITY { MIN 0.01; MAX 2.0; MAXSLIDER 1.0; STEP 0.001; CUSTOMGUI REALSLIDER;}//a7
		REAL PSHEET_CANDIDATES_MINDISTANCE { MIN 0.01; MAX 5.0; MINSLIDER 0.5; MAXSLIDER 2.0; STEP 0.05; CUSTOMGUI REALSLIDER;} //a9
		REAL PSHEET_CANDIDATES_MAXDISTANCE_FINDING { MIN 0.01; MAX 5.0; STEP 0.05; CUSTOMGUI REALSLIDER;} //a10
		REAL PSHEET_CANDIDATES_MAXDISTANCE_INSERTION { MIN 0.01; MAX 5.0; STEP 0.1; CUSTOMGUI REALSLIDER;} //a11
		
		SEPARATOR{LINE;}
		
		REAL PSHEET_COLLAPSE_MAXDENSITY { MIN 0.001; MAX 1.0; STEP 0.01; CUSTOMGUI REALSLIDER;}//a12
		REAL PSHEET_COLLAPSE_MINDISTANCE { MIN 0.01; MAX 1.0; STEP 0.01; CUSTOMGUI REALSLIDER;}//a13
	}
}
			