CONTAINER fx_grid_combustion_fire
{
	NAME fx_grid_combustion_fire;
	INCLUDE fx_force_base;
	INCLUDE fx_base_constraints;

	GROUP ID_FORCE_BASE
	{
		DEFAULT 1;
		GROUP ID_PORT_BASE
		{
			COLUMNS 2;
			LINK GRID_COMBUSTION_TEMPERATURE
			{
				ACCEPT {  fx_channel_scalar; fx_channel_temp; fx_group;};
			}
			BUTTON GRID_COMBUSTION_TEMPERATURE_SELECTOR {}
			LINK GRID_COMBUSTION_SMOKE
			{
				ACCEPT {  fx_channel_scalar;  fx_group;};
			}
			BUTTON GRID_COMBUSTION_SMOKE_SELECTOR {}
			LINK GRID_COMBUSTION_FIRE
			{
				ACCEPT {  fx_channel_fire; fx_group; };
			}
			BUTTON GRID_COMBUSTION_FIRE_SELECTOR {}
			LINK GRID_COMBUSTION_FUEL
			{
				ACCEPT {  fx_channel_fuel;  fx_group;};
			}
			BUTTON GRID_COMBUSTION_FUEL_SELECTOR {}
			LINK GRID_COMBUSTION_DIVERGENCE
			{
				ACCEPT {  fx_fluid; fx_liquid; fx_group;};
			}
			BUTTON GRID_COMBUSTION_DIVERGENCE_SELECTOR {}
		}

		SEPARATOR {LINE;}

		LONG GRID_COMBUSTION_MODE
		{
			CYCLE
			{
				GRID_COMBUSTION_MODE_FUEL;
				GRID_COMBUSTION_MODE_FUEL_OXYGEN;
			}
		}
		//HIDDEN IF FUEL CHANNEL AVAILABLE
		REAL GRID_COMBUSTION_BURNINGRATE	{MIN 0.001; MAX 100.0; STEP 0.001; }
		REAL GRID_COMBUSTION_OXYGEN		{MIN 0.001; STEP 0.01; }
		
		REAL GRID_COMBUSTION_IGNITION_TEMP	{MIN 1; MAX 5000; STEP 1.0;}
		
		SEPARATOR {LINE;}
		
		REAL GRID_COMBUSTION_HEAT	{MIN 0; MAX 5000; STEP 1.0;}
		SPLINE GRID_COMBUSTION_HEATUPCURVE
		{
			SHOWGRID_H; X_MIN 0; X_MAX 1; Y_MIN 0; Y_MAX 1; X_STEPS 0.01; Y_STEPS 0.01; 
		}
		REAL GRID_COMBUSTION_SOOT		{MIN 0.0; MAX 100.0; STEP 0.01; }
		SPLINE GRID_COMBUSTION_SOOTCURVE
		{
			SHOWGRID_H; X_MIN 0; X_MAX 1; Y_MIN 0; Y_MAX 1; X_STEPS 0.01; Y_STEPS 0.01;
		}
		REAL GRID_COMBUSTION_EXPANSION	{STEP 0.01;}
	}
}
			