#include "chrono.h"

namespace Chrono {
	//member function definitions

Date::Date(int yy, Month mm, int dd)
	: y{yy}, m{mm}, d{dd}
{
	if(!is_date(yy,mm,dd)) throw Invalid{};
}
