#include "stdafx.h"
#include "Failure.h"
#include <iostream>

#include "PowerOnSelfTest.h"

using namespace std;

Failure::Failure(EmbeddedSystemX* context) : _context(context) {};

void Failure::Handle()
{
	cout << "Failure " << endl;
	_context->setState(new PowerOnSelfTest(_context));
}


Failure::~Failure()
{
}