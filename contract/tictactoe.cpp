#include <eosio/eosio.hpp>

using namespace eosio;

class tictactoe : eosio::contract {
  public:

    using contract::contract;

    [[eosio::action]] void welcome() {

        require_auth(user);
    }
};
