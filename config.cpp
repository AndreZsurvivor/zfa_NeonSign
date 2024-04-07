class CfgPatches
{
	class zfa_NeonSign
	{
		units[]				=	{"zfa_NeonSign"};
		weapons[]			=	{};
		requiredVersion		=	0.1;
		requiredAddons[]	=	{"DZ_Data","DZ_Scripts"};
	};
};

class CfgMods
{
	class zfa_NeonSign
	{
		name				=	"zfa_NeonSign";
		credits				=	"AndreZ";
		author				=	"zfaDarkness";
		authorID			=	"0";
		type				=	"mod";
		dependencies[]		=	{"World", "Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[]		=	{"zfa_NeonSign/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value		=	"";
				files[]		=	{"zfa_NeonSign/Scripts/4_world"};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class zfa_neonsign : Inventory_Base
	{
		scope=1;
		model="zfa_NeonSign\zfa_NeonSign.p3d";
	};
};