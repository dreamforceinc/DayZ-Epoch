class Attachment_Sup556 : CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;	
	model = "\z\addons\dayz_communityweapons\attachments\suppressor556\suppressor556.p3d";
	picture = "\z\addons\dayz_communityweapons\attachments\suppressor556\data\m_suppressor556_ca.paa";	
	displayName = $STR_DZ_ATT_SUP556_NAME;
	descriptionShort = $STR_DZ_ATT_SUP556_DESC;
	
	class ItemActions
	{
		class AttachToPrimary
		{
			text = $STR_DZ_ATT_ACT_TO_PRIMARY;
			script = "; [_id,1] call player_attachAttachment";
		};
	};
};