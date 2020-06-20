#pragma once

class cRoot
{
public:
	virtual void cRoot(void) { }
	virtual void ~cRoot(void) { }

	virtual void Init(void) { }
	virtual void Setup(void) { }
	virtual void Tick(void) { }
	virtual void Dump(void) { }

};
