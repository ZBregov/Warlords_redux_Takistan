class CfgWLRequisitionPresets
{
	class A3ReduxAll
	{
		class WEST
		{
			class Infantry
			{
				class CUP_B_US_Soldier_OCP 					{cost = 20;		requirements[]={};	};	// "Rifleman"
				class CUP_B_BAF_Soldier_Paratrooper_DDPM	{cost = 25;		requirements[]={};	};	// "Para Trooper"
				class CUP_B_USMC_SpecOps_des				{cost = 30;		requirements[]={};	};	// "CTRG Scout"
				class CUP_B_US_Crew_OCP						{cost = 15;		requirements[]={};	};	// "Crewman"
				class CUP_B_BAF_Soldier_Helipilot_DDPM 		{cost = 10;		requirements[]={};	};	// "Helicopter Pilot"
				class CUP_B_USMC_Pilot_des 					{cost = 10;		requirements[]={};	};	// "Pilot"
				class CUP_B_US_Soldier_GL_OCP 				{cost = 50;		requirements[]={};	};	// "Grenadier"
				
				class CUP_B_US_Medic_OCP					{cost = 20;		requirements[]={};	};	// "Combat Life Saver"
				class CUP_B_US_Soldier_AR_OCP				{cost = 50;		requirements[]={};	};	// "Autorifleman"
				class CUP_B_US_Soldier_Marksman_OCP			{cost = 60;		requirements[]={};	};	// "Marksman"
				class CUP_B_US_Soldier_Engineer_OCP			{cost = 100;	requirements[]={};	};	// "Repair Specialist"
				class CUP_B_FR_Soldier_AR_DES				{cost = 80;		requirements[]={};	};	// "Heavy Gunner"
				class CUP_B_US_Soldier_LAT_OCP			    {cost = 100;	requirements[]={};	};	// "Rifleman (AT)"
				class CUP_B_US_Soldier_AT_OCP				{cost = 100;	requirements[]={};	};	// "Rifleman (Light AT)"
				class CUP_B_US_Soldier_HAT_OCP				{cost = 150;	requirements[]={};	};	// "Missile Specialist (AT)"
				class CUP_B_US_Soldier_AA_OCP				{cost = 150;	requirements[]={};	};	// "Missile Specialist (AA)"
				class CUP_B_US_Soldier_Marksman_EBR_OCP		{cost = 80;		requirements[]={};	};	// "Sharpshooter"
				class CUP_B_US_Sniper_M107_OCP				{cost = 100;	requirements[]={};	};	// "Sniper"
			};
			class Vehicles
			{
			    class CUP_B_M1030_USA                       {cost =  5;	    requirements[]={};	};	// "Quad Bike two wheels"
				class B_Quadbike_01_F						{cost =  20;	requirements[]={};	};	// "Quad Bike"
				class CUP_B_M1152_USA      					{cost = 100;	requirements[]={};	};	// "Prowler (Unarmed)"
				class CUP_B_nM1025_Unarmed_USA_DES			{cost = 300;	requirements[]={};	};	// "Hunter"
				class CUP_B_MTVR_USA        				{cost = 200;	requirements[]={};	};	// "HEMTT Transport"
				class CUP_B_MTVR_Refuel_USA		    		{cost = 500;	requirements[]={};	};	// "HEMTT Fuel"
				class CUP_B_nM997_USA_DES					{cost = 350;	requirements[]={};	};	// "HEMTT Medical"
				class CUP_B_nM1025_SOV_M2_USA_DES			{cost = 350;	requirements[]={};	};	// "Prowler (HMG)"
				class CUP_B_HMMWV_Crows_M2_USA              {cost = 350;	requirements[]={};	};	// "HMWY (crow M2)"
				class CUP_B_M1151_Deploy_USA                {cost = 350;	requirements[]={};	};	// "HMWY (HMG)"
				class B_G_Offroad_01_armed_F				{cost = 200;	requirements[]={};	};	// "Offroad (HMG)"
				class CUP_B_M1167_USA						{cost = 700;	requirements[]={};	};	// "Prowler (AT)"
				class CUP_B_MTVR_Repair_USA					{cost = 2000;	requirements[]={};	};	// "HEMTT Repair"
				class CUP_B_MTVR_Ammo_USA				    {cost = 3000;	requirements[]={};	};	// "HEMTT Ammo"
				class CUP_B_RG31_M2_GC_USA				    {cost = 1000;	requirements[]={};	};	// "Hunter HMG"
				class CUP_B_RG31_Mk19_USA				{cost = 1200;	requirements[]={};	};	// "Hunter GMG"
				
				class CUP_B_M1130_CV_M2_Desert				{cost = 500;	requirements[]={};	};	// "BLUFOR Gorgon"
				class CUP_B_M1128_MGS_Desert				{cost = 2500;	requirements[]={};	};	// "AMV-7 Marshall"
				class CUP_B_M1135_ATGMV_Desert				{cost = 3000;	requirements[]={};	};	// "IFV-6c Panther"
				class CUP_B_M7Bradley_USA_D					{cost = 5000;	requirements[]={};	};	// "IFV-6a Cheetah"
				class CUP_B_M2A3Bradley_USA_D               {cost = 5000;	requirements[]={};	};	// "Bradley"
				class CUP_B_M1A1SA_Desert_US_Army				{cost = 9000;	requirements[]={};	};	// "M2A1 Slammer"
				class CUP_B_M1A2C_TUSK_II_Desert_US_Army	{cost = 10500;	requirements[]={};	};	// "M2A1 Slammer UP"
				class CUP_B_M1129_MC_Mk19_Desert			{cost = 2000;	requirements[]={};	};	// "M4 Scorcher" 
				class CUP_B_M270_HE_USA                     {cost = 20000;	requirements[]={};	};	// "M4 Scorcher"  
				 
			};
			class Aircraft
			{
				class CUP_B_MH6J_OBS_USA					{cost = 500;	requirements[]={"H"};	};	// "MH-9 Hummingbird"
				class CUP_B_AH6M_USA                		{cost = 1500;	requirements[]={"H"};	};	// "AH-9 Pawnee"
				class CUP_B_UH60M_US     					{cost = 1000;	requirements[]={"H"};	};	// "UH-80 Ghost Hawk"
				class CUP_B_MH47E_USA    					{cost = 1500;	requirements[]={"H"};	};	// "CH-67 Huron"
				class CUP_B_MH60L_DAP_4x_US			        {cost = 15000;	requirements[]={"H"};	};	// "AH-99 Blackfoot"
				class CUP_B_MV22_USMC       				{cost = 1800;	requirements[]={"A"};	};	// "V-44 X Blackfish(Inf)";
				class CUP_B_MV22_VIV_USMC					{cost = 1800;	requirements[]={"A"};	};	// "V-44 X Blackfish(Vic)";
				class CUP_B_MV22_USMC_RAMPGUN				{cost = 12000;	requirements[]={"A"};	};	// "V-44 X Blackfish (Armed)"
				class CUP_B_CESSNA_T41_ARMED_USA			{cost = 32000;	requirements[]={"A"};	};	// "F/A-181 Black Wasp II";
				class CUP_B_A10_DYN_USA             		{cost = 18000;	requirements[]={"A"};	};	// "A-164 Wipeout (CAS)"
				class CUP_B_AH64D_DL_USA        			{cost = 40000;	requirements[]={"A"};	};	// "F/A-181 Black Wasp II Stealth";
				
			};
			class Naval
			{
				class CUP_B_Frigate_ANZAC                  {cost = 40000;	requirements[]={"W"};	};	// "F/A-181 Black Wasp II Stealth";
			};
			class Gear
			{
				class CUP_BOX_USMC_WpsLaunch_F				{cost = 300;	requirements[]={};	};	// "Launchers [NATO]"
				class CUP_BOX_US_ARMY_WpsLaunch_F			{cost = 300;	requirements[]={};	};	// "Launchers [NATO]"
				class Box_NATO_AmmoVeh_F					{cost = 500;	requirements[]={};	};	// "Vehicle Ammo [NATO]"
			};
			class Defences
			{
				class CUP_B_M2StaticMG_MiniTripod_US							{cost = 300;	requirements[]={};	};	// "Mk30 HMG .50"
				class CUP_B_M2StaticMG_US					{cost = 300;	requirements[]={};	};	// "Mk30 HMG .50 (Raised)"
				class CUP_B_CUP_Stinger_AA_pod_US			{cost = 600;	requirements[]={};	};	// "Static Titan Launcher (AA) [NATO]"
				class CUP_B_TOW2_TriPod_US					{cost = 600;	requirements[]={};	};	// "Static Titan Launcher (AT) [NATO]"
				class B_SAM_System_03_F						{cost = 8000;	requirements[]={};	offset[]={0, 5.3, 0};};	// "MIM-145 Defender"
				class B_Radar_System_01_F					{cost = 5000;	requirements[]={};	offset[]={0, 5.3, 0};};	// "AN/MPQ-105 Radar"
				class CUP_B_M252_US							{cost = 10000;	requirements[]={};	};	// "Mortar"
				class CUP_B_M119_US							{cost = 10000;	requirements[]={};	};	// "Mortar"
				class B_UGV_01_rcws_F						{cost = 2500;	requirements[]={};	};	// "UGAS" 
				class B_UGV_02_Demining_F					{cost = 1500;	requirements[]={};	};	// "UGAS demining"
				

			};
		};
		class EAST
		{
			class Infantry
			{
				class CUP_O_RU_Soldier_Ratnik_BeigeDigital	         {cost = 20;	requirements[]={};	};	// "Rifleman"
				class CUP_O_RU_Soldier_Crew_M_BeigeDigital 	         {cost = 15;	requirements[]={};	};	// "Crewman"
				class CUP_O_RU_Pilot_M_EMR 					         {cost = 10;	requirements[]={};	};	// "Pilot"
				class CUP_O_RU_Soldier_GL_Ratnik_BeigeDigital	     {cost = 50;	requirements[]={};	};	// "Grenadier"
				class CUP_O_RU_Recon_Medic_Ratnik_BeigeDigital	     {cost = 20;	requirements[]={};	};	// "Combat Life Saver"
				class CUP_O_RU_Soldier_AR_Ratnik_BeigeDigital		 {cost = 50;	requirements[]={};	};	// "Autorifleman"
				class CUP_O_RU_Soldier_A_Ratnik_BeigeDigital		 {cost = 25;	requirements[]={};	};	// "Ammo Bearer"
				class CUP_O_RU_Soldier_Marksman_Ratnik_BeigeDigital	 {cost = 60;	requirements[]={};	};	// "Marksman"
				class CUP_O_RU_Soldier_Repair_Ratnik_BeigeDigital	 {cost = 100;	requirements[]={};	};	// "Repair Specialist"
				class CUP_O_RU_Soldier_MG_M_BeigeDigital			 {cost = 80;	requirements[]={};	};	// "Heavy Gunner"
				class CUP_O_RU_Soldier_AT_M_BeigeDigital			 {cost = 100;	requirements[]={};	};	// "Rifleman (AT)"
				class CUP_O_RU_Soldier_LAT_Ratnik_BeigeDigital		 {cost = 150;	requirements[]={};	};	// "Viper Rifleman (AT)"
				class CUP_O_RU_Soldier_HAT_M_BeigeDigital			 {cost = 150;	requirements[]={};	};	// "Missile Specialist (AT)"
				class CUP_O_RU_Soldier_AA_Ratnik_BeigeDigital		 {cost = 150;	requirements[]={};	};	// "Missile Specialist (AA)"
				class CUP_O_RU_Soldier_Marksman_M_BeigeDigital		 {cost = 80;	requirements[]={};	};	// "Sharpshooter"
				class CUP_O_RU_Sniper_KSVK_M_EMR				 {cost = 100;	requirements[]={};	};	// "Sniper?????????????????????????????"
			};
			class Vehicles
			{=
		      { class CUP_O_TT_650_CHDKZ
				class CUP_O_TT650_CHDKZ                    {cost = 5;	requirements[]={};	};	// "Quad Biketwowheels"
				class O_Quadbike_01_F						{cost = 5;	requirements[]={};	};	// "Quad Bike"
				class CUP_O_UAZ_Unarmed_RU					{cost = 20;	requirements[]={};	};	// "Qilin (Unarmed)"
				class CUP_O_GAZ_Vodnik_Unarmed_RU			{cost = 300;	requirements[]={};	};	// "Ifrit"
				class CUP_O_Kamaz_RU				       {cost = 200;	requirements[]={};	};	// "Tempest Transport"
				class CUP_O_Kamaz_Refuel_RU					{cost = 500;	requirements[]={};	};	// "Tempest Fuel"
				class CUP_O_Volha_SLA					    {cost = 350;	requirements[]={};	};	// "Tempest Medical"
				class CUP_O_UAZ_MG_RU						{cost = 350;	requirements[]={};	};	// "Qilin (Minigun)"
				class O_G_Offroad_01_armed_F				{cost = 200;	requirements[]={};	};	// "Offroad (HMG)"
				class CUP_O_UAZ_METIS_RU			    	{cost = 700;	requirements[]={};	};	// "Qilin (AT)"
				class CUP_O_Kamaz_Repair_RU				   {cost = 2000;	requirements[]={};	};	// "Tempest Repair"
				class CUP_O_Kamaz_Reammo_RU				   {cost = 3000;	requirements[]={};	};	// "Tempest Ammo"
				class CUP_O_GAZ_Vodnik_BPPU_RU			   {cost = 1000;	requirements[]={};	};	// "Ifrit HMG"
				class CUP_O_BTR90_RU					   {cost = 1200;	requirements[]={};	};	// "Ifrit GMG"
				class CUP_O_BTR80A_DESERT_RU			   {cost = 2000;	requirements[]={};	};	// "MSE-3 Marid"
				class CUP_O_BMP2_RU				           {cost = 6000;	requirements[]={};	};	// "BTR-K Kamysh"
				class CUP_O_2S6M_RU					       {cost = 5000;	requirements[]={};	};	// "ZSU-39 Tigris"
				class CUP_O_Ural_ZU23_RU				   {cost = 5000;	requirements[]={};	};	// "ZSU-39 Tigris"
				class CUP_O_T72_RU						   {cost = 12000;	requirements[]={};	};	// "T-140 Angara"
				class CUP_O_T90_RU					       {cost = 13000;	requirements[]={};	};	// "T-140K Angara"
				class CUP_O_BM21_RU						   {cost = 20000;	requirements[]={};	};	// "2S9 Sochor"
				

			};
			class Aircraft
			{
				class CUP_O_Mi8_medevac_RU			        {cost = 700;	requirements[]={"H"};	};	// "PO-30 Orca (Unarmed)"
				class CUP_O_Ka60_Grey_RU		            {cost = 5000;	requirements[]={"H"};	};	// "PO-30 Orca"
				class CUP_O_Mi6T_RU				            {cost = 500;	requirements[]={"H"};	};	// "Mi-290 Taru"
				class CUP_O_Mi6A_RU			                {cost = 1000;	requirements[]={"H"};	};	// "Mi-290 Taru (Transport)"
				class CUP_O_Mi8_RU 		                    {cost = 1000;	requirements[]={"H"};	};	// "Mi-290 Taru (Medical)"
				class CUP_O_Mi24_V_Dynamic_RU 	                {cost = 12000;	requirements[]={"H"};	};	// "Mi-48 Kajman????????????????????"
				class CUP_O_Ka52_RU             	        {cost = 20000;	requirements[]={"A"};	};	// "Y-32 Xi'an (vehicle Transport)"
				class CUP_O_Ka50_DL_RU             	        {cost = 20000;	requirements[]={"A"};	};	// "Y-32 Xi'an (vehicle Transport)"
				class CUP_O_Su25_Dyn_RU		                {cost = 18000;	requirements[]={"A"};	};	// "To-199 Neophron (CAS)"
				class CUP_O_L39_TK					        {cost = 10300;	requirements[]={"A"};	};	// "To-201 Shikra"
				
			};
			class Naval
			{
				class O_Boat_Armed_01_hmg_F					{cost = 750;	requirements[]={"W"};	};	// "Speedboat HMG"
			};
			class Gear
			{
				class CUP_BOX_RU_WpsLaunch_F					{cost = 300;	requirements[]={};	};	// "Launchers [CSAT]"
				class Box_East_AmmoVeh_F					{cost = 500;	requirements[]={};	};	// "Vehicle Ammo [CSAT]"
			};
			class Defences
			{
				class CUP_O_AGS_RU_M_BeigeDigital						{cost = 300;	requirements[]={};	};	// "Mk30 HMG .50"
				class CUP_O_KORD_high_RU						{cost = 300;	requirements[]={};	};	// "Mk30 HMG .50"
				class CUP_O_KORD_RU						{cost = 300;	requirements[]={};	};	// "Mk30 HMG .50 (Raised)"
				class CUP_O_Igla_AA_pod_RU							{cost = 600;	requirements[]={};	};	// "Static Titan Launcher (AA) [CSAT]"
				class CUP_O_Kornet_RU							{cost = 600;	requirements[]={};	};	// "Static Titan Launcher (AT) [CSAT]"
				class CUP_O_Metis_RU							{cost = 600;	requirements[]={};	};	// "Static Titan Launcher (AT) [CSAT]"
				class O_SAM_System_04_F						{cost = 8000;	requirements[]={};	offset[]={0, 5.3, 0};};	// "S-750 Rhea"
				class CUP_O_ZU23_RU					{cost = 8000;	requirements[]={};	offset[]={0, 5.3, 0};};	// "S-750 Rhea"
				class O_Radar_System_02_F					{cost = 5000;	requirements[]={};	offset[]={0, 5.3, 0};};	// "R-750 Cronus Radar"
				class CUP_O_2b14_82mm_RU							{cost = 10000;	requirements[]={};	};	// "Mortar"
				class CUP_O_D30_RU							{cost = 10000;	requirements[]={};	};	// "Mortar"
				class O_UGV_01_rcws_F						{cost = 2500;	requirements[]={};	};	// "UGAV rcws"
				class O_UGV_02_Demining_F					{cost = 1500;	requirements[]={};	};	// "UGAV demining"

			};
		};
	};
};