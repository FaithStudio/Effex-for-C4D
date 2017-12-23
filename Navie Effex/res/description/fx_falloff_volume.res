CONTAINER fx_falloff_volume
{
	NAME	fx_falloff_volume;
	INCLUDE Ofalloff_standard;

	HIDE FALLOFF_SIZE;
	HIDE FALLOFF_SHAPE_SLICE;
	
	GROUP FALLOFF_GROUPFALLOFF
	{
		GROUP FALLOFF_SETTINGS
		{
			LONG	VOLUMEFALLOFF_SCALE_SPACE
			{
				CYCLE
				{
					VOLUMEFALLOFF_SCALE_SPACE_FALLOFF;
					VOLUMEFALLOFF_SCALE_SPACE_VOLUME;
					VOLUMEFALLOFF_SCALE_SPACE_VOLUMELINK;
				}
			}
			SEPARATOR {LINE;}

			LINK	VOLUMEFALLOFF_VOLUME { ACCEPT{fx_volume;} }
			BOOL	VOLUMEFALLOFF_UNCLAMPED {}
			
		}
	}
}
