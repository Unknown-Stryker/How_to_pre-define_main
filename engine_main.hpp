#ifndef _ENGINE_MAIN_HPP_
#define _ENGINE_MAIN_HPP_
#include <functional>


#define CLIENT_MAIN(argc_name, argv_name) \
int client_main(int argc_name, char** argv_name);\
std::function<int(int, char**)> engine_main::s_client_app_entry_point;\
nothing_t pass_client_main = engine_main::set(client_main);\
int client_main(int argc_name, char** argv_name)


typedef bool nothing_t;

int main(int argc_p, char** argv_ptr_p);

class engine_main
{
	static std::function<int(int, char**)> s_client_app_entry_point;

public:
	static std::function<int(int, char**)> get();
	static nothing_t set(std::function<int(int, char**)> client_app_entry_point_p);
};
#endif