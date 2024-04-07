class zfa_neonsign : ItemBase
{
	zfa_neonsign_Light 		m_Light;

	void zfa_neonsign()
	{
		if (!m_Light)
			CreateLight();
	}
	
	void CreateLight()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() ) // client side
		{
			m_Light = zfa_neonsign_Light.Cast( ScriptedLightBase.CreateLight( zfa_neonsign_Light, "0 0 0") );
			m_Light.AttachOnMemoryPoint(this, "light");
			m_Light.SetColorToRed();
		}
	}

	//================================================================
	// RESTRICTIONS
	//================================================================
	override bool CanReceiveItemIntoHands(EntityAI item_to_hands)
	{
		return false;
	}

	override bool CanSaveItemInHands(EntityAI item_in_hands)
	{
		return false;
	}

	override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
	}

	override bool CanPutInCargo(EntityAI parent)
	{
		return false;
	}

	override bool IsTakeable()
	{
		return false;
	}

	override bool IsInventoryVisible()
	{
		return false;
	}	
}