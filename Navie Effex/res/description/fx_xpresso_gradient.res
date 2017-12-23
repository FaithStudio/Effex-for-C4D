CONTAINER fx_xpresso_gradient
{
     NAME fx_xpresso_gradient;
     INCLUDE GVbase;
     GROUP ID_GVPROPERTIES
     {
	
     }
     GROUP ID_GVPORTS
     {
        GRADIENT	XGRAD_GRADIENT	{INPORT; EDITPORT; CREATEPORT;}
	REAL		XGRAD_SAMPLEPOS	{MIN 0.0; MAX 100; UNIT PERCENT; INPORT; EDITPORT; CREATEPORT;}

	VECTOR		XGRAD_COLOR	{OUTPORT; EDITPORT;CREATEPORT;STATICPORT; }
     }
}
