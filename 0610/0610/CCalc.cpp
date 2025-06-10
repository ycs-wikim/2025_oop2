#include "CCalc.h"


int CCalc::operator + (int arg)
{
	return m_value - arg;
}

CCalc CCalc::operator + (CCalc arg)
{
	CCalc tmp;
	tmp.m_value = this->m_value + arg.m_value;
	return tmp;
}
