CONTAINER fx_constraint_voxeldistance
{
	NAME fx_constraint_voxeldistance;
	INCLUDE fx_constraint;
	
	GROUP ID_FORCE_BASE
	{
		GROUP ID_PORT_BASE
		{
			COLUMNS 2;
			LINK CONSTRAINT_VOXELDISTANCE_OBJECT {ACCEPT{Obase;}}
			BUTTON CONSTRAINT_VOXELDISTANCE_OBJECT_SELECTOR {}

		}
		GROUP CONSTRAINT_PARAMS_SID
		{			
			LONG CONSTRAINT_VOXELDISTANCE_MESH
			{
				CYCLE
				{
					CONSTRAINT_VOXELDISTANCE_MESH_NODE;
					CONSTRAINT_VOXELDISTANCE_MESH_VERTEX;
					//CONSTRAINT_VOXELDISTANCE_MESH_POLYGON;
				}
			}
			LONG CONSTRAINT_VOXELDISTANCE_SPLINE
			{
				CYCLE
				{
					CONSTRAINT_VOXELDISTANCE_SPLINE_NODE;
					CONSTRAINT_VOXELDISTANCE_SPLINE_VERTEX;
					CONSTRAINT_VOXELDISTANCE_SPLINE_SPLINE;
				}
			}
			REAL CONSTRAINT_VOXELDISTANCE_RATIO {MIN 0.001; UNIT METER;}
		}
	}
}