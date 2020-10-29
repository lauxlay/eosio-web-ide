#include <eosio/eosio.hpp>

using namespace eosio;

class [[eosio::contract]] tictactoe : public contract {
  public:
    using contract::contract;

    [[eosio::action]] 
    void welcome( name host, name challenger ) {
        require_auth( get_self() );
        
        eosio::print("Welcome, challengers ", host, " and ", challenger, " !");
    }
};
