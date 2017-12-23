CONTAINER fx_constraint_gridvalue
{
	NAME fx_constraint_gridvalue;
	INCLUDE fx_constraint;
	
	GROUP ID_FORCE_BASE
	{
		GROUP ID_PORT_BASE
		{
			COLUMNS 2;
			LINK CONSTRAINT_GRIDVALUE_CHANNEL { ACCEPT{ fx_group;fx_channel_velocity; fx_channel_scalar; fx_channel_temp;fx_channel_fire; fx_channel_fuel; fx_channel_vector; Obase;} }
			BUTTON CONSTRAINT_GRIDVALUE_CHANNEL_SELECTOR {}			
		}

		GROUP CONSTRAINT_PARAMS_SID
		{			
			LONG CONSTRAINT_GRIDVALUE_DYNAMICS
			{		
				CYCLE
				{
					CONSTRAINT_GRIDVALUE_DYNAMICS_DIVERGENCE;
					//CONSTRAINT_GRIDVALUE_DYNAMICS_PRESSURE;
					CONSTRAINT_GRIDVALUE_DYNAMICS_VELOCITY;
				}
			}
			LONG CONSTRAINT_GRIDVALUE_MODE
			{
				CYCLE
				{
					CONSTRAINT_GRIDVALUE_MODE_ISEQUAL;
					CONSTRAINT_GRIDVALUE_MODE_ISNOT;
					CONSTRAINT_GRIDVALUE_MODE_RANGE_SEGE;
					CONSTRAINT_GRIDVALUE_MODE_RANGE_GESE;
				}
			}
			REAL CONSTRAINT_GRIDVALUE_A { MIN 0; MAX 100; UNIT PERCENT; }
			REAL CONSTRAINT_GRIDVALUE_B { MIN 0; MAX 100; UNIT PERCENT; }
			REAL CONSTRAINT_GRIDVALUE_VECLENGTH { MIN 0.001; STEP 0.1; }

			BOOL CONSTRAINT_GRIDVALUE_MAPRESULTS {}
			SPLINE CONSTRAINT_GRIDVALUE_SPLINE { SHOWGRID_H; X_MIN 0; X_MAX 1; Y_MIN 0; Y_MAX 1; X_STEPS 0.01; Y_STEPS 0.01;	}
		}
	}
}