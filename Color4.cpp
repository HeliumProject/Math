#include "MathPch.h"
#include "Math/Color4.h"
#include "Reflect/TranslatorDeduction.h"

REFLECT_DEFINE_BASE_STRUCTURE( Helium::Color4 );

using namespace Helium;

void Color4::PopulateStructure( Reflect::Structure& comp )
{
	comp.AddField( &Color4::r, "r" );
	comp.AddField( &Color4::g, "g" );
	comp.AddField( &Color4::b, "b" );
	comp.AddField( &Color4::a, "a" );
}