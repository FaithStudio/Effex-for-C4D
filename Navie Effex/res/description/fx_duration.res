CONTAINER fx_duration
{
	NAME fx_duration;
	INCLUDE fx_force_base;
	
	GROUP ID_FORCE_BASE
	{
		DEFAULT 1;
		BOOL DURATION_TIMER_FRAMES {}

		SEPARATOR{LINE;}

		REAL DURATION_TIMER_LENGTH {MIN 0.0; STEP 0.01;}
		REAL DURATION_TIMER_START {MIN 0.0; STEP 0.01;}
		LONG DURATION_TIMER_LENGTH_FRAMES {MIN 0; HIDDEN;}
		LONG DURATION_TIMER_START_FRAMES {MIN 0;HIDDEN;}
		LONG DURATION_TIMER_LOOPS {MIN 0;}
		REAL DURATION_TIMER_LOOPOFFSET {MIN 0.001; STEP 0.01;}
		LONG DURATION_TIMER_LOOPOFFSET_FRAMES {MIN 1;HIDDEN;}
		SPLINE DURATION_TIMER_SPLINE { SHOWGRID_H; X_MIN 0; X_MAX 1; Y_MIN 0; Y_MAX 1; X_STEPS 0.01; Y_STEPS 0.01; }		
	}
}