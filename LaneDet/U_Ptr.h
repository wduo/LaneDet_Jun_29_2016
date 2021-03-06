#pragma once

// private class for use by HasPtr only
class U_Ptr {
	friend class HasPtr_1;
	int *ip;
	size_t use;
	U_Ptr(int *p) : ip(p), use(1) { }
	~U_Ptr() { delete ip; }
};