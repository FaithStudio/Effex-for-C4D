CONTAINER fx_emission_setting
{
	NAME fx_emission_setting;
	INCLUDE fx_force_base;
	
	HIDE Obaselist;
	HIDE ID_BASEOBJECT_GROUP1;
	
	GROUP ID_FORCE_BASE
	{
		DEFAULT 1;
		
		GROUP ID_PORT_BASE
		{
			COLUMNS 2;
			
			LINK EMISSION_SETTINGS_RATE {ACCEPT{fx_rate; fx_group;}}
			BUTTON EMISSION_SETTINGS_RATE_SELECTOR {}
			LINK EMISSION_SETTINGS_RATE_LIMIT {ACCEPT{fx_rate; fx_group;}}
			BUTTON EMISSION_SETTINGS_RATE_LIMIT_SELECTOR {}
			LINK EMISSION_SETTINGS_DURATION {ACCEPT{fx_duration; fx_group;}}
			BUTTON EMISSION_SETTINGS_DURATION_SELECTOR {}
			LINK EMISSION_SETTINGS_NOISE {ACCEPT{fx_constraint_noise;} HIDDEN;}
		}
		
		SEPARATOR {LINE;}

		BOOL EMISSION_SETTINGS_RATETYPE {}
		REAL EMISSION_SETTINGS_RATESCALAR {MIN 0; MAX 50000; STEP 0.1; }
		VECTOR EMISSION_SETTINGS_RATEVECTOR { STEP 0.1 0.1 0.1; HIDDEN;}

		SEPARATOR {LINE;}

		BOOL EMISSION_SETTINGS_INTERPOLATED {}
		LONG EMISSION_SETTINGS_RATE_MODE
		{
			CYCLE
			{
				EMISSION_SETTINGS_RATE_MODE_RATE;
				EMISSION_SETTINGS_RATE_MODE_SET;
				EMISSION_SETTINGS_RATE_MODE_LIMIT;
			}
		}

		BOOL EMISSION_SETTINGS_PERFRAME {}
		LONG EMISSION_SETTINGS_FALLOFFMODE
		{
			CYCLE
			{
				EMISSION_SETTINGS_FALLOFFMODE_CONST;
				EMISSION_SETTINGS_FALLOFFMODE_LINEAR;
				EMISSION_SETTINGS_FALLOFFMODE_SPLINE;
			}
		}
		SPLINE EMISSION_SETTINGS_TEMPORAL_INTENSITY { SHOWGRID_H; X_MIN 0; X_MAX 1; Y_MIN 0; Y_MAX 1; X_STEPS 0.01; Y_STEPS 0.01; }		
		
	}
}