// this program is automatically generated by jenerator. do not edit.
#include "../framework/keeper.hpp"
#include "../framework/aggregators.hpp"
#include "anomaly_types.hpp"
using namespace jubatus;
using namespace jubatus::framework;
int main(int args, char** argv){
  keeper k(keeper_argv(args,argv));
  k.register_broadcast<bool, config_data >("set_config", pfi::lang::function<bool(bool,bool)>(&all_and)); //update
  k.register_random<config_data >("get_config"); //pass analysis
  k.register_cht<2, bool >("clear_row", pfi::lang::function<bool(bool,bool)>(&all_and)); //update
  k.register_random<std::string >("get_id"); //pass update
  k.register_cht<2, float, datum >("update", pfi::lang::function<float(float,float)>(&pass<float >)); //update
  k.register_broadcast<bool >("clear", pfi::lang::function<bool(bool,bool)>(&all_and)); //update
  k.register_random<float, datum >("calc_score"); //pass analysis
  k.register_broadcast<std::vector<std::string > >("get_all_rows", pfi::lang::function<std::vector<std::string >(std::vector<std::string >,std::vector<std::string >)>(&concat<std::string >)); //analysis
  k.register_broadcast<bool, std::string >("save", pfi::lang::function<bool(bool,bool)>(&all_and)); //update
  k.register_broadcast<bool, std::string >("load", pfi::lang::function<bool(bool,bool)>(&all_and)); //update
  k.register_broadcast<std::map<std::string,std::map<std::string,std::string > > >("get_status", pfi::lang::function<std::map<std::string,std::map<std::string,std::string > >(std::map<std::string,std::map<std::string,std::string > >,std::map<std::string,std::map<std::string,std::string > >)>(&merge<std::string,std::map<std::string,std::string > >)); //analysis
  k.run();
}
