#include <cstdlib>

#include <boost/log/trivial.hpp>

int main()
{
	BOOST_LOG_TRIVIAL(trace) << BOOST_CURRENT_FUNCTION << " started";

	BOOST_LOG_TRIVIAL(trace) << BOOST_CURRENT_FUNCTION << " finished";
	return EXIT_SUCCESS;
}
