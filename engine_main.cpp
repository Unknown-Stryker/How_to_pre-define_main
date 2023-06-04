#include "engine_main.hpp"


std::function<int(int, char**)> engine_main::get()
{
	return s_client_app_entry_point;
}

nothing_t engine_main::set(std::function<int(int, char**)> client_app_entry_point_p)
{
	s_client_app_entry_point = client_app_entry_point_p;
	return nothing_t();
}