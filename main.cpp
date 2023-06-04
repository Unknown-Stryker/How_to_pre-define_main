#include "engine_main.hpp"


int main(int argc_p, char** argv_ptr_p)
{
	std::function<int(int, char**)> l_client_app_entry_point = engine_main::get();
	return l_client_app_entry_point(argc_p, argv_ptr_p);
}